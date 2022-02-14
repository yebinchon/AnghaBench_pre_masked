
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct cdev {scalar_t__ si_refcount; int * si_devsw; } ;


 int FUNC_0 (int,char*) ;
 int FUNC_1 (struct cdev*,int ) ;
 int VAR_0 ;
 int FUNC_2 () ;
 int FUNC_3 () ;
 int FUNC_4 (struct cdev*) ;
 int VAR_1 ;
 int FUNC_5 (struct cdev*) ;
 int FUNC_6 (int *,int ) ;
 int VAR_2 ;

void
FUNC_7(struct cdev *VAR_3)
{
 int VAR_4 = 0;

 FUNC_6(&VAR_1, VAR_0);
 FUNC_2();
 VAR_3->si_refcount--;
 FUNC_0(VAR_3->si_refcount >= 0,
     ("dev_rel(%s) gave negative count", FUNC_5(VAR_3)));
 if (VAR_3->si_devsw == ((void*)0) && VAR_3->si_refcount == 0) {
  FUNC_1(VAR_3, VAR_2);
  VAR_4 = 1;
 }
 FUNC_3();
 if (VAR_4)
  FUNC_4(VAR_3);
}
