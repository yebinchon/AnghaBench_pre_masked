
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef int svn_revnum_t ;
struct TYPE_7__ {TYPE_3__* fsap_data; } ;
typedef TYPE_1__ svn_fs_t ;
struct TYPE_8__ {int pool; int p2l_offset; int l2p_offset; int file; int * l2p_stream; } ;
typedef TYPE_2__ svn_fs_fs__revision_file_t ;
typedef int svn_error_t ;
struct TYPE_9__ {scalar_t__ block_size; } ;
typedef TYPE_3__ fs_fs_data_t ;
typedef int apr_size_t ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int * VAR_1 ;
 int FUNC_1 (int **,int ,int ,int ,int ,int ,int ,int ) ;
 int FUNC_2 (TYPE_2__*) ;

__attribute__((used)) static svn_error_t *
FUNC_3(svn_fs_fs__revision_file_t *VAR_2,
                    svn_fs_t *VAR_3,
                    svn_revnum_t VAR_4)
{
  if (VAR_2->l2p_stream == ((void*)0))
    {
      fs_fs_data_t *VAR_5 = VAR_3->fsap_data;

      FUNC_0(FUNC_2(VAR_2));
      FUNC_0(FUNC_1(&VAR_2->l2p_stream,
                                 VAR_2->file,
                                 VAR_2->l2p_offset,
                                 VAR_2->p2l_offset,
                                 VAR_0,
                                 (apr_size_t)VAR_5->block_size,
                                 VAR_2->pool,
                                 VAR_2->pool));
    }

  return VAR_1;
}
