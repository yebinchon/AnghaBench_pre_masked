
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tree_balance {int ** CFR; int ** CFL; int ** FR; int ** FL; int ** R; int ** L; int tb_path; } ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int ) ;

__attribute__((used)) static void FUNC_2(struct tree_balance *VAR_1)
{
 int VAR_2;

 FUNC_1(VAR_1->tb_path);

 for (VAR_2 = 0; VAR_2 < VAR_0; VAR_2++) {
  FUNC_0(VAR_1->L[VAR_2]);
  FUNC_0(VAR_1->R[VAR_2]);
  FUNC_0(VAR_1->FL[VAR_2]);
  FUNC_0(VAR_1->FR[VAR_2]);
  FUNC_0(VAR_1->CFL[VAR_2]);
  FUNC_0(VAR_1->CFR[VAR_2]);

  VAR_1->L[VAR_2] = ((void*)0);
  VAR_1->R[VAR_2] = ((void*)0);
  VAR_1->FL[VAR_2] = ((void*)0);
  VAR_1->FR[VAR_2] = ((void*)0);
  VAR_1->CFL[VAR_2] = ((void*)0);
  VAR_1->CFR[VAR_2] = ((void*)0);
 }
}
