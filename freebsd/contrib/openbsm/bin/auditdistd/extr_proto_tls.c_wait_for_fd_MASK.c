
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct timeval {int tv_sec; scalar_t__ tv_usec; } ;
typedef int fd_set ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int,int *) ;
 int FUNC_1 (int,int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int) ;
 int VAR_2 ;
 int FUNC_4 (int,int *,int *,int *,struct timeval*) ;

__attribute__((used)) static int
FUNC_5(int VAR_3, int VAR_4)
{
 struct timeval VAR_5;
 fd_set VAR_6;
 int VAR_7, VAR_8;

 VAR_7 = 0;

 for (;;) {
  FUNC_2(&VAR_6);
  FUNC_1(VAR_3, &VAR_6);

  VAR_5.tv_sec = VAR_4;
  VAR_5.tv_usec = 0;

  VAR_8 = FUNC_4(VAR_3 + 1, ((void*)0), &VAR_6, ((void*)0),
      VAR_4 == -1 ? ((void*)0) : &VAR_5);
  if (VAR_8 == 0) {
   VAR_7 = VAR_1;
   break;
  } else if (VAR_8 == -1) {
   if (VAR_2 == VAR_0)
    continue;
   VAR_7 = VAR_2;
   break;
  }
  FUNC_3(VAR_8 > 0);
  FUNC_3(FUNC_0(VAR_3, &VAR_6));
  break;
 }

 return (VAR_7);
}
