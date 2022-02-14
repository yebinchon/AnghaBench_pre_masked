
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ u64 ;
typedef scalar_t__ u32 ;
typedef scalar_t__ u16 ;
struct TYPE_2__ {int bg_allocs; } ;
struct ocfs2_super {TYPE_1__ alloc_stats; } ;
struct ocfs2_alloc_context {scalar_t__ ac_bits_wanted; scalar_t__ ac_bits_given; scalar_t__ ac_which; } ;
typedef int handle_t ;


 int FUNC_0 (int) ;
 scalar_t__ VAR_0 ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int) ;
 int FUNC_3 (int) ;
 int FUNC_4 (struct ocfs2_super*,struct ocfs2_alloc_context*,int *,scalar_t__,int,scalar_t__*,unsigned int*,scalar_t__*) ;

int FUNC_5(struct ocfs2_super *VAR_1,
    handle_t *VAR_2,
    struct ocfs2_alloc_context *VAR_3,
    u32 VAR_4,
    u16 *VAR_5,
    unsigned int *VAR_6,
    u64 *VAR_7)
{
 int VAR_8;
 u64 VAR_9;

 FUNC_0(!VAR_3);
 FUNC_0(VAR_3->ac_bits_wanted < (VAR_3->ac_bits_given + VAR_4));
 FUNC_0(VAR_3->ac_which != VAR_0);

 VAR_8 = FUNC_4(VAR_1,
        VAR_3,
        VAR_2,
        VAR_4,
        1,
        VAR_5,
        VAR_6,
        &VAR_9);
 if (VAR_8 < 0) {
  FUNC_2(VAR_8);
  goto bail;
 }
 FUNC_1(&VAR_1->alloc_stats.bg_allocs);

 *VAR_7 = VAR_9 + (u64) *VAR_5;
 VAR_3->ac_bits_given += (*VAR_6);
 VAR_8 = 0;
bail:
 FUNC_3(VAR_8);
 return VAR_8;
}
