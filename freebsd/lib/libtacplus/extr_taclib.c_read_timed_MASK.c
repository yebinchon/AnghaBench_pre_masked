
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct timeval {scalar_t__ tv_sec; } ;
struct tac_handle {scalar_t__ fd; } ;
typedef int fd_set ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (scalar_t__,int *) ;
 int FUNC_1 (int *) ;
 scalar_t__ VAR_1 ;
 int FUNC_2 (struct tac_handle*,char*,...) ;
 int FUNC_3 (struct timeval*,int *) ;
 int FUNC_4 (scalar_t__,char*,size_t) ;
 int FUNC_5 (scalar_t__,int *,int *,int *,struct timeval*) ;
 int FUNC_6 (scalar_t__) ;
 int FUNC_7 (struct timeval const*,struct timeval*,struct timeval*) ;

__attribute__((used)) static int
FUNC_8(struct tac_handle *VAR_2, void *VAR_3, size_t VAR_4,
    const struct timeval *VAR_5)
{
 char *VAR_6;

 VAR_6 = (char *)VAR_3;
 while (VAR_4 > 0) {
  int VAR_7;

  VAR_7 = FUNC_4(VAR_2->fd, VAR_6, VAR_4);
  if (VAR_7 == -1) {
   struct timeval VAR_8;
   int VAR_9;

   if (VAR_1 != VAR_0) {
    FUNC_2(VAR_2, "Network read error: %s",
        FUNC_6(VAR_1));
    return -1;
   }


   FUNC_3(&VAR_8, ((void*)0));
   FUNC_7(VAR_5, &VAR_8, &VAR_8);
   if (VAR_8.tv_sec >= 0) {
    fd_set VAR_10;

    FUNC_1(&VAR_10);
    FUNC_0(VAR_2->fd, &VAR_10);
    VAR_9 =
        FUNC_5(VAR_2->fd + 1, &VAR_10, ((void*)0), ((void*)0), &VAR_8);
    if (VAR_9 == -1) {
     FUNC_2(VAR_2, "select: %s",
         FUNC_6(VAR_1));
     return -1;
    }
   } else
    VAR_9 = 0;
   if (VAR_9 == 0) {
    FUNC_2(VAR_2, "Network read timed out");
    return -1;
   }
  } else if (VAR_7 == 0) {
   FUNC_2(VAR_2, "unexpected EOF from server");
   return -1;
  } else {
   VAR_6 += VAR_7;
   VAR_4 -= VAR_7;
  }
 }
 return 0;
}
