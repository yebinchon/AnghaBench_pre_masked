
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int uint64_t ;
struct TYPE_6__ {int sio_cksum; int sio_birth; int sio_phys_birth; int sio_blk_prop; int sio_offset; int sio_asize; } ;
typedef TYPE_1__ scan_io_t ;
struct TYPE_7__ {int blk_fill; int blk_cksum; int blk_birth; int blk_phys_birth; int blk_prop; int * blk_dva; } ;
typedef TYPE_2__ blkptr_t ;


 int FUNC_0 (int *,int ) ;
 int FUNC_1 (int *,int ) ;
 int FUNC_2 (int *,int ) ;
 int FUNC_3 (TYPE_2__*,int) ;

__attribute__((used)) static inline void
FUNC_4(const scan_io_t *VAR_0, blkptr_t *VAR_1, uint64_t VAR_2)
{
 FUNC_3(VAR_1, sizeof (*VAR_1));
 FUNC_0(&VAR_1->blk_dva[0], VAR_0->sio_asize);
 FUNC_2(&VAR_1->blk_dva[0], VAR_2);
 FUNC_1(&VAR_1->blk_dva[0], VAR_0->sio_offset);
 VAR_1->blk_prop = VAR_0->sio_blk_prop;
 VAR_1->blk_phys_birth = VAR_0->sio_phys_birth;
 VAR_1->blk_birth = VAR_0->sio_birth;
 VAR_1->blk_fill = 1;
 VAR_1->blk_cksum = VAR_0->sio_cksum;
}
