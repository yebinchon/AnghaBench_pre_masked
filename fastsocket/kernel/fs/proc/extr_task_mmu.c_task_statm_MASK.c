
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mm_struct {int start_code; int total_vm; int shared_vm; int end_code; } ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (struct mm_struct*,int ) ;

int FUNC_2(struct mm_struct *VAR_4, int *VAR_5, int *VAR_6,
        int *VAR_7, int *VAR_8)
{
 *VAR_5 = FUNC_1(VAR_4, VAR_3);
 *VAR_6 = (FUNC_0(VAR_4->end_code) - (VAR_4->start_code & VAR_0))
        >> VAR_1;
 *VAR_7 = VAR_4->total_vm - VAR_4->shared_vm;
 *VAR_8 = *VAR_5 + FUNC_1(VAR_4, VAR_2);
 return VAR_4->total_vm;
}
