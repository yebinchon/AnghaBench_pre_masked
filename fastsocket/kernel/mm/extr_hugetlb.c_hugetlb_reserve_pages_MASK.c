
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct vm_area_struct {int vm_flags; } ;
struct resv_map {int dummy; } ;
struct inode {TYPE_1__* i_mapping; } ;
struct hugepage_subpool {int dummy; } ;
struct hstate {int dummy; } ;
struct TYPE_2__ {int private_list; } ;


 int VAR_0 ;
 long VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 struct hstate* FUNC_0 (struct inode*) ;
 scalar_t__ FUNC_1 (struct hugepage_subpool*,long) ;
 int FUNC_2 (struct hugepage_subpool*,long) ;
 long FUNC_3 (struct hstate*,long) ;
 int FUNC_4 (int *,long,long) ;
 long FUNC_5 (int *,long,long) ;
 struct resv_map* FUNC_6 () ;
 int FUNC_7 (struct vm_area_struct*) ;
 int FUNC_8 (struct vm_area_struct*,int ) ;
 int FUNC_9 (struct vm_area_struct*,struct resv_map*) ;
 struct hugepage_subpool* FUNC_10 (struct inode*) ;

int FUNC_11(struct inode *VAR_5,
     long VAR_6, long VAR_7,
     struct vm_area_struct *VAR_8,
     int VAR_9)
{
 long VAR_10, VAR_11;
 struct hstate *VAR_12 = FUNC_0(VAR_5);
 struct hugepage_subpool *VAR_13 = FUNC_10(VAR_5);






 if (VAR_9 & VAR_4)
  return 0;







 if (!VAR_8 || VAR_8->vm_flags & VAR_3)
  VAR_11 = FUNC_5(&VAR_5->i_mapping->private_list, VAR_6, VAR_7);
 else {
  struct resv_map *VAR_14 = FUNC_6();
  if (!VAR_14)
   return -VAR_0;

  VAR_11 = VAR_7 - VAR_6;

  FUNC_9(VAR_8, VAR_14);
  FUNC_8(VAR_8, VAR_2);
 }

 if (VAR_11 < 0) {
  VAR_10 = VAR_11;
  goto out_err;
 }


 if (FUNC_1(VAR_13, VAR_11)) {
  VAR_10 = -VAR_1;
  goto out_err;
 }





 VAR_10 = FUNC_3(VAR_12, VAR_11);
 if (VAR_10 < 0) {
  FUNC_2(VAR_13, VAR_11);
  goto out_err;
 }
 if (!VAR_8 || VAR_8->vm_flags & VAR_3)
  FUNC_4(&VAR_5->i_mapping->private_list, VAR_6, VAR_7);
 return 0;
out_err:
 if (VAR_8)
  FUNC_7(VAR_8);
 return VAR_10;
}
