
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_4__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct df_scan_bb_info {int * artificial_uses; int * artificial_defs; } ;
struct df_ref {int dummy; } ;
struct TYPE_6__ {int add_refs_inline; } ;
struct df {TYPE_4__ use_info; TYPE_4__ def_info; struct dataflow** problems_by_index; } ;
struct dataflow {int block_pool; } ;
typedef int rtx ;
typedef enum df_ref_type { ____Placeholder_df_ref_type } df_ref_type ;
typedef enum df_ref_flags { ____Placeholder_df_ref_flags } df_ref_flags ;
typedef TYPE_1__* basic_block ;
struct TYPE_5__ {int index; } ;


 int VAR_0 ;
 size_t VAR_1 ;
 int FUNC_0 (struct dataflow*) ;
 int FUNC_1 (struct dataflow*,TYPE_4__*) ;
 struct df_ref* FUNC_2 (struct dataflow*,int ,int *,TYPE_1__*,int ,int,int) ;
 struct df_scan_bb_info* FUNC_3 (struct dataflow*,int ) ;
 int FUNC_4 (struct dataflow*,int ,struct df_scan_bb_info*) ;
 scalar_t__ FUNC_5 (int ) ;

struct df_ref *
FUNC_6 (struct df *VAR_2, rtx VAR_3, rtx *VAR_4, rtx VAR_5,
        basic_block VAR_6,
        enum df_ref_type VAR_7,
        enum df_ref_flags VAR_8)
{
  struct dataflow *VAR_9 = VAR_2->problems_by_index[VAR_1];
  struct df_scan_bb_info *VAR_10;

  FUNC_1 (VAR_9, &VAR_2->use_info);
  FUNC_1 (VAR_9, &VAR_2->def_info);
  FUNC_0 (VAR_9);


  VAR_10 = FUNC_3 (VAR_9, VAR_6->index);
  if (!VAR_10)
    {
      VAR_10 = (struct df_scan_bb_info *) FUNC_5 (VAR_9->block_pool);
      FUNC_4 (VAR_9, VAR_6->index, VAR_10);
      VAR_10->artificial_defs = ((void*)0);
      VAR_10->artificial_uses = ((void*)0);
    }

  if (VAR_7 == VAR_0)
    VAR_2->def_info.add_refs_inline = 1;
  else
    VAR_2->use_info.add_refs_inline = 1;

  return FUNC_2 (VAR_9, VAR_3, VAR_4, VAR_6, VAR_5, VAR_7, VAR_8);
}
