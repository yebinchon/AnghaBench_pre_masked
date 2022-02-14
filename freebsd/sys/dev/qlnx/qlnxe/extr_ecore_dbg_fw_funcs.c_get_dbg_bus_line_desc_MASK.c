
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {struct dbg_bus_block_data* blocks; } ;
struct dbg_tools_data {TYPE_1__ bus; } ;
struct ecore_hwfn {struct dbg_tools_data dbg_info; } ;
struct dbg_bus_line {int dummy; } ;
struct dbg_bus_block_data {int line_num; } ;
struct dbg_bus_block {size_t lines_offset; scalar_t__ has_latency_events; } ;
typedef enum block_id { ____Placeholder_block_id } block_id ;


 int FUNC_0 (struct dbg_bus_block*) ;
 size_t FUNC_1 (struct dbg_bus_block*) ;
 struct dbg_bus_line* VAR_0 ;
 int * VAR_1 ;
 struct dbg_bus_block* FUNC_2 (struct ecore_hwfn*,int) ;

__attribute__((used)) static struct dbg_bus_line* FUNC_3(struct ecore_hwfn *VAR_2,
              enum block_id VAR_3)
{
 struct dbg_tools_data *VAR_4 = &VAR_2->dbg_info;
 struct dbg_bus_block_data *VAR_5;
 struct dbg_bus_block *VAR_6;

 VAR_5 = &VAR_4->bus.blocks[VAR_3];
 VAR_6 = FUNC_2(VAR_2, VAR_3);

 if (!VAR_5->line_num ||
  (VAR_5->line_num == 1 && VAR_6->has_latency_events) ||
  VAR_5->line_num >= FUNC_0(VAR_6))
  return VAR_0;

 return (struct dbg_bus_line *)&VAR_1[VAR_6->lines_offset + VAR_5->line_num - FUNC_1(VAR_6)];
}
