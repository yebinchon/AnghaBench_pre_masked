
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct dbg_tools_data {int chip_id; } ;
struct ecore_hwfn {struct dbg_tools_data dbg_info; } ;
typedef enum chip_ids { ____Placeholder_chip_ids } chip_ids ;



enum chip_ids FUNC_0(struct ecore_hwfn *VAR_0)
{
 struct dbg_tools_data *VAR_1 = &VAR_0->dbg_info;

 return (enum chip_ids)VAR_1->chip_id;
}
