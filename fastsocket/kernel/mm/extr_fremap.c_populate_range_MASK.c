
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vm_area_struct {int vm_page_prot; } ;
struct mm_struct {int dummy; } ;
typedef int pgoff_t ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (struct mm_struct*,struct vm_area_struct*,unsigned long,int ,int ) ;

__attribute__((used)) static int FUNC_1(struct mm_struct *VAR_1, struct vm_area_struct *VAR_2,
   unsigned long VAR_3, unsigned long VAR_4, pgoff_t VAR_5)
{
 int VAR_6;

 do {
  VAR_6 = FUNC_0(VAR_1, VAR_2, VAR_3, VAR_5, VAR_2->vm_page_prot);
  if (VAR_6)
   return VAR_6;

  VAR_4 -= VAR_0;
  VAR_3 += VAR_0;
  VAR_5++;
 } while (VAR_4);

        return 0;

}
