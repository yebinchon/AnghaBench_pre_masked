
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int trail_t ;
typedef int svn_stream_t ;
typedef int svn_fs_t ;
typedef int svn_error_t ;
typedef scalar_t__ svn_boolean_t ;
struct rep_write_baton {int dummy; } ;
typedef int apr_pool_t ;


 int FUNC_0 (int ) ;
 int * VAR_0 ;
 int FUNC_1 (int *,char const*,char const*,int *,int *) ;
 int VAR_1 ;
 int VAR_2 ;
 struct rep_write_baton* FUNC_2 (int *,char const*,char const*,int *,int *) ;
 int * FUNC_3 (struct rep_write_baton*,int *) ;
 int FUNC_4 (int *,int ) ;
 int FUNC_5 (int *,int ) ;

svn_error_t *
FUNC_6(svn_stream_t **VAR_3,
                                       svn_fs_t *VAR_4,
                                       const char *VAR_5,
                                       const char *VAR_6,
                                       svn_boolean_t VAR_7,
                                       trail_t *VAR_8,
                                       apr_pool_t *VAR_9)
{
  struct rep_write_baton *VAR_10;


  FUNC_0(FUNC_1(VAR_4, VAR_5, VAR_6, VAR_8, VAR_9));


  VAR_10 = FUNC_2(VAR_4, VAR_5, VAR_6,
                           VAR_7 ? VAR_8 : ((void*)0), VAR_9);
  *VAR_3 = FUNC_3(VAR_10, VAR_9);
  FUNC_5(*VAR_3, VAR_2);
  FUNC_4(*VAR_3, VAR_1);

  return VAR_0;
}
