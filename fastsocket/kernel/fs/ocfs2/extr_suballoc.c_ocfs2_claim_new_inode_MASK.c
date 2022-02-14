
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ u64 ;
typedef scalar_t__ u16 ;
struct TYPE_2__ {int bg_allocs; } ;
struct ocfs2_super {TYPE_1__ alloc_stats; } ;
struct ocfs2_alloc_context {scalar_t__ ac_bits_given; int ac_bits_wanted; scalar_t__ ac_which; } ;
struct inode {int dummy; } ;
struct buffer_head {int dummy; } ;
typedef int handle_t ;


 int FUNC_0 (int) ;
 scalar_t__ VAR_0 ;
 int FUNC_1 (int *) ;
 int FUNC_2 () ;
 int FUNC_3 (int) ;
 int FUNC_4 (int) ;
 int FUNC_5 (struct ocfs2_super*,struct ocfs2_alloc_context*,int *,int,int,scalar_t__*,unsigned int*,scalar_t__*) ;
 int FUNC_6 (struct inode*,struct buffer_head*,struct ocfs2_alloc_context*) ;
 int FUNC_7 (struct inode*,struct ocfs2_alloc_context*) ;

int FUNC_8(struct ocfs2_super *VAR_1,
     handle_t *VAR_2,
     struct inode *VAR_3,
     struct buffer_head *VAR_4,
     struct ocfs2_alloc_context *VAR_5,
     u16 *VAR_6,
     u64 *VAR_7)
{
 int VAR_8;
 unsigned int VAR_9;
 u64 VAR_10;

 FUNC_2();

 FUNC_0(!VAR_5);
 FUNC_0(VAR_5->ac_bits_given != 0);
 FUNC_0(VAR_5->ac_bits_wanted != 1);
 FUNC_0(VAR_5->ac_which != VAR_0);

 FUNC_6(VAR_3, VAR_4, VAR_5);

 VAR_8 = FUNC_5(VAR_1,
        VAR_5,
        VAR_2,
        1,
        1,
        VAR_6,
        &VAR_9,
        &VAR_10);
 if (VAR_8 < 0) {
  FUNC_3(VAR_8);
  goto bail;
 }
 FUNC_1(&VAR_1->alloc_stats.bg_allocs);

 FUNC_0(VAR_9 != 1);

 *VAR_7 = VAR_10 + (u64) (*VAR_6);
 VAR_5->ac_bits_given++;
 FUNC_7(VAR_3, VAR_5);
 VAR_8 = 0;
bail:
 FUNC_4(VAR_8);
 return VAR_8;
}
