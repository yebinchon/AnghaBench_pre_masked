
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct ocfs2_group_desc {int bg_free_bits_count; scalar_t__ bg_bitmap; } ;
struct inode {int dummy; } ;
struct buffer_head {int dummy; } ;
typedef int handle_t ;
struct TYPE_2__ {scalar_t__ b_committed_data; } ;


 int FUNC_0 (int) ;
 int FUNC_1 (struct inode*) ;
 int FUNC_2 (struct ocfs2_group_desc*) ;
 int VAR_0 ;
 int VAR_1 ;
 TYPE_1__* FUNC_3 (struct buffer_head*) ;
 int FUNC_4 (struct buffer_head*) ;
 int FUNC_5 (struct buffer_head*) ;
 int FUNC_6 (int *,unsigned int) ;
 int FUNC_7 (int ,char*,unsigned int,unsigned int) ;
 int FUNC_8 () ;
 int FUNC_9 (int) ;
 int FUNC_10 (unsigned int,unsigned long*) ;
 scalar_t__ FUNC_11 (struct inode*) ;
 int FUNC_12 (int *,int ,struct buffer_head*,int) ;
 int FUNC_13 (int *,struct buffer_head*) ;
 int FUNC_14 (unsigned int,unsigned long*) ;

__attribute__((used)) static inline int FUNC_15(handle_t *VAR_2,
            struct inode *VAR_3,
            struct ocfs2_group_desc *VAR_4,
            struct buffer_head *VAR_5,
            unsigned int VAR_6,
            unsigned int VAR_7)
{
 int VAR_8;
 unsigned int VAR_9;
 int VAR_10 = VAR_1;
 struct ocfs2_group_desc *VAR_11 = ((void*)0);
 int VAR_12 = 0;

 FUNC_8();



 FUNC_0(!FUNC_2(VAR_4));

 FUNC_7(0, "off = %u, num = %u\n", VAR_6, VAR_7);

 if (FUNC_11(VAR_3))
  VAR_10 = VAR_0;

 VAR_8 = FUNC_12(VAR_2, FUNC_1(VAR_3),
      VAR_5, VAR_10);
 if (VAR_8 < 0) {
  FUNC_9(VAR_8);
  goto bail;
 }

 if (FUNC_11(VAR_3))
  VAR_12 = 1;

 if (VAR_12) {
  FUNC_4(VAR_5);
  VAR_11 = (struct ocfs2_group_desc *)
     FUNC_3(VAR_5)->b_committed_data;
  FUNC_0(!VAR_11);
 }

 VAR_9 = VAR_7;
 while(VAR_9--) {
  FUNC_10((VAR_6 + VAR_9),
    (unsigned long *) VAR_4->bg_bitmap);
  if (VAR_12)
   FUNC_14(VAR_6 + VAR_9,
          (unsigned long *) VAR_11->bg_bitmap);
 }
 FUNC_6(&VAR_4->bg_free_bits_count, VAR_7);

 if (VAR_12)
  FUNC_5(VAR_5);

 VAR_8 = FUNC_13(VAR_2, VAR_5);
 if (VAR_8 < 0)
  FUNC_9(VAR_8);
bail:
 return VAR_8;
}
