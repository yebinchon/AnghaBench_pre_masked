
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct l2_bucket {int* l2b_kva; } ;
typedef int pt_entry_t ;


 int VAR_0 ;
 int FUNC_0 (int ,int) ;
 int VAR_1 ;
 int FUNC_1 (int*) ;
 int FUNC_2 () ;
 int FUNC_3 (int ) ;
 int VAR_2 ;
 size_t FUNC_4 (int ) ;
 struct l2_bucket* FUNC_5 (int ,int ) ;
 int VAR_3 ;

void
FUNC_6(int VAR_4)
{
 struct l2_bucket *VAR_5;
 pt_entry_t *VAR_6;

 VAR_5 = FUNC_5(VAR_2, VAR_3);

 VAR_6 = &VAR_5->l2b_kva[FUNC_4(VAR_3)];

 *VAR_6 = (*VAR_6 & ~VAR_0) | FUNC_0(VAR_1, VAR_4);
 FUNC_1(VAR_6);
 FUNC_3(VAR_3);
 FUNC_2();
}
