
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ tree ;
struct dse_global_data {int stores; } ;
struct dse_block_local_data {int stores; } ;
struct dom_walk_data {struct dse_global_data* global_data; int block_data_stack; } ;
typedef int basic_block ;


 scalar_t__ FUNC_0 (scalar_t__) ;
 int FUNC_1 (scalar_t__) ;
 struct dse_block_local_data* FUNC_2 (int ,int ) ;
 int FUNC_3 (scalar_t__) ;
 int FUNC_4 (int ) ;
 scalar_t__ FUNC_5 (int ) ;
 int FUNC_6 (int ,int *,int ) ;
 int VAR_0 ;

__attribute__((used)) static void
FUNC_7 (struct dom_walk_data *VAR_1, basic_block VAR_2)
{
  struct dse_block_local_data *VAR_3
    = FUNC_2 (VAR_0, VAR_1->block_data_stack);
  struct dse_global_data *VAR_4 = VAR_1->global_data;
  tree VAR_5;

  for (VAR_5 = FUNC_5 (VAR_2); VAR_5; VAR_5 = FUNC_0 (VAR_5))
    if (!FUNC_4 (FUNC_1 (VAR_5)))
      FUNC_6 (VAR_4->stores,
      &VAR_3->stores,
      FUNC_3 (VAR_5));
}
