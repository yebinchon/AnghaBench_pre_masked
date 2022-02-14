
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct vm_region {unsigned long vm_top; unsigned long vm_end; unsigned long vm_start; unsigned long vm_pgoff; int vm_usage; } ;
struct vm_area_struct {unsigned long vm_start; unsigned long vm_end; unsigned long vm_pgoff; struct vm_region* vm_region; TYPE_1__* vm_ops; scalar_t__ vm_file; } ;
struct mm_struct {scalar_t__ map_count; } ;
struct TYPE_2__ {int (* open ) (struct vm_area_struct*) ;} ;


 int VAR_0 ;
 int VAR_1 ;
 unsigned long VAR_2 ;
 int FUNC_0 (struct vm_region*) ;
 int FUNC_1 (struct mm_struct*,struct vm_area_struct*) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (struct vm_region*) ;
 int FUNC_4 (struct vm_area_struct*) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (char*) ;
 void* FUNC_7 (int ,int ) ;
 int FUNC_8 (int ,struct vm_region*) ;
 int VAR_3 ;
 int FUNC_9 (struct vm_area_struct*) ;
 scalar_t__ VAR_4 ;
 int FUNC_10 (int *) ;
 int VAR_5 ;
 int VAR_6 ;

int FUNC_11(struct mm_struct *VAR_7, struct vm_area_struct *VAR_8,
       unsigned long VAR_9, int VAR_10)
{
 struct vm_area_struct *VAR_11;
 struct vm_region *VAR_12;
 unsigned long VAR_13;

 FUNC_6("");



 if (VAR_8->vm_file ||
     FUNC_2(&VAR_8->vm_region->vm_usage) != 1)
  return -VAR_0;

 if (VAR_7->map_count >= VAR_4)
  return -VAR_0;

 VAR_12 = FUNC_7(VAR_6, VAR_1);
 if (!VAR_12)
  return -VAR_0;

 VAR_11 = FUNC_7(VAR_5, VAR_1);
 if (!VAR_11) {
  FUNC_8(VAR_6, VAR_12);
  return -VAR_0;
 }


 *VAR_11 = *VAR_8;
 *VAR_12 = *VAR_8->vm_region;
 VAR_11->vm_region = VAR_12;

 VAR_13 = (VAR_9 - VAR_8->vm_start) >> VAR_2;

 if (VAR_10) {
  VAR_12->vm_top = VAR_12->vm_end = VAR_11->vm_end = VAR_9;
 } else {
  VAR_12->vm_start = VAR_11->vm_start = VAR_9;
  VAR_12->vm_pgoff = VAR_11->vm_pgoff += VAR_13;
 }

 if (VAR_11->vm_ops && VAR_11->vm_ops->open)
  VAR_11->vm_ops->open(VAR_11);

 FUNC_4(VAR_8);
 FUNC_5(&VAR_3);
 FUNC_3(VAR_8->vm_region);
 if (VAR_10) {
  VAR_8->vm_region->vm_start = VAR_8->vm_start = VAR_9;
  VAR_8->vm_region->vm_pgoff = VAR_8->vm_pgoff += VAR_13;
 } else {
  VAR_8->vm_region->vm_end = VAR_8->vm_end = VAR_9;
  VAR_8->vm_region->vm_top = VAR_9;
 }
 FUNC_0(VAR_8->vm_region);
 FUNC_0(VAR_11->vm_region);
 FUNC_10(&VAR_3);
 FUNC_1(VAR_7, VAR_8);
 FUNC_1(VAR_7, VAR_11);
 return 0;
}
