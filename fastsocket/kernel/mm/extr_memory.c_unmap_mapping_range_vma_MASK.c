
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct zap_details {unsigned long truncate_count; int i_mmap_lock; } ;
struct vm_area_struct {unsigned long vm_truncate_count; } ;


 int VAR_0 ;
 int FUNC_0 () ;
 scalar_t__ FUNC_1 (unsigned long) ;
 scalar_t__ FUNC_2 () ;
 int FUNC_3 (int ) ;
 scalar_t__ FUNC_4 (int ) ;
 int FUNC_5 (int ) ;
 unsigned long FUNC_6 (struct vm_area_struct*,unsigned long,unsigned long,struct zap_details*) ;

__attribute__((used)) static int FUNC_7(struct vm_area_struct *VAR_1,
  unsigned long VAR_2, unsigned long VAR_3,
  struct zap_details *VAR_4)
{
 unsigned long VAR_5;
 int VAR_6;
again:
 VAR_5 = VAR_1->vm_truncate_count;
 if (FUNC_1(VAR_5) && VAR_2 < VAR_5) {
  VAR_2 = VAR_5;
  if (VAR_2 >= VAR_3) {

   VAR_1->vm_truncate_count = VAR_4->truncate_count;
   return 0;
  }
 }

 VAR_5 = FUNC_6(VAR_1, VAR_2,
     VAR_3 - VAR_2, VAR_4);
 VAR_6 = FUNC_2() || FUNC_4(VAR_4->i_mmap_lock);

 if (VAR_5 >= VAR_3) {

  VAR_1->vm_truncate_count = VAR_4->truncate_count;
  if (!VAR_6)
   return 0;
 } else {

  VAR_1->vm_truncate_count = VAR_5;
  if (!VAR_6)
   goto again;
 }

 FUNC_5(VAR_4->i_mmap_lock);
 FUNC_0();
 FUNC_3(VAR_4->i_mmap_lock);
 return -VAR_0;
}
