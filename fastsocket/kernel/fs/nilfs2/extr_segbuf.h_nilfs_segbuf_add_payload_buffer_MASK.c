
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int nblocks; } ;
struct nilfs_segment_buffer {TYPE_1__ sb_sum; int sb_payload_buffers; } ;
struct buffer_head {int b_assoc_buffers; } ;


 int FUNC_0 (int *,int *) ;

__attribute__((used)) static inline void
FUNC_1(struct nilfs_segment_buffer *VAR_0,
    struct buffer_head *VAR_1)
{
 FUNC_0(&VAR_1->b_assoc_buffers, &VAR_0->sb_payload_buffers);
 VAR_0->sb_sum.nblocks++;
}
