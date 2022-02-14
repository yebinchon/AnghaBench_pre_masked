
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tree_balance {int ** CFL; int * lkey; int tb_path; int ** L; } ;
struct item_head {int dummy; } ;


 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (int *,int ) ;
 int VAR_0 ;
 int FUNC_2 (int ,int) ;
 int FUNC_3 (int,char*,int *,int *) ;
 int FUNC_4 (struct tree_balance*,int *,int ) ;
 int FUNC_5 (int ,struct item_head*,int ) ;

__attribute__((used)) static void FUNC_6(struct tree_balance *VAR_1, int VAR_2, struct item_head *VAR_3)
{
 FUNC_3(VAR_1->L[VAR_2] == ((void*)0) || VAR_1->CFL[VAR_2] == ((void*)0),
        "L[h](%p) and CFL[h](%p) must exist in replace_lkey",
        VAR_1->L[VAR_2], VAR_1->CFL[VAR_2]);

 if (FUNC_0(FUNC_2(VAR_1->tb_path, VAR_2)) == 0)
  return;

 FUNC_5(FUNC_1(VAR_1->CFL[VAR_2], VAR_1->lkey[VAR_2]), VAR_3, VAR_0);

 FUNC_4(VAR_1, VAR_1->CFL[VAR_2], 0);
}
