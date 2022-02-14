
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct cdev {int si_usecount; } ;


 int FUNC_0 () ;
 int FUNC_1 () ;

int
FUNC_2(struct cdev *VAR_0)
{
 int VAR_1;

 FUNC_0();
 VAR_1 = VAR_0->si_usecount;
 FUNC_1();
 return(VAR_1);
}
