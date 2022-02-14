
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct emu_sc_info {int num_gprs; int dev; struct emu_rm* rm; } ;
struct emu_rm {int num_gprs; int* allocmap; int last_free_gpr; int gpr_lock; scalar_t__ num_used; struct emu_sc_info* card; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (int ) ;
 struct emu_rm* FUNC_1 (int,int ,int) ;
 int FUNC_2 (int *,int ,char*,int ) ;

int
FUNC_3(struct emu_sc_info *VAR_6)
{
 int VAR_7;
 int VAR_8;
 struct emu_rm *VAR_9;

 VAR_9 = FUNC_1(sizeof(struct emu_rm), VAR_3, VAR_4 | VAR_5);
 if (VAR_9 == ((void*)0)) {
  return (VAR_1);
 }
 VAR_6->rm = VAR_9;
 VAR_9->card = VAR_6;
 VAR_8 = VAR_6->num_gprs;
 VAR_9->num_used = 0;
 FUNC_2(&(VAR_9->gpr_lock), FUNC_0(VAR_6->dev), "gpr alloc", VAR_2);
 VAR_9->num_gprs = (VAR_8 < VAR_0 ? VAR_8 : VAR_0);
 for (VAR_7 = 0; VAR_7 < VAR_9->num_gprs; VAR_7++)
  VAR_9->allocmap[VAR_7] = 0;

 VAR_9->allocmap[0] = 1;
 VAR_9->last_free_gpr = 1;

 return (0);
}
