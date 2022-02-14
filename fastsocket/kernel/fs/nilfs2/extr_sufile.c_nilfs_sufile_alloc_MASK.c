
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct nilfs_sufile_header {int sh_last_alloc; int sh_ndirtysegs; int sh_ncleansegs; } ;
struct nilfs_segment_usage {int dummy; } ;
struct inode {int dummy; } ;
struct buffer_head {int b_page; } ;
typedef int __u64 ;
struct TYPE_2__ {size_t mi_entry_size; int mi_sem; } ;


 int VAR_0 ;
 int VAR_1 ;
 TYPE_1__* FUNC_0 (struct inode*) ;
 int FUNC_1 (struct buffer_head*) ;
 int FUNC_2 (int) ;
 int FUNC_3 (int *) ;
 void* FUNC_4 (int ,int ) ;
 int FUNC_5 (void*,int ) ;
 int FUNC_6 (int *,int) ;
 void* FUNC_7 (int ) ;
 int FUNC_8 (struct buffer_head*) ;
 int FUNC_9 (struct inode*) ;
 int FUNC_10 (struct nilfs_segment_usage*) ;
 int FUNC_11 (struct nilfs_segment_usage*) ;
 struct nilfs_sufile_header* FUNC_12 (struct inode*,struct buffer_head*,void*) ;
 struct nilfs_segment_usage* FUNC_13 (struct inode*,int,struct buffer_head*,void*) ;
 int FUNC_14 (struct inode*,struct buffer_head**) ;
 unsigned long FUNC_15 (struct inode*) ;
 int FUNC_16 (struct inode*,int,int,struct buffer_head**) ;
 unsigned long FUNC_17 (struct inode*,int,int) ;
 int FUNC_18 (int *) ;

int FUNC_19(struct inode *VAR_2, __u64 *VAR_3)
{
 struct buffer_head *VAR_4, *VAR_5;
 struct nilfs_sufile_header *VAR_6;
 struct nilfs_segment_usage *VAR_7;
 size_t VAR_8 = FUNC_0(VAR_2)->mi_entry_size;
 __u64 VAR_9, VAR_10, VAR_11;
 void *VAR_12;
 unsigned long VAR_13, VAR_14, VAR_15;
 int VAR_16, VAR_17, VAR_18;

 FUNC_3(&FUNC_0(VAR_2)->mi_sem);

 VAR_16 = FUNC_14(VAR_2, &VAR_4);
 if (VAR_16 < 0)
  goto out_sem;
 VAR_12 = FUNC_4(VAR_4->b_page, VAR_1);
 VAR_6 = FUNC_12(VAR_2, VAR_4, VAR_12);
 VAR_14 = FUNC_7(VAR_6->sh_ncleansegs);
 VAR_11 = FUNC_7(VAR_6->sh_last_alloc);
 FUNC_5(VAR_12, VAR_1);

 VAR_13 = FUNC_15(VAR_2);
 VAR_9 = VAR_11 + 1;
 VAR_10 = VAR_13 - 1;
 for (VAR_17 = 0; VAR_17 < VAR_13; VAR_17 += VAR_15) {
  if (VAR_9 >= VAR_13) {

   VAR_9 = 0;
   VAR_10 = VAR_11;
  }
  VAR_16 = FUNC_16(VAR_2, VAR_9, 1,
          &VAR_5);
  if (VAR_16 < 0)
   goto out_header;
  VAR_12 = FUNC_4(VAR_5->b_page, VAR_1);
  VAR_7 = FUNC_13(
   VAR_2, VAR_9, VAR_5, VAR_12);

  VAR_15 = FUNC_17(
   VAR_2, VAR_9, VAR_10);
  for (VAR_18 = 0; VAR_18 < VAR_15; VAR_18++, VAR_7 = (void *)VAR_7 + VAR_8, VAR_9++) {
   if (!FUNC_10(VAR_7))
    continue;

   FUNC_11(VAR_7);
   FUNC_5(VAR_12, VAR_1);

   VAR_12 = FUNC_4(VAR_4->b_page, VAR_1);
   VAR_6 = FUNC_12(
    VAR_2, VAR_4, VAR_12);
   FUNC_6(&VAR_6->sh_ncleansegs, -1);
   FUNC_6(&VAR_6->sh_ndirtysegs, 1);
   VAR_6->sh_last_alloc = FUNC_2(VAR_9);
   FUNC_5(VAR_12, VAR_1);

   FUNC_8(VAR_4);
   FUNC_8(VAR_5);
   FUNC_9(VAR_2);
   FUNC_1(VAR_5);
   *VAR_3 = VAR_9;
   goto out_header;
  }

  FUNC_5(VAR_12, VAR_1);
  FUNC_1(VAR_5);
 }


 VAR_16 = -VAR_0;

 out_header:
 FUNC_1(VAR_4);

 out_sem:
 FUNC_18(&FUNC_0(VAR_2)->mi_sem);
 return VAR_16;
}
