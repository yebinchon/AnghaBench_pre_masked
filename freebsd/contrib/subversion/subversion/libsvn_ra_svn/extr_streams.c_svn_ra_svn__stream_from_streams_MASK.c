
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int svn_stream_t ;
typedef int svn_ra_svn__stream_t ;
typedef int apr_pool_t ;
typedef int apr_file_t ;


 int VAR_0 ;
 int * FUNC_0 (int *,int *,int *,int ,int *) ;
 int * FUNC_1 (int *) ;

svn_ra_svn__stream_t *
FUNC_2(svn_stream_t *VAR_1,
                                svn_stream_t *VAR_2,
                                apr_pool_t *VAR_3)
{
  apr_file_t *VAR_4;
  VAR_4 = FUNC_1(VAR_2);

  return FUNC_0(VAR_1, VAR_2,
                                   VAR_4, VAR_0,
                                   VAR_3);
}
