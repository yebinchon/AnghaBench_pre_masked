
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct hist_entry {TYPE_2__* branch_info; } ;
typedef int int64_t ;
struct TYPE_3__ {int map; } ;
struct TYPE_4__ {TYPE_1__ to; } ;


 int FUNC_0 (int ,int ) ;

__attribute__((used)) static int64_t
FUNC_1(struct hist_entry *VAR_0, struct hist_entry *VAR_1)
{
 return FUNC_0(VAR_0->branch_info->to.map,
         VAR_1->branch_info->to.map);
}
