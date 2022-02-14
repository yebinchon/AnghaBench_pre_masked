
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct the_nilfs {int ns_segctor_sem; int * ns_gc_inodes_h; int ns_last_segment_lock; int ns_supers; int ns_list; int ns_writer_sem; int ns_mount_mutex; int ns_super_sem; int ns_sem; int ns_ndirtyblks; int ns_count; struct block_device* ns_bdev; } ;
struct block_device {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *,int) ;
 int FUNC_2 (int *) ;
 struct the_nilfs* FUNC_3 (int,int ) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;

__attribute__((used)) static struct the_nilfs *FUNC_6(struct block_device *VAR_1)
{
 struct the_nilfs *VAR_2;

 VAR_2 = FUNC_3(sizeof(*VAR_2), VAR_0);
 if (!VAR_2)
  return ((void*)0);

 VAR_2->ns_bdev = VAR_1;
 FUNC_1(&VAR_2->ns_count, 1);
 FUNC_1(&VAR_2->ns_ndirtyblks, 0);
 FUNC_2(&VAR_2->ns_sem);
 FUNC_2(&VAR_2->ns_super_sem);
 FUNC_4(&VAR_2->ns_mount_mutex);
 FUNC_2(&VAR_2->ns_writer_sem);
 FUNC_0(&VAR_2->ns_list);
 FUNC_0(&VAR_2->ns_supers);
 FUNC_5(&VAR_2->ns_last_segment_lock);
 VAR_2->ns_gc_inodes_h = ((void*)0);
 FUNC_2(&VAR_2->ns_segctor_sem);

 return VAR_2;
}
