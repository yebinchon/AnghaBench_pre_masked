
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct nilfs_sc_info {size_t sc_segbuf_nblocks; size_t sc_nblk_this_inc; TYPE_2__* sc_curseg; } ;
struct TYPE_3__ {size_t nblocks; } ;
struct TYPE_4__ {TYPE_1__ sb_sum; } ;



__attribute__((used)) static size_t FUNC_0(struct nilfs_sc_info *VAR_0)
{

 return VAR_0->sc_segbuf_nblocks -
  (VAR_0->sc_nblk_this_inc + VAR_0->sc_curseg->sb_sum.nblocks);
}
