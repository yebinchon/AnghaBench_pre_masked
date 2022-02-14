
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int svn_stream_t ;
typedef int svn_revnum_t ;
typedef int svn_error_t ;
struct fb_baton {int cb_baton; int (* provide_base_cb ) (int **,int *,int ,char const*,int *,int *) ;} ;
typedef int apr_pool_t ;


 int FUNC_0 (int ) ;
 int * VAR_0 ;
 char* FUNC_1 (int *,char const*) ;
 int FUNC_2 (int **,int *,int ,char const*,int *,int *) ;
 int VAR_1 ;
 int FUNC_3 (int *,int *,int *,int *,int *) ;
 int FUNC_4 (int **,char const**,int *,int ,int *,int *) ;

__attribute__((used)) static svn_error_t *
FUNC_5(const char **VAR_2,
           void *VAR_3,
           const char *VAR_4,
           svn_revnum_t VAR_5,
           apr_pool_t *VAR_6,
           apr_pool_t *VAR_7)
{
  struct fb_baton *VAR_8 = VAR_3;
  svn_revnum_t VAR_9;
  svn_stream_t *VAR_10;
  svn_stream_t *VAR_11;
  const char *VAR_12;



  FUNC_0(VAR_8->provide_base_cb(&VAR_10, &VAR_9, VAR_8->cb_baton,
                               VAR_4, VAR_6, VAR_7));

  FUNC_0(FUNC_4(&VAR_11, &VAR_12, ((void*)0),
                                 VAR_1,
                                 VAR_7, VAR_7));
  FUNC_0(FUNC_3(VAR_10, VAR_11, ((void*)0), ((void*)0), VAR_7));

  *VAR_2 = FUNC_1(VAR_6, VAR_12);



  return VAR_0;
}
