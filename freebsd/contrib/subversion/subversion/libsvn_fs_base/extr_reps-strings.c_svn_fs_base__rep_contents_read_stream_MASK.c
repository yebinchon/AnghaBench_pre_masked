
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int trail_t ;
typedef int svn_stream_t ;
typedef int svn_fs_t ;
typedef int svn_error_t ;
typedef int svn_boolean_t ;
struct rep_read_baton {int dummy; } ;
typedef int apr_pool_t ;


 int FUNC_0 (int ) ;
 int * VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (struct rep_read_baton**,int *,char const*,int ,int *,int *) ;
 int * FUNC_2 (struct rep_read_baton*,int *) ;
 int FUNC_3 (int *,int *,int ) ;

svn_error_t *
FUNC_4(svn_stream_t **VAR_2,
                                      svn_fs_t *VAR_3,
                                      const char *VAR_4,
                                      svn_boolean_t VAR_5,
                                      trail_t *VAR_6,
                                      apr_pool_t *VAR_7)
{
  struct rep_read_baton *VAR_8;

  FUNC_0(FUNC_1(&VAR_8, VAR_3, VAR_4, VAR_5,
                             VAR_6, VAR_7));
  *VAR_2 = FUNC_2(VAR_8, VAR_7);
  FUNC_3(*VAR_2, ((void*)0) ,
                       VAR_1);

  return VAR_0;
}
