
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct hist_entry {scalar_t__ level; TYPE_1__* branch_info; } ;
struct addr_map_symbol {int addr; int sym; } ;
typedef scalar_t__ int64_t ;
struct TYPE_2__ {struct addr_map_symbol to; } ;


 scalar_t__ FUNC_0 (int ,int ,int ,int ) ;

__attribute__((used)) static int64_t
FUNC_1(struct hist_entry *VAR_0, struct hist_entry *VAR_1)
{
 struct addr_map_symbol *VAR_2 = &VAR_0->branch_info->to;
 struct addr_map_symbol *VAR_3 = &VAR_1->branch_info->to;

 if (!VAR_2->sym && !VAR_3->sym)
  return VAR_1->level - VAR_0->level;

 return FUNC_0(VAR_2->sym, VAR_3->sym, VAR_2->addr, VAR_3->addr);
}
