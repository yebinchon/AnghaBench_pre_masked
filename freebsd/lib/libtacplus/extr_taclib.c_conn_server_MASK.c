
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct timeval {scalar_t__ tv_usec; int tv_sec; } ;
struct tac_server {int timeout; int addr; } ;
struct tac_handle {size_t cur_server; int fd; struct tac_server* servers; } ;
struct sockaddr {int dummy; } ;
typedef int socklen_t ;
typedef int fd_set ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int,int *) ;
 int FUNC_1 (int *) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_2 (int) ;
 scalar_t__ FUNC_3 (int,struct sockaddr*,int) ;
 int VAR_10 ;
 int FUNC_4 (int,int ,int) ;
 int FUNC_5 (struct tac_handle*,char*,...) ;
 scalar_t__ FUNC_6 (int,struct sockaddr*,int*) ;
 int FUNC_7 (int,int ,int ,int*,int*) ;
 int FUNC_8 (int,int *,int *,int *,struct timeval*) ;
 int FUNC_9 (int ,int ,int ) ;
 int FUNC_10 (int) ;

__attribute__((used)) static int
FUNC_11(struct tac_handle *VAR_11)
{
 const struct tac_server *VAR_12 = &VAR_11->servers[VAR_11->cur_server];
 int VAR_13;

 if ((VAR_11->fd = FUNC_9(VAR_6, VAR_7, VAR_4)) == -1) {
  FUNC_5(VAR_11, "Cannot create socket: %s", FUNC_10(VAR_10));
  return -1;
 }
 if ((VAR_13 = FUNC_4(VAR_11->fd, VAR_2, 0)) == -1 ||
     FUNC_4(VAR_11->fd, VAR_3, VAR_13 | VAR_5) == -1) {
  FUNC_5(VAR_11, "Cannot set non-blocking mode on socket: %s",
      FUNC_10(VAR_10));
  FUNC_2(VAR_11->fd);
  VAR_11->fd = -1;
  return -1;
 }
 if (FUNC_3(VAR_11->fd, (struct sockaddr *)&VAR_12->addr,
     sizeof VAR_12->addr) == 0)
  return 0;

 if (VAR_10 == VAR_0) {
  fd_set VAR_14;
  struct timeval VAR_15;
  int VAR_16;
  struct sockaddr VAR_17;
  socklen_t VAR_18, VAR_19;
  int VAR_20;


  FUNC_1(&VAR_14);
  FUNC_0(VAR_11->fd, &VAR_14);
  VAR_15.tv_sec = VAR_12->timeout;
  VAR_15.tv_usec = 0;
  VAR_16 = FUNC_8(VAR_11->fd + 1, ((void*)0), &VAR_14, ((void*)0), &VAR_15);
  if (VAR_16 == -1) {
   FUNC_5(VAR_11, "select: %s", FUNC_10(VAR_10));
   FUNC_2(VAR_11->fd);
   VAR_11->fd = -1;
   return -1;
  }
  if (VAR_16 == 0) {
   FUNC_5(VAR_11, "connect: timed out");
   FUNC_2(VAR_11->fd);
   VAR_11->fd = -1;
   return -1;
  }


  VAR_19 = sizeof VAR_17;
  if (FUNC_6(VAR_11->fd, &VAR_17, &VAR_19) == 0)
   return 0;

  if (VAR_10 != VAR_1) {
   FUNC_5(VAR_11, "getpeername: %s", FUNC_10(VAR_10));
   FUNC_2(VAR_11->fd);
   VAR_11->fd = -1;
   return -1;
  }


  VAR_18 = sizeof VAR_20;
  FUNC_7(VAR_11->fd, VAR_8, VAR_9, &VAR_20, &VAR_18);
  VAR_10 = VAR_20;
 }
 FUNC_5(VAR_11, "connect: %s", FUNC_10(VAR_10));
 FUNC_2(VAR_11->fd);
 VAR_11->fd = -1;
 return -1;
}
