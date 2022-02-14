
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_6__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


struct sockaddr_in {int sin_addr; } ;
struct sockaddr {int dummy; } ;
struct pollfd {scalar_t__ fd; int events; int revents; } ;
struct in_addr {int dummy; } ;
struct hostent {char* h_name; } ;
typedef scalar_t__ ssize_t ;
typedef int socklen_t ;
typedef int sin ;
struct TYPE_11__ {scalar_t__ socket; int in_fd; scalar_t__ out; int in; int client_ip; int client_hn; } ;
struct TYPE_10__ {int log; TYPE_2__ console; } ;
typedef TYPE_1__ osm_opensm_t ;
typedef TYPE_2__ osm_console_t ;
typedef int nfds_t ;
struct TYPE_12__ {scalar_t__ on; int (* loop_function ) (TYPE_1__*,scalar_t__) ;} ;


 int VAR_0 ;
 int FUNC_0 (int *,int ,char*,int ,...) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (scalar_t__,struct sockaddr*,int*) ;
 int FUNC_2 (TYPE_2__*,int *) ;
 int FUNC_3 (TYPE_2__*,int,int *) ;
 int FUNC_4 (int) ;
 int VAR_4 ;
 int FUNC_5 (scalar_t__) ;
 int FUNC_6 (char*) ;
 struct hostent* FUNC_7 (char const*,int,int ) ;
 scalar_t__ FUNC_8 (char**,size_t*,int ) ;
 int * FUNC_9 (int ,int *,int ,int) ;
 scalar_t__ FUNC_10 (TYPE_2__*) ;
 TYPE_6__ VAR_5 ;
 scalar_t__ FUNC_11 () ;
 int FUNC_12 (scalar_t__) ;
 int FUNC_13 (char*,TYPE_1__*) ;
 scalar_t__ FUNC_14 (struct pollfd*,int,int) ;
 int FUNC_15 (int ,int,char*,...) ;
 int FUNC_16 (int ) ;
 int FUNC_17 (TYPE_1__*,scalar_t__) ;

int FUNC_18(osm_opensm_t * VAR_6)
{
 struct pollfd VAR_7[2];
 char *VAR_8;
 size_t VAR_9;
 ssize_t VAR_10;
 struct pollfd *VAR_11;
 nfds_t VAR_12;
 osm_console_t *VAR_13 = &VAR_6->console;

 VAR_7[0].fd = VAR_13->socket;
 VAR_7[0].events = VAR_3;
 VAR_7[0].revents = 0;

 VAR_7[1].fd = VAR_13->in_fd;
 VAR_7[1].events = VAR_3;
 VAR_7[1].revents = 0;

 VAR_11 = VAR_13->socket < 0 ? &VAR_7[1] : VAR_7;
 VAR_12 = VAR_13->socket < 0 || VAR_7[1].fd < 0 ? 1 : 2;

 if (VAR_5.on && FUNC_11() &&
     VAR_5.loop_function) {
  if (VAR_13->out) {
   VAR_5.loop_function(VAR_6, VAR_13->out);
   FUNC_5(VAR_13->out);
  } else {
   VAR_5.on = 0;
  }
 }

 if (FUNC_14(VAR_11, VAR_12, 1000) <= 0)
  return 0;
 if (VAR_7[1].revents & VAR_3) {
  VAR_8 = ((void*)0);

  VAR_10 = FUNC_8(&VAR_8, &VAR_9, VAR_13->in);
  if (VAR_10 > 0) {

   FUNC_13(VAR_8, VAR_6);
   if (!VAR_5.on) {
    FUNC_12(VAR_13->out);
   }
  } else
   FUNC_2(VAR_13, &VAR_6->log);
  if (VAR_8)
   FUNC_6(VAR_8);
  return 0;
 }

 if (VAR_7[1].revents & VAR_2) {
  return -1;
 }

 return 0;
}
