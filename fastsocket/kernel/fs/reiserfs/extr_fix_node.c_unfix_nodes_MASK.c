
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct tree_balance {int vn_buf; TYPE_1__** used; int transaction_handle; TYPE_1__** FEB; TYPE_1__** CFR; TYPE_1__** CFL; TYPE_1__** FR; TYPE_1__** FL; TYPE_1__** R; TYPE_1__** L; int tb_sb; int tb_path; } ;
typedef int b_blocknr_t ;
struct TYPE_3__ {int b_blocknr; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ,int ) ;
 int FUNC_3 (int ,int *,int ,int ) ;
 int FUNC_4 (int ,TYPE_1__*) ;

void FUNC_5(struct tree_balance *VAR_2)
{
 int VAR_3;


 FUNC_2(VAR_2->tb_sb, VAR_2->tb_path);


 for (VAR_3 = 0; VAR_3 < VAR_1; VAR_3++) {
  FUNC_4(VAR_2->tb_sb, VAR_2->L[VAR_3]);
  FUNC_4(VAR_2->tb_sb, VAR_2->R[VAR_3]);
  FUNC_4(VAR_2->tb_sb, VAR_2->FL[VAR_3]);
  FUNC_4(VAR_2->tb_sb, VAR_2->FR[VAR_3]);
  FUNC_4(VAR_2->tb_sb, VAR_2->CFL[VAR_3]);
  FUNC_4(VAR_2->tb_sb, VAR_2->CFR[VAR_3]);

  FUNC_0(VAR_2->L[VAR_3]);
  FUNC_0(VAR_2->R[VAR_3]);
  FUNC_0(VAR_2->FL[VAR_3]);
  FUNC_0(VAR_2->FR[VAR_3]);
  FUNC_0(VAR_2->CFL[VAR_3]);
  FUNC_0(VAR_2->CFR[VAR_3]);
 }


 for (VAR_3 = 0; VAR_3 < VAR_0; VAR_3++) {
  if (VAR_2->FEB[VAR_3]) {
   b_blocknr_t VAR_4 = VAR_2->FEB[VAR_3]->b_blocknr;


   FUNC_0(VAR_2->FEB[VAR_3]);
   FUNC_3(VAR_2->transaction_handle, ((void*)0),
         VAR_4, 0);
  }
  if (VAR_2->used[VAR_3]) {

   FUNC_0(VAR_2->used[VAR_3]);
  }
 }

 FUNC_1(VAR_2->vn_buf);

}
