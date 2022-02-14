
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vm_area_struct {int dummy; } ;
typedef int pte_t ;


 int FUNC_0 (int *) ;
 scalar_t__ FUNC_1 (struct vm_area_struct*,unsigned long,int *,int ,int) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (struct vm_area_struct*,unsigned long,int ) ;

__attribute__((used)) static void FUNC_5(struct vm_area_struct *VAR_0,
       unsigned long VAR_1, pte_t *VAR_2)
{
 pte_t VAR_3;

 VAR_3 = FUNC_3(FUNC_2(FUNC_0(VAR_2)));
 if (FUNC_1(VAR_0, VAR_1, VAR_2, VAR_3, 1)) {
  FUNC_4(VAR_0, VAR_1, VAR_3);
 }
}
