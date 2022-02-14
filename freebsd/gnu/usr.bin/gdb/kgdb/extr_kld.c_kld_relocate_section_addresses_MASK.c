
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct so_list {TYPE_1__* lm_info; struct section_table* sections; } ;
struct section_table {int dummy; } ;
struct TYPE_2__ {int base_address; } ;
typedef int CORE_ADDR ;


 int FUNC_0 (struct section_table*,int *) ;

__attribute__((used)) static void
FUNC_1 (struct so_list *VAR_0, struct section_table *VAR_1)
{
 static CORE_ADDR VAR_2;

 if (VAR_1 == VAR_0->sections)
  VAR_2 = VAR_0->lm_info->base_address;

 FUNC_0(VAR_1, &VAR_2);
}
