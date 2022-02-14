
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct tree_balance {int transaction_handle; TYPE_1__** thrown; int tb_sb; } ;
typedef int b_blocknr_t ;
struct TYPE_4__ {int b_blocknr; } ;


 int FUNC_0 (TYPE_1__**) ;
 int FUNC_1 (TYPE_1__*) ;
 scalar_t__ FUNC_2 (TYPE_1__*) ;
 int FUNC_3 (int ,int *,int ,int ) ;
 int FUNC_4 (int ,char*,char*,int ) ;

__attribute__((used)) static void FUNC_5(struct tree_balance *VAR_0)
{
 int VAR_1;
 b_blocknr_t VAR_2;
 for (VAR_1 = 0; VAR_1 < FUNC_0(VAR_0->thrown); VAR_1++) {
  if (VAR_0->thrown[VAR_1]) {
   VAR_2 = VAR_0->thrown[VAR_1]->b_blocknr;
   if (FUNC_2(VAR_0->thrown[VAR_1]))
    FUNC_4(VAR_0->tb_sb, "reiserfs-12322",
       "called with dirty buffer %d",
       VAR_2);
   FUNC_1(VAR_0->thrown[VAR_1]);
   FUNC_3(VAR_0->transaction_handle, ((void*)0),
         VAR_2, 0);
  }
 }
}
