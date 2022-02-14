
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tree_balance {int ** CFR; int * rkey; int ** R; } ;
struct item_head {int dummy; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *,int ) ;
 int VAR_0 ;
 int FUNC_2 (int,char*,int ,...) ;
 int FUNC_3 (struct tree_balance*,int *,int ) ;
 int FUNC_4 (int ,struct item_head*,int ) ;

__attribute__((used)) static void FUNC_5(struct tree_balance *VAR_1, int VAR_2, struct item_head *VAR_3)
{
 FUNC_2(VAR_1->R[VAR_2] == ((void*)0) || VAR_1->CFR[VAR_2] == ((void*)0),
        "R[h](%p) and CFR[h](%p) must exist in replace_rkey",
        *VAR_1->R[VAR_2], VAR_1->CFR[VAR_2]);
 FUNC_2(FUNC_0(VAR_1->R[VAR_2]) == 0,
        "R[h] can not be empty if it exists (item number=%d)",
        FUNC_0(VAR_1->R[VAR_2]));

 FUNC_4(FUNC_1(VAR_1->CFR[VAR_2], VAR_1->rkey[VAR_2]), VAR_3, VAR_0);

 FUNC_3(VAR_1, VAR_1->CFR[VAR_2], 0);
}
