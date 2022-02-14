
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct timeval {scalar_t__ tv_sec; scalar_t__ tv_usec; } ;
struct rad_handle {int dummy; } ;
typedef int fd_set ;


 int FUNC_0 (int,int *) ;
 int FUNC_1 (int,int *) ;
 int FUNC_2 (int *) ;
 int VAR_0 ;
 int FUNC_3 (struct rad_handle*,char*,int ) ;
 int FUNC_4 (struct timeval*,int *) ;
 int FUNC_5 (struct rad_handle*,int,int*,struct timeval*) ;
 int FUNC_6 (struct rad_handle*,int*,struct timeval*) ;
 int FUNC_7 (int,int *,int *,int *,struct timeval*) ;
 int FUNC_8 (int ) ;
 int FUNC_9 (struct timeval*,struct timeval*,struct timeval*) ;
 int FUNC_10 (struct timeval*,struct timeval*,struct timeval*) ;

int
FUNC_11(struct rad_handle *VAR_1)
{
 struct timeval VAR_2;
 struct timeval VAR_3;
 int VAR_4;
 int VAR_5;

 VAR_5 = FUNC_6(VAR_1, &VAR_4, &VAR_3);

 if (VAR_5 != 0)
  return VAR_5;

 FUNC_4(&VAR_2, ((void*)0));
 FUNC_9(&VAR_3, &VAR_2, &VAR_2);

 for ( ; ; ) {
  fd_set VAR_6;

  FUNC_2(&VAR_6);
  FUNC_1(VAR_4, &VAR_6);

  VAR_5 = FUNC_7(VAR_4 + 1, &VAR_6, ((void*)0), ((void*)0), &VAR_3);

  if (VAR_5 == -1) {
   FUNC_3(VAR_1, "select: %s", FUNC_8(VAR_0));
   return -1;
  }

  if (!FUNC_0(VAR_4, &VAR_6)) {

   FUNC_4(&VAR_3, ((void*)0));
   FUNC_10(&VAR_2, &VAR_3, &VAR_3);
   if (VAR_3.tv_sec > 0 || (VAR_3.tv_sec == 0 && VAR_3.tv_usec > 0))

    continue;
  }

  VAR_5 = FUNC_5(VAR_1, VAR_5, &VAR_4, &VAR_3);

  if (VAR_5 != 0)
   return VAR_5;

  FUNC_4(&VAR_2, ((void*)0));
  FUNC_9(&VAR_3, &VAR_2, &VAR_2);
 }
}
