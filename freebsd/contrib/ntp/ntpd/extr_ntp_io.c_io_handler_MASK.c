
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct timeval {int tv_sec; scalar_t__ tv_usec; } ;
typedef int l_fp ;
typedef int fd_set ;


 int FUNC_0 (int,char*) ;
 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 int FUNC_1 (int *) ;
 int VAR_6 ;
 int FUNC_2 (int *,int *) ;
 scalar_t__ VAR_7 ;
 int FUNC_3 (int ,char*,...) ;
 scalar_t__ FUNC_4 (scalar_t__) ;
 int FUNC_5 (scalar_t__,int *,int *,int *,struct timeval*) ;
 int FUNC_6 () ;

void
FUNC_7(void)
{

 fd_set VAR_8;
 int VAR_9;
 ++VAR_6;
 VAR_8 = VAR_3;

 VAR_9 = FUNC_5(VAR_7 + 1, &VAR_8, ((void*)0),
   ((void*)0), ((void*)0));
 if (VAR_9 < 0 && FUNC_4(VAR_5)) {
  struct timeval VAR_10;
  VAR_10 = 0;
  VAR_10 = 0;
  VAR_8 = VAR_3;
  VAR_9 = FUNC_5(VAR_7 + 1,
    &VAR_8, ((void*)0), ((void*)0),
    &VAR_10);
 }

 if (VAR_9 > 0) {
  l_fp VAR_11;

  FUNC_1(&VAR_11);

  FUNC_2(&VAR_11, &VAR_8);
 } else if (VAR_9 == -1 && VAR_5 != VAR_0) {
  FUNC_3(VAR_2, "select() error: %m");
 }
}
