
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct timeval {int tv_sec; scalar_t__ tv_usec; } ;
typedef int fd_set ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *,int,int ) ;
 int FUNC_2 (scalar_t__,int *,int *,int *,struct timeval*) ;
 int FUNC_3 (char*) ;
 int VAR_2 ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_6 (int *) ;
 scalar_t__ VAR_5 ;

void
FUNC_7(void)
{
 fd_set VAR_6, VAR_7;
 struct timeval VAR_8;

 VAR_8.tv_sec = 30;
 VAR_8.tv_usec = 0;

 for (;;) {
  FUNC_4(&VAR_3);
  VAR_6 = VAR_4;
  VAR_7 = VAR_4;
  FUNC_5(&VAR_3);
  switch (FUNC_2(VAR_5+1, &VAR_6, ((void*)0), ((void*)0), &VAR_8)) {
  case -1:
   FUNC_0(&VAR_6);
   if (VAR_2 == VAR_0) {
    continue;
   }
   FUNC_3("svc_run: - select failed");
   return;
  case 0:
   FUNC_1(&VAR_7, 30, VAR_1);
   continue;
  default:
   FUNC_6(&VAR_6);
  }
 }
}
