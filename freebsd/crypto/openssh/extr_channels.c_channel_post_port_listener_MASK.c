
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct ssh {int dummy; } ;
struct sockaddr_storage {int dummy; } ;
struct sockaddr {int dummy; } ;
typedef int socklen_t ;
typedef int fd_set ;
typedef int addr ;
struct TYPE_5__ {scalar_t__ host_port; scalar_t__ type; int * path; int listening_port; int local_maxpacket; int local_window_max; scalar_t__ notbefore; int sock; } ;
typedef TYPE_1__ Channel ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 int FUNC_0 (int ,int *) ;
 scalar_t__ VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 scalar_t__ VAR_8 ;
 scalar_t__ VAR_9 ;
 int FUNC_1 (int ,struct sockaddr*,int*) ;
 TYPE_1__* FUNC_2 (struct ssh*,char*,int,int,int,int,int ,int ,int ,char*,int) ;
 int FUNC_3 (char*,int ,int *,scalar_t__) ;
 scalar_t__ VAR_10 ;
 int FUNC_4 (char*,int ) ;
 scalar_t__ FUNC_5 () ;
 int FUNC_6 (struct ssh*,TYPE_1__*,char*) ;
 int FUNC_7 (int) ;
 int FUNC_8 (scalar_t__) ;
 int * FUNC_9 (int *) ;

__attribute__((used)) static void
FUNC_10(struct ssh *VAR_11, Channel *VAR_12,
    fd_set *VAR_13, fd_set *VAR_14)
{
 Channel *VAR_15;
 struct sockaddr_storage VAR_16;
 int VAR_17, VAR_18;
 socklen_t VAR_19;
 char *VAR_20;

 if (!FUNC_0(VAR_12->sock, VAR_13))
  return;

 FUNC_3("Connection to port %d forwarding to %.100s port %d requested.",
     VAR_12->listening_port, VAR_12->path, VAR_12->host_port);

 if (VAR_12->type == VAR_8) {
  VAR_18 = VAR_7;
  VAR_20 = "forwarded-tcpip";
 } else if (VAR_12->type == VAR_9) {
  VAR_18 = VAR_7;
  VAR_20 = "forwarded-streamlocal@openssh.com";
 } else if (VAR_12->host_port == VAR_5) {
  VAR_18 = VAR_7;
  VAR_20 = "direct-streamlocal@openssh.com";
 } else if (VAR_12->host_port == 0) {
  VAR_18 = VAR_6;
  VAR_20 = "dynamic-tcpip";
 } else {
  VAR_18 = VAR_7;
  VAR_20 = "direct-tcpip";
 }

 VAR_19 = sizeof(VAR_16);
 VAR_17 = FUNC_1(VAR_12->sock, (struct sockaddr *)&VAR_16, &VAR_19);
 if (VAR_17 < 0) {
  if (VAR_10 != VAR_1 && VAR_10 != VAR_4 &&
      VAR_10 != VAR_0)
   FUNC_4("accept: %.100s", FUNC_8(VAR_10));
  if (VAR_10 == VAR_2 || VAR_10 == VAR_3)
   VAR_12->notbefore = FUNC_5() + 1;
  return;
 }
 if (VAR_12->host_port != VAR_5)
  FUNC_7(VAR_17);
 VAR_15 = FUNC_2(VAR_11, VAR_20, VAR_18, VAR_17, VAR_17, -1,
     VAR_12->local_window_max, VAR_12->local_maxpacket, 0, VAR_20, 1);
 VAR_15->listening_port = VAR_12->listening_port;
 VAR_15->host_port = VAR_12->host_port;
 if (VAR_12->path != ((void*)0))
  VAR_15->path = FUNC_9(VAR_12->path);

 if (VAR_18 != VAR_6)
  FUNC_6(VAR_11, VAR_15, VAR_20);
}
