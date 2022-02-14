
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct vfsconf {int dummy; } ;
struct TYPE_3__ {int sc_lock; int * sc_cdev; scalar_t__ sc_dev_opened; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 TYPE_1__* VAR_4 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (TYPE_1__*,int ) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int ) ;

int
FUNC_5(struct vfsconf *VAR_5)
{

 FUNC_2(&VAR_4->sc_lock);
 if (VAR_4->sc_dev_opened) {
  FUNC_3(&VAR_4->sc_lock);
  return (VAR_0);
 }
 if (VAR_4->sc_cdev != ((void*)0))
  FUNC_0(VAR_4->sc_cdev);

 FUNC_4(VAR_3);
 FUNC_4(VAR_2);

 FUNC_3(&VAR_4->sc_lock);



 FUNC_1(VAR_4, VAR_1);

 return (0);
}
