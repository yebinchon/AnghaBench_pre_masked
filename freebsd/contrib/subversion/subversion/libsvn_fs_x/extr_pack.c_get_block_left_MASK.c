
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {int block_size; } ;
typedef TYPE_2__ svn_fs_x__data_t ;
struct TYPE_7__ {int pack_offset; TYPE_1__* fs; } ;
typedef TYPE_3__ pack_context_t ;
typedef int apr_off_t ;
struct TYPE_5__ {TYPE_2__* fsap_data; } ;



__attribute__((used)) static apr_off_t
FUNC_0(pack_context_t *VAR_0)
{
  svn_fs_x__data_t *VAR_1 = VAR_0->fs->fsap_data;
  return VAR_1->block_size - (VAR_0->pack_offset % VAR_1->block_size);
}
