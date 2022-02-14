
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int svn_stream_t ;
typedef int svn_fs_root_t ;
typedef int svn_error_t ;
typedef int svn_checksum_t ;
typedef int svn_cancel_func_t ;
typedef int apr_pool_t ;


 int FUNC_0 (int ) ;
 int * VAR_0 ;
 int FUNC_1 (int **,int *,char const*,int *,int *) ;
 int FUNC_2 (int *,int *,int ,void*,int *) ;

__attribute__((used)) static svn_error_t *
FUNC_3(svn_fs_root_t *VAR_1,
         const char *VAR_2,
         const svn_checksum_t *VAR_3,
         svn_stream_t *VAR_4,
         svn_cancel_func_t VAR_5,
         void *VAR_6,
         apr_pool_t *VAR_7)
{
  svn_stream_t *VAR_8;




  FUNC_0(FUNC_1(&VAR_8, VAR_1, VAR_2,
                            ((void*)0) ,
                            VAR_7));
  FUNC_0(FUNC_2(VAR_4, VAR_8,
                           VAR_5, VAR_6,
                           VAR_7));

  return VAR_0;
}
