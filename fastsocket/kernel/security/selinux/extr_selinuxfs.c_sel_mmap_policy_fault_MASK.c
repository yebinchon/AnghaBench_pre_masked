
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct vm_fault {int flags; unsigned long pgoff; struct page* page; } ;
struct vm_area_struct {TYPE_1__* vm_file; } ;
struct policy_load_memory {scalar_t__ data; int len; } ;
struct page {int dummy; } ;
struct TYPE_2__ {struct policy_load_memory* private_data; } ;


 int VAR_0 ;
 int VAR_1 ;
 unsigned long VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (struct page*) ;
 unsigned long FUNC_1 (int ,int ) ;
 struct page* FUNC_2 (scalar_t__) ;

__attribute__((used)) static int FUNC_3(struct vm_area_struct *VAR_5,
     struct vm_fault *VAR_6)
{
 struct policy_load_memory *VAR_7 = VAR_5->vm_file->private_data;
 unsigned long VAR_8;
 struct page *VAR_9;

 if (VAR_6->flags & (VAR_0 | VAR_1))
  return VAR_4;

 VAR_8 = VAR_6->pgoff << VAR_2;
 if (VAR_8 >= FUNC_1(VAR_7->len, VAR_3))
  return VAR_4;

 VAR_9 = FUNC_2(VAR_7->data + VAR_8);
 FUNC_0(VAR_9);

 VAR_6->page = VAR_9;

 return 0;
}
