
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct timespec {scalar_t__ tv_nsec; scalar_t__ tv_sec; } ;
typedef int caddr_t ;


 int FUNC_0 () ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 () ;
 scalar_t__ VAR_3 ;
 int FUNC_2 (int ,int ,scalar_t__,char*,struct timespec*) ;

int
FUNC_3(int *VAR_4)
{
 struct timespec VAR_5;

 FUNC_0();
 while (*VAR_4 & VAR_0) {
  *VAR_4 |= VAR_1;
  VAR_5.tv_sec = 0;
  VAR_5.tv_nsec = 0;
  (void) FUNC_2((caddr_t)VAR_4, VAR_2,
      VAR_3 - 1, "nfsndlck", &VAR_5);
 }
 *VAR_4 |= VAR_0;
 FUNC_1();
 return (0);
}
