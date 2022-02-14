
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int sc_cv; int sc_lock; int * sc_shutdown_post_eh; int * sc_shutdown_pre_eh; int * sc_cdev; } ;


 int FUNC_0 (int ,int *) ;
 int FUNC_1 (char*) ;
 int VAR_0 ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (TYPE_1__*,int ) ;
 int VAR_1 ;
 int FUNC_5 (TYPE_1__*) ;
 TYPE_1__* VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int ) ;

__attribute__((used)) static int
FUNC_8(void)
{

 if (VAR_2->sc_cdev != ((void*)0)) {
  FUNC_1("removing device node");
  FUNC_3(VAR_2->sc_cdev);
  FUNC_1("device node removed");
 }

 if (VAR_2->sc_shutdown_pre_eh != ((void*)0))
  FUNC_0(VAR_4, VAR_2->sc_shutdown_pre_eh);
 if (VAR_2->sc_shutdown_post_eh != ((void*)0))
  FUNC_0(VAR_3, VAR_2->sc_shutdown_post_eh);

 FUNC_5(VAR_2);

 FUNC_7(VAR_1);
 FUNC_6(&VAR_2->sc_lock);
 FUNC_2(&VAR_2->sc_cv);
 FUNC_4(VAR_2, VAR_0);
 return (0);
}
