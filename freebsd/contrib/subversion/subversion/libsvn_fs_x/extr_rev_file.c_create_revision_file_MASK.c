
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_15__ TYPE_6__ ;
typedef struct TYPE_14__ TYPE_5__ ;
typedef struct TYPE_13__ TYPE_4__ ;
typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


struct TYPE_12__ {int start; int end; int * checksum; } ;
struct TYPE_11__ {int start; int end; int * checksum; } ;
struct TYPE_10__ {int start_revision; int is_packed; } ;
struct TYPE_13__ {int * owner; int * pool; TYPE_3__ p2l_info; TYPE_2__ l2p_info; int block_size; int * l2p_stream; int * p2l_stream; int * stream; int * file; TYPE_1__ file_info; TYPE_6__* fs; } ;
typedef TYPE_4__ svn_fs_x__revision_file_t ;
struct TYPE_14__ {int block_size; } ;
typedef TYPE_5__ svn_fs_x__data_t ;
struct TYPE_15__ {TYPE_5__* fsap_data; } ;
typedef TYPE_6__ svn_fs_t ;
typedef int apr_pool_t ;


 int VAR_0 ;
 int VAR_1 ;
 TYPE_4__* FUNC_0 (int *,int) ;

__attribute__((used)) static svn_fs_x__revision_file_t *
FUNC_1(svn_fs_t *VAR_2,
                     apr_pool_t *VAR_3)
{
  svn_fs_x__data_t *VAR_4 = VAR_2->fsap_data;

  svn_fs_x__revision_file_t *VAR_5 = FUNC_0(VAR_3, sizeof(*VAR_5));
  VAR_5->fs = VAR_2;
  VAR_5->file_info.is_packed = VAR_0;
  VAR_5->file_info.start_revision = VAR_1;
  VAR_5->file = ((void*)0);
  VAR_5->stream = ((void*)0);
  VAR_5->p2l_stream = ((void*)0);
  VAR_5->l2p_stream = ((void*)0);
  VAR_5->block_size = VAR_4->block_size;
  VAR_5->l2p_info.start = -1;
  VAR_5->l2p_info.end = -1;
  VAR_5->l2p_info.checksum = ((void*)0);
  VAR_5->p2l_info.start = -1;
  VAR_5->p2l_info.end = -1;
  VAR_5->p2l_info.checksum = ((void*)0);
  VAR_5->pool = ((void*)0);
  VAR_5->owner = VAR_3;

  return VAR_5;
}
