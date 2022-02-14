
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef int svn_revnum_t ;
struct TYPE_8__ {TYPE_3__* fsap_data; } ;
typedef TYPE_1__ svn_fs_t ;
struct TYPE_9__ {int l2p_offset; int p2l_offset; int footer_offset; int * pool; int * p2l_checksum; int * l2p_checksum; int block_size; int * l2p_stream; int * p2l_stream; int * stream; int * file; int start_revision; int is_packed; } ;
typedef TYPE_2__ svn_fs_fs__revision_file_t ;
struct TYPE_10__ {int block_size; } ;
typedef TYPE_3__ fs_fs_data_t ;
typedef int apr_pool_t ;


 int FUNC_0 (TYPE_1__*,int ) ;
 int FUNC_1 (TYPE_1__*,int ) ;

__attribute__((used)) static void
FUNC_2(svn_fs_fs__revision_file_t *VAR_0,
                   svn_fs_t *VAR_1,
                   svn_revnum_t VAR_2,
                   apr_pool_t *VAR_3)
{
  fs_fs_data_t *VAR_4 = VAR_1->fsap_data;

  VAR_0->is_packed = FUNC_0(VAR_1, VAR_2);
  VAR_0->start_revision = FUNC_1(VAR_1, VAR_2);

  VAR_0->file = ((void*)0);
  VAR_0->stream = ((void*)0);
  VAR_0->p2l_stream = ((void*)0);
  VAR_0->l2p_stream = ((void*)0);
  VAR_0->block_size = VAR_4->block_size;
  VAR_0->l2p_offset = -1;
  VAR_0->l2p_checksum = ((void*)0);
  VAR_0->p2l_offset = -1;
  VAR_0->p2l_checksum = ((void*)0);
  VAR_0->footer_offset = -1;
  VAR_0->pool = VAR_3;
}
