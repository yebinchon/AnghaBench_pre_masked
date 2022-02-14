
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ocfs2_group_desc {int bg_free_bits_count; void* bg_bitmap; } ;
struct inode {int dummy; } ;
struct buffer_head {int dummy; } ;
typedef int handle_t ;


 int FUNC_0 (int) ;
 int FUNC_1 (struct inode*) ;
 int FUNC_2 (struct ocfs2_group_desc*) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_3 (int *,unsigned int) ;
 unsigned int FUNC_4 (int ) ;
 int FUNC_5 (int ,char*,unsigned int,unsigned int) ;
 int FUNC_6 () ;
 int FUNC_7 (int) ;
 int FUNC_8 (int) ;
 scalar_t__ FUNC_9 (struct inode*) ;
 int FUNC_10 (int *,int ,struct buffer_head*,int) ;
 int FUNC_11 (int *,struct buffer_head*) ;
 int FUNC_12 (int ,void*) ;

__attribute__((used)) static inline int FUNC_13(handle_t *VAR_2,
          struct inode *VAR_3,
          struct ocfs2_group_desc *VAR_4,
          struct buffer_head *VAR_5,
          unsigned int VAR_6,
          unsigned int VAR_7)
{
 int VAR_8;
 void *VAR_9 = VAR_4->bg_bitmap;
 int VAR_10 = VAR_1;

 FUNC_6();



 FUNC_0(!FUNC_2(VAR_4));
 FUNC_0(FUNC_4(VAR_4->bg_free_bits_count) < VAR_7);

 FUNC_5(0, "block_group_set_bits: off = %u, num = %u\n", VAR_6,
      VAR_7);

 if (FUNC_9(VAR_3))
  VAR_10 = VAR_0;

 VAR_8 = FUNC_10(VAR_2,
      FUNC_1(VAR_3),
      VAR_5,
      VAR_10);
 if (VAR_8 < 0) {
  FUNC_7(VAR_8);
  goto bail;
 }

 FUNC_3(&VAR_4->bg_free_bits_count, -VAR_7);

 while(VAR_7--)
  FUNC_12(VAR_6++, VAR_9);

 VAR_8 = FUNC_11(VAR_2,
         VAR_5);
 if (VAR_8 < 0) {
  FUNC_7(VAR_8);
  goto bail;
 }

bail:
 FUNC_8(VAR_8);
 return VAR_8;
}
