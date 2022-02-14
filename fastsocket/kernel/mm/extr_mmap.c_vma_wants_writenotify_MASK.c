
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct vm_area_struct {unsigned int vm_flags; TYPE_1__* vm_file; int vm_page_prot; TYPE_2__* vm_ops; } ;
struct TYPE_4__ {scalar_t__ page_mkwrite; } ;
struct TYPE_3__ {scalar_t__ f_mapping; } ;


 unsigned int VAR_0 ;
 unsigned int VAR_1 ;
 unsigned int VAR_2 ;
 unsigned int VAR_3 ;
 scalar_t__ FUNC_0 (scalar_t__) ;
 scalar_t__ FUNC_1 (int ) ;
 int FUNC_2 (unsigned int) ;

int FUNC_3(struct vm_area_struct *VAR_4)
{
 unsigned int VAR_5 = VAR_4->vm_flags;


 if ((VAR_5 & (VAR_3|VAR_2)) != ((VAR_3|VAR_2)))
  return 0;


 if (VAR_4->vm_ops && VAR_4->vm_ops->page_mkwrite)
  return 1;


 if (FUNC_1(VAR_4->vm_page_prot) !=
     FUNC_1(FUNC_2(VAR_5)))
  return 0;


 if (VAR_5 & (VAR_1|VAR_0))
  return 0;


 return VAR_4->vm_file && VAR_4->vm_file->f_mapping &&
  FUNC_0(VAR_4->vm_file->f_mapping);
}
