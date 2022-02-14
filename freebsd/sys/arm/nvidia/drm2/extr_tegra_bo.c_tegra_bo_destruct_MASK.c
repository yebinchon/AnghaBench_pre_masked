
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef TYPE_2__* vm_page_t ;
struct TYPE_6__ {int size; } ;
struct tegra_bo {scalar_t__ vbase; int npages; int * cdev_pager; TYPE_2__** m; TYPE_1__ gem_obj; } ;
struct TYPE_7__ {int flags; } ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *,TYPE_2__*) ;
 int VAR_1 ;
 int FUNC_3 (scalar_t__,int) ;
 size_t FUNC_4 (int ) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (TYPE_2__*) ;
 int FUNC_7 (TYPE_2__*) ;
 int FUNC_8 (int ,scalar_t__,size_t) ;

__attribute__((used)) static void
FUNC_9(struct tegra_bo *VAR_2)
{
 vm_page_t VAR_3;
 size_t VAR_4;
 int VAR_5;

 if (VAR_2->cdev_pager == ((void*)0))
  return;

 VAR_4 = FUNC_4(VAR_2->gem_obj.size);
 if (VAR_2->vbase != 0)
  FUNC_3(VAR_2->vbase, VAR_2->npages);

 FUNC_0(VAR_2->cdev_pager);
 for (VAR_5 = 0; VAR_5 < VAR_2->npages; VAR_5++) {
  VAR_3 = VAR_2->m[VAR_5];
  FUNC_2(VAR_2->cdev_pager, VAR_3);
  VAR_3->flags &= ~VAR_0;
  FUNC_7(VAR_3);
  FUNC_6(VAR_3);
 }
 FUNC_1(VAR_2->cdev_pager);

 FUNC_5(VAR_2->cdev_pager);
 if (VAR_2->vbase != 0)
  FUNC_8(VAR_1, VAR_2->vbase, VAR_4);
}
