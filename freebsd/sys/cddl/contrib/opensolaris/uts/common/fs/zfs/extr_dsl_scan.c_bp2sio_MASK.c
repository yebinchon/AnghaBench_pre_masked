
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int sio_cksum; int sio_birth; int sio_phys_birth; int sio_blk_prop; int sio_asize; int sio_offset; } ;
typedef TYPE_1__ scan_io_t ;
struct TYPE_6__ {int blk_cksum; int blk_birth; int blk_phys_birth; int blk_prop; int * blk_dva; } ;
typedef TYPE_2__ blkptr_t ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;

__attribute__((used)) static inline void
FUNC_2(const blkptr_t *VAR_0, scan_io_t *VAR_1, int VAR_2)
{

 VAR_1->sio_offset = FUNC_1(&VAR_0->blk_dva[VAR_2]);
 VAR_1->sio_asize = FUNC_0(&VAR_0->blk_dva[VAR_2]);
 VAR_1->sio_blk_prop = VAR_0->blk_prop;
 VAR_1->sio_phys_birth = VAR_0->blk_phys_birth;
 VAR_1->sio_birth = VAR_0->blk_birth;
 VAR_1->sio_cksum = VAR_0->blk_cksum;
}
