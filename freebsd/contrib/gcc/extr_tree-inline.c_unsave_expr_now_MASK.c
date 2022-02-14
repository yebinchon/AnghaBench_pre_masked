
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


typedef scalar_t__ tree ;
typedef int id ;
struct TYPE_5__ {int transform_new_cfg; int transform_return_to_modify; int transform_lang_insert_block; int decl_map; int transform_call_graph_edges; int copy_decl; void* dst_fn; void* src_fn; } ;
typedef TYPE_1__ copy_body_data ;


 int VAR_0 ;
 int VAR_1 ;
 void* VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (TYPE_1__*,int ,int) ;
 int VAR_4 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ,int *,int *) ;
 int VAR_5 ;
 int FUNC_3 (scalar_t__*,int ,TYPE_1__*,int *) ;
 int FUNC_4 (scalar_t__*,int ,TYPE_1__*) ;

tree
FUNC_5 (tree VAR_6)
{
  copy_body_data VAR_7;


  if (VAR_6 == 0)
    return VAR_6;


  FUNC_0 (&VAR_7, 0, sizeof (VAR_7));
  VAR_7.src_fn = VAR_2;
  VAR_7.dst_fn = VAR_2;
  VAR_7.decl_map = FUNC_2 (VAR_4, ((void*)0), ((void*)0));

  VAR_7.copy_decl = VAR_1;
  VAR_7.transform_call_graph_edges = VAR_0;
  VAR_7.transform_new_cfg = 0;
  VAR_7.transform_return_to_modify = 0;
  VAR_7.transform_lang_insert_block = 0;


  FUNC_4 (&VAR_6, VAR_3, &VAR_7);


  FUNC_3 (&VAR_6, VAR_5, &VAR_7, ((void*)0));


  FUNC_1 (VAR_7.decl_map);

  return VAR_6;
}
