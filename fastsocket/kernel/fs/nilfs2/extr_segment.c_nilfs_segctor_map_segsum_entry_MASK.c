
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct nilfs_segsum_pointer {unsigned int offset; TYPE_2__* bh; } ;
struct nilfs_segment_buffer {int sb_segsum_buffers; } ;
struct nilfs_sc_info {TYPE_1__* sc_super; struct nilfs_segment_buffer* sc_curseg; } ;
struct TYPE_6__ {void* b_data; } ;
struct TYPE_5__ {unsigned int s_blocksize; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (TYPE_2__*,int *) ;
 TYPE_2__* FUNC_2 (TYPE_2__*) ;
 scalar_t__ FUNC_3 (int) ;

__attribute__((used)) static void *FUNC_4(struct nilfs_sc_info *VAR_0,
         struct nilfs_segsum_pointer *VAR_1,
         unsigned VAR_2)
{
 struct nilfs_segment_buffer *VAR_3 = VAR_0->sc_curseg;
 unsigned VAR_4 = VAR_0->sc_super->s_blocksize;
 void *VAR_5;

 if (FUNC_3(VAR_1->offset + VAR_2 > VAR_4)) {
  VAR_1->offset = 0;
  FUNC_0(FUNC_1(VAR_1->bh,
            &VAR_3->sb_segsum_buffers));
  VAR_1->bh = FUNC_2(VAR_1->bh);
 }
 VAR_5 = VAR_1->bh->b_data + VAR_1->offset;
 VAR_1->offset += VAR_2;
 return VAR_5;
}
