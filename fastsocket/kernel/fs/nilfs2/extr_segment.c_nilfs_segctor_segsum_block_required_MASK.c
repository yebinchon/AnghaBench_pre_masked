
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct nilfs_segsum_pointer {unsigned int offset; } ;
struct nilfs_sc_info {int sc_blk_cnt; TYPE_1__* sc_super; } ;
struct nilfs_finfo {int dummy; } ;
struct TYPE_2__ {unsigned int s_blocksize; } ;



__attribute__((used)) static int FUNC_0(
 struct nilfs_sc_info *VAR_0, const struct nilfs_segsum_pointer *VAR_1,
 unsigned VAR_2)
{
 unsigned VAR_3 = VAR_0->sc_super->s_blocksize;


 return VAR_1->offset + VAR_2 +
  (!VAR_0->sc_blk_cnt ? sizeof(struct nilfs_finfo) : 0) >
  VAR_3;
}
