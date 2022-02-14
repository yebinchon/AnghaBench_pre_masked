
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vm_area_struct {int vm_flags; unsigned long vm_start; unsigned long vm_end; int vm_page_prot; } ;
typedef int pgprot_t ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (struct vm_area_struct*,unsigned long,unsigned long,int ) ;
 scalar_t__ FUNC_2 (int) ;
 scalar_t__ FUNC_3 (unsigned long) ;
 scalar_t__ FUNC_4 (struct vm_area_struct*,int *,unsigned long,int ) ;
 int FUNC_5 (struct vm_area_struct*,unsigned long,int ) ;

int FUNC_6(struct vm_area_struct *VAR_5, unsigned long VAR_6,
   unsigned long VAR_7)
{
 int VAR_8;
 pgprot_t VAR_9 = VAR_5->vm_page_prot;






 FUNC_0(!(VAR_5->vm_flags & (VAR_4|VAR_3)));
 FUNC_0((VAR_5->vm_flags & (VAR_4|VAR_3)) ==
      (VAR_4|VAR_3));
 FUNC_0((VAR_5->vm_flags & VAR_4) && FUNC_2(VAR_5->vm_flags));
 FUNC_0((VAR_5->vm_flags & VAR_3) && FUNC_3(VAR_7));

 if (VAR_6 < VAR_5->vm_start || VAR_6 >= VAR_5->vm_end)
  return -VAR_0;
 if (FUNC_4(VAR_5, &VAR_9, VAR_7, VAR_2))
  return -VAR_1;

 VAR_8 = FUNC_1(VAR_5, VAR_6, VAR_7, VAR_9);

 if (VAR_8)
  FUNC_5(VAR_5, VAR_7, VAR_2);

 return VAR_8;
}
