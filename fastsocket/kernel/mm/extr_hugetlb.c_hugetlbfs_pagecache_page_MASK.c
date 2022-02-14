
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct vm_area_struct {TYPE_1__* vm_file; } ;
struct page {int dummy; } ;
struct hstate {int dummy; } ;
struct address_space {int dummy; } ;
typedef int pgoff_t ;
struct TYPE_2__ {struct address_space* f_mapping; } ;


 struct page* FUNC_0 (struct address_space*,int ) ;
 int FUNC_1 (struct hstate*,struct vm_area_struct*,unsigned long) ;

__attribute__((used)) static struct page *FUNC_2(struct hstate *VAR_0,
   struct vm_area_struct *VAR_1, unsigned long VAR_2)
{
 struct address_space *VAR_3;
 pgoff_t VAR_4;

 VAR_3 = VAR_1->vm_file->f_mapping;
 VAR_4 = FUNC_1(VAR_0, VAR_1, VAR_2);

 return FUNC_0(VAR_3, VAR_4);
}
