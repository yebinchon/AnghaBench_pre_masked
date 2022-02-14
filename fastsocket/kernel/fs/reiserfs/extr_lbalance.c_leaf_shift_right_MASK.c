
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tree_balance {int * R; int * rkey; int * CFR; } ;


 int VAR_0 ;
 int FUNC_0 (int ,struct tree_balance*,int,int,int *) ;
 int FUNC_1 (struct tree_balance*,int ,int ,int ,int ) ;

int FUNC_2(struct tree_balance *VAR_1, int VAR_2, int VAR_3)
{

 int VAR_4;


 VAR_4 =
     FUNC_0(VAR_0, VAR_1, VAR_2, VAR_3, ((void*)0));


 if (VAR_2) {
  FUNC_1(VAR_1, VAR_1->CFR[0], VAR_1->rkey[0], VAR_1->R[0], 0);

 }

 return VAR_4;
}
