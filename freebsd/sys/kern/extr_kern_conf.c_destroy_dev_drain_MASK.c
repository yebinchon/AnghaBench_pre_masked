
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct cdevsw {int d_devs; } ;


 int FUNC_0 (int *) ;
 int VAR_0 ;
 int FUNC_1 () ;
 int FUNC_2 () ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_3 (int *,int *,int ,char*,int) ;

void
FUNC_4(struct cdevsw *VAR_3)
{

 FUNC_1();
 while (!FUNC_0(&VAR_3->d_devs)) {
  FUNC_3(&VAR_3->d_devs, &VAR_1, VAR_0, "devscd", VAR_2/10);
 }
 FUNC_2();
}
