
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct ecore_sb_info {int * sb_virt; int sb_phys; } ;
struct ecore_dev {int dummy; } ;
struct TYPE_3__ {struct ecore_dev cdev; } ;
typedef TYPE_1__ qlnx_host_t ;


 int FUNC_0 (struct ecore_dev*,void*,int ,int) ;

void
FUNC_1(qlnx_host_t *VAR_0, struct ecore_sb_info *VAR_1)
{
 struct ecore_dev *VAR_2;

 VAR_2 = &VAR_0->cdev;

        if (VAR_1->sb_virt) {
                FUNC_0(VAR_2, ((void *)VAR_1->sb_virt),
   (VAR_1->sb_phys), (sizeof(*VAR_1->sb_virt)));
  VAR_1->sb_virt = ((void*)0);
 }
}
