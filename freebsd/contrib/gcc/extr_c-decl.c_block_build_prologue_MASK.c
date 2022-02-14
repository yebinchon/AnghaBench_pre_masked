
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ tree ;
struct block_sema_info {int block_body; scalar_t__ block_byref_decl_list; scalar_t__ block_ref_decl_list; } ;


 scalar_t__ FUNC_0 (scalar_t__) ;
 int FUNC_1 (scalar_t__) ;
 int FUNC_2 (scalar_t__,int ,int ) ;
 int FUNC_3 (scalar_t__) ;
 int FUNC_4 (char*) ;
 scalar_t__ FUNC_5 (int ) ;

void
FUNC_6 (struct block_sema_info *VAR_0)
{
  tree VAR_1;

  tree VAR_2 = FUNC_5 (FUNC_4 (".block_descriptor"));
  FUNC_3 (VAR_2);

  for (VAR_1 = VAR_0->block_ref_decl_list; VAR_1;
 VAR_1 = FUNC_0 (VAR_1))
    FUNC_2 (VAR_2, FUNC_1 (VAR_1),
           VAR_0->block_body);

  for (VAR_1 = VAR_0->block_byref_decl_list; VAR_1;
 VAR_1 = FUNC_0 (VAR_1))
    FUNC_2 (VAR_2, FUNC_1 (VAR_1),
           VAR_0->block_body);
}
