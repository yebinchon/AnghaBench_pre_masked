
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int swp_entry_t ;
struct vm_area_struct {int dummy; } ;
struct page {int dummy; } ;
typedef int pte_t ;
typedef int pmd_t ;


 scalar_t__ VAR_0 ;
 int * FUNC_0 (int *,unsigned long) ;
 int FUNC_1 (int ,int ) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int ) ;
 scalar_t__ FUNC_4 (int ) ;
 int FUNC_5 (struct vm_area_struct*,int *,unsigned long,int ,struct page*) ;

__attribute__((used)) static int FUNC_6(struct vm_area_struct *VAR_1, pmd_t *VAR_2,
    unsigned long VAR_3, unsigned long VAR_4,
    swp_entry_t VAR_5, struct page *VAR_6)
{
 pte_t VAR_7 = FUNC_3(VAR_5);
 pte_t *VAR_8;
 int VAR_9 = 0;
 VAR_8 = FUNC_0(VAR_2, VAR_3);
 do {




  if (FUNC_4(FUNC_1(*VAR_8, VAR_7))) {
   FUNC_2(VAR_8);
   VAR_9 = FUNC_5(VAR_1, VAR_2, VAR_3, VAR_5, VAR_6);
   if (VAR_9)
    goto out;
   VAR_8 = FUNC_0(VAR_2, VAR_3);
  }
 } while (VAR_8++, VAR_3 += VAR_0, VAR_3 != VAR_4);
 FUNC_2(VAR_8 - 1);
out:
 return VAR_9;
}
