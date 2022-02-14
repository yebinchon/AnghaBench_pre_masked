
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct vm_area_struct {int vm_flags; TYPE_2__* vm_file; } ;
struct resv_map {int regions; } ;
struct inode {TYPE_1__* i_mapping; } ;
struct hstate {int dummy; } ;
struct address_space {struct inode* host; } ;
typedef scalar_t__ pgoff_t ;
struct TYPE_4__ {struct address_space* f_mapping; } ;
struct TYPE_3__ {int private_list; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct vm_area_struct*,int ) ;
 long FUNC_1 (int *,scalar_t__,scalar_t__) ;
 scalar_t__ FUNC_2 (struct hstate*,struct vm_area_struct*,unsigned long) ;
 struct resv_map* FUNC_3 (struct vm_area_struct*) ;

__attribute__((used)) static long FUNC_4(struct hstate *VAR_2,
   struct vm_area_struct *VAR_3, unsigned long VAR_4)
{
 struct address_space *VAR_5 = VAR_3->vm_file->f_mapping;
 struct inode *VAR_6 = VAR_5->host;

 if (VAR_3->vm_flags & VAR_1) {
  pgoff_t VAR_7 = FUNC_2(VAR_2, VAR_3, VAR_4);
  return FUNC_1(&VAR_6->i_mapping->private_list,
       VAR_7, VAR_7 + 1);

 } else if (!FUNC_0(VAR_3, VAR_0)) {
  return 1;

 } else {
  long VAR_8;
  pgoff_t VAR_9 = FUNC_2(VAR_2, VAR_3, VAR_4);
  struct resv_map *VAR_10 = FUNC_3(VAR_3);

  VAR_8 = FUNC_1(&VAR_10->regions, VAR_9, VAR_9 + 1);
  if (VAR_8 < 0)
   return VAR_8;
  return 0;
 }
}
