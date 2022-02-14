
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int end; int start; } ;
struct TYPE_6__ {int * p2l_stream; int pool; scalar_t__ block_size; TYPE_1__ p2l_info; int file; } ;
typedef TYPE_2__ svn_fs_x__revision_file_t ;
typedef int svn_fs_x__packed_number_stream_t ;
typedef int svn_error_t ;
typedef int apr_size_t ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int * VAR_1 ;
 int FUNC_1 (TYPE_2__*) ;
 int FUNC_2 (int **,int ,int ,int ,int ,int ,int ,int ) ;

svn_error_t *
FUNC_3(svn_fs_x__packed_number_stream_t **VAR_2,
                             svn_fs_x__revision_file_t *VAR_3)
{
  if (VAR_3->p2l_stream== ((void*)0))
    {
      FUNC_0(FUNC_1(VAR_3));
      FUNC_0(FUNC_2(&VAR_3->p2l_stream,
                                           VAR_3->file,
                                           VAR_3->p2l_info.start,
                                           VAR_3->p2l_info.end,
                                           VAR_0,
                                           (apr_size_t)VAR_3->block_size,
                                           VAR_3->pool,
                                           VAR_3->pool));
    }

  *VAR_2 = VAR_3->p2l_stream;
  return VAR_1;
}
