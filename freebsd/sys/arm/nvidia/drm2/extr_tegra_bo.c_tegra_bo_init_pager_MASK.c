
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef TYPE_2__* vm_page_t ;
struct TYPE_6__ {int size; } ;
struct tegra_bo {int npages; TYPE_2__** m; int vbase; int cdev_pager; int pbase; TYPE_1__ gem_obj; } ;
struct TYPE_7__ {int flags; int oflags; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (TYPE_2__*) ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_3 (int ,TYPE_2__**,int) ;
 size_t FUNC_4 (int ) ;
 scalar_t__ FUNC_5 (TYPE_2__*,int ,int) ;
 scalar_t__ FUNC_6 (int ,size_t,int,int *) ;

__attribute__((used)) static int
FUNC_7(struct tegra_bo *VAR_7)
{
 vm_page_t VAR_8;
 size_t VAR_9;
 int VAR_10;

 VAR_9 = FUNC_4(VAR_7->gem_obj.size);

 VAR_7->pbase = FUNC_2(VAR_7->m[0]);
 if (FUNC_6(VAR_6, VAR_9, VAR_3 | VAR_2, &VAR_7->vbase))
  return (VAR_1);

 FUNC_0(VAR_7->cdev_pager);
 for (VAR_10 = 0; VAR_10 < VAR_7->npages; VAR_10++) {
  VAR_8 = VAR_7->m[VAR_10];
  VAR_8->oflags &= ~VAR_5;
  VAR_8->flags |= VAR_4;
  if (FUNC_5(VAR_8, VAR_7->cdev_pager, VAR_10) != 0)
   return (VAR_0);
 }
 FUNC_1(VAR_7->cdev_pager);

 FUNC_3(VAR_7->vbase, VAR_7->m, VAR_7->npages);
 return (0);
}
