
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


typedef int vdev_t ;
struct TYPE_5__ {int * l2ad_vdev; } ;
typedef TYPE_1__ l2arc_dev_t ;
typedef int boolean_t ;


 int VAR_0 ;
 int VAR_1 ;
 TYPE_1__* FUNC_0 (int ) ;
 TYPE_1__* FUNC_1 (int ,TYPE_1__*) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;

boolean_t
FUNC_4(vdev_t *VAR_2)
{
 l2arc_dev_t *VAR_3;

 FUNC_2(&VAR_1);
 for (VAR_3 = FUNC_0(VAR_0); VAR_3 != ((void*)0);
     VAR_3 = FUNC_1(VAR_0, VAR_3)) {
  if (VAR_3->l2ad_vdev == VAR_2)
   break;
 }
 FUNC_3(&VAR_1);

 return (VAR_3 != ((void*)0));
}
