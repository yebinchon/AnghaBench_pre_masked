
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int svn_stream_t ;
struct TYPE_3__ {int src_filesize; int src_end; int src_start; int apr_file; } ;
typedef TYPE_1__ svn_diff_binary_patch_t ;
typedef int apr_pool_t ;


 int * FUNC_0 (int ,int ,int ,int *) ;
 int * FUNC_1 (int *,int ,int *) ;
 int * FUNC_2 (int *,int *) ;

svn_stream_t *
FUNC_3(const svn_diff_binary_patch_t *VAR_0,
                                         apr_pool_t *VAR_1)
{
  svn_stream_t *VAR_2 = FUNC_0(VAR_0->apr_file, VAR_0->src_start,
                                           VAR_0->src_end, VAR_1);

  VAR_2 = FUNC_2(VAR_2, VAR_1);




  return FUNC_1(VAR_2, VAR_0->src_filesize, VAR_1);
}
