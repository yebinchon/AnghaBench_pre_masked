
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct emu_sc_info {int dbg_level; TYPE_1__* rm; int dev; } ;
struct TYPE_2__ {int last_free_gpr; scalar_t__* allocmap; int gpr_lock; } ;


 int VAR_0 ;
 int FUNC_0 (int ,char*,int) ;
 int FUNC_1 (TYPE_1__*,int ) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;

int
FUNC_5(struct emu_sc_info *VAR_1)
{
 int VAR_2;

 if (VAR_1->dbg_level > 1) {
  FUNC_3(&(VAR_1->rm->gpr_lock));
  for (VAR_2 = 1; VAR_2 < VAR_1->rm->last_free_gpr; VAR_2++)
   if (VAR_1->rm->allocmap[VAR_2] > 0)
    FUNC_0(VAR_1->dev, "rm: gpr %d not free before uninit\n", VAR_2);
  FUNC_4(&(VAR_1->rm->gpr_lock));
 }

 FUNC_2(&(VAR_1->rm->gpr_lock));
 FUNC_1(VAR_1->rm, VAR_0);
 return (0);
}
