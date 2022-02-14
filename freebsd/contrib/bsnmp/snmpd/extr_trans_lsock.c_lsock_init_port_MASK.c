
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct tport {int dummy; } ;
struct sockaddr_un {void* sun_len; void* sun_family; int sun_path; } ;
struct sockaddr {int dummy; } ;
struct TYPE_2__ {int fd; int * id; } ;
struct lsock_port {scalar_t__ type; int str_sock; TYPE_1__ input; int name; int peers; int * str_id; } ;
struct lsock_peer {scalar_t__ type; int str_sock; TYPE_1__ input; int name; int peers; int * str_id; } ;
typedef int sa ;
typedef int on ;


 void* VAR_0 ;
 scalar_t__ VAR_1 ;
 struct lsock_port* FUNC_0 (int *) ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 void* FUNC_1 (struct sockaddr_un*) ;
 scalar_t__ FUNC_2 (int,struct sockaddr*,int) ;
 int FUNC_3 (int ,int) ;
 int FUNC_4 (int) ;
 scalar_t__ VAR_14 ;
 void* FUNC_5 (int,int ,struct lsock_port*,int *) ;
 int FUNC_6 (int,int) ;
 int VAR_15 ;
 int VAR_16 ;
 int FUNC_7 (int ) ;
 int FUNC_8 (int,int ,int ,int const*,int) ;
 void* FUNC_9 (int ,int ,int ) ;
 int FUNC_10 (int ,int ,int) ;
 int FUNC_11 (int ,char*,...) ;

__attribute__((used)) static int
FUNC_12(struct tport *VAR_17)
{
 struct lsock_port *VAR_18 = (struct lsock_port *)VAR_17;
 struct sockaddr_un VAR_19;

 if (VAR_18->type == VAR_3 || VAR_18->type == VAR_4) {
  if ((VAR_18->str_sock = FUNC_9(VAR_7, VAR_13, 0)) < 0) {
   FUNC_11(VAR_5, "creating local socket: %m");
   return (VAR_11);
  }

  FUNC_10(VAR_19.sun_path, VAR_18->name, sizeof(VAR_19.sun_path));
  VAR_19.sun_family = VAR_0;
  VAR_19.sun_len = FUNC_1(&VAR_19);

  (void)FUNC_7(VAR_18->name);

  if (FUNC_2(VAR_18->str_sock, (struct sockaddr *)&VAR_19, sizeof(VAR_19))) {
   if (VAR_14 == VAR_1) {
    FUNC_4(VAR_18->str_sock);
    VAR_18->str_sock = -1;
    return (VAR_9);
   }
   FUNC_11(VAR_5, "bind: %s %m", VAR_18->name);
   FUNC_4(VAR_18->str_sock);
   VAR_18->str_sock = -1;
   return (VAR_8);
  }
  if (FUNC_3(VAR_18->name, 0666) == -1)
   FUNC_11(VAR_6, "chmod(%s,0666): %m", VAR_18->name);

  if (FUNC_6(VAR_18->str_sock, 10) == -1) {
   FUNC_11(VAR_5, "listen: %s %m", VAR_18->name);
   (void)FUNC_7(VAR_18->name);
   FUNC_4(VAR_18->str_sock);
   VAR_18->str_sock = -1;
   return (VAR_8);
  }

  VAR_18->str_id = FUNC_5(VAR_18->str_sock, VAR_16, VAR_18, ((void*)0));
  if (VAR_18->str_id == ((void*)0)) {
   (void)FUNC_7(VAR_18->name);
   FUNC_4(VAR_18->str_sock);
   VAR_18->str_sock = -1;
   return (VAR_8);
  }
 } else {
  struct lsock_peer *VAR_20;
  const int VAR_21 = 1;

  VAR_20 = FUNC_0(&VAR_18->peers);

  if ((VAR_20->input.fd = FUNC_9(VAR_7, VAR_12, 0)) < 0) {
   FUNC_11(VAR_5, "creating local socket: %m");
   return (VAR_11);
  }

  if (FUNC_8(VAR_20->input.fd, 0, VAR_2, &VAR_21,
      sizeof(VAR_21)) == -1) {
   FUNC_11(VAR_5, "setsockopt(LOCAL_CREDS): %m");
   FUNC_4(VAR_20->input.fd);
   VAR_20->input.fd = -1;
   return (VAR_8);
  }

  FUNC_10(VAR_19.sun_path, VAR_18->name, sizeof(VAR_19.sun_path));
  VAR_19.sun_family = VAR_0;
  VAR_19.sun_len = FUNC_1(&VAR_19);

  (void)FUNC_7(VAR_18->name);

  if (FUNC_2(VAR_20->input.fd, (struct sockaddr *)&VAR_19, sizeof(VAR_19))) {
   if (VAR_14 == VAR_1) {
    FUNC_4(VAR_20->input.fd);
    VAR_20->input.fd = -1;
    return (VAR_9);
   }
   FUNC_11(VAR_5, "bind: %s %m", VAR_18->name);
   FUNC_4(VAR_20->input.fd);
   VAR_20->input.fd = -1;
   return (VAR_8);
  }
  if (FUNC_3(VAR_18->name, 0666) == -1)
   FUNC_11(VAR_6, "chmod(%s,0666): %m", VAR_18->name);

  VAR_20->input.id = FUNC_5(VAR_20->input.fd, VAR_15,
      VAR_20, ((void*)0));
  if (VAR_20->input.id == ((void*)0)) {
   (void)FUNC_7(VAR_18->name);
   FUNC_4(VAR_20->input.fd);
   VAR_20->input.fd = -1;
   return (VAR_8);
  }
 }
 return (VAR_10);
}
