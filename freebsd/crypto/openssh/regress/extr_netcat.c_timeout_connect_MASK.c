
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sockaddr {int dummy; } ;
struct pollfd {int fd; int events; } ;
typedef int socklen_t ;
typedef int optval ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_0 (int,struct sockaddr const*,int) ;
 int FUNC_1 (int,char*) ;
 int VAR_8 ;
 int FUNC_2 (int,int ,int) ;
 int FUNC_3 (int,int ,int ,int*,int*) ;
 int FUNC_4 (struct pollfd*,int,int) ;
 int VAR_9 ;

int
FUNC_5(int VAR_10, const struct sockaddr *VAR_11, socklen_t VAR_12)
{
 struct pollfd VAR_13;
 socklen_t VAR_14;
 int VAR_15 = 0, VAR_16;
 int VAR_17;

 if (VAR_9 != -1) {
  VAR_15 = FUNC_2(VAR_10, VAR_2, 0);
  if (FUNC_2(VAR_10, VAR_3, VAR_15 | VAR_4) == -1)
   FUNC_1(1, "set non-blocking mode");
 }

 if ((VAR_17 = FUNC_0(VAR_10, VAR_11, VAR_12)) != 0 && VAR_8 == VAR_0) {
  VAR_13.fd = VAR_10;
  VAR_13.events = VAR_5;
  if ((VAR_17 = FUNC_4(&VAR_13, 1, VAR_9)) == 1) {
   VAR_14 = sizeof(VAR_16);
   if ((VAR_17 = FUNC_3(VAR_10, VAR_6, VAR_7,
       &VAR_16, &VAR_14)) == 0) {
    VAR_8 = VAR_16;
    VAR_17 = VAR_16 == 0 ? 0 : -1;
   }
  } else if (VAR_17 == 0) {
   VAR_8 = VAR_1;
   VAR_17 = -1;
  } else
   FUNC_1(1, "poll failed");
 }

 if (VAR_9 != -1 && FUNC_2(VAR_10, VAR_3, VAR_15) == -1)
  FUNC_1(1, "restoring flags");

 return (VAR_17);
}
