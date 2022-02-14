
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct dbg_tools_data {int chip_id; } ;
struct ecore_hwfn {struct dbg_tools_data dbg_info; } ;
struct dbg_bus_block {int dummy; } ;
typedef enum block_id { ____Placeholder_block_id } block_id ;


 int VAR_0 ;
 int * VAR_1 ;

__attribute__((used)) static struct dbg_bus_block* FUNC_0(struct ecore_hwfn *VAR_2,
                enum block_id VAR_3)
{
 struct dbg_tools_data *VAR_4 = &VAR_2->dbg_info;

 return (struct dbg_bus_block *)&VAR_1[VAR_3 * VAR_0 + VAR_4->chip_id];
}
