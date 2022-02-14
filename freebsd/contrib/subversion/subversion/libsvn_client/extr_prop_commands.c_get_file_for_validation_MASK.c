
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int svn_string_t ;
typedef int svn_stream_t ;
typedef int svn_ra_session_t ;
typedef int svn_error_t ;
struct getter_baton {int base_revision_for_url; int * ra_session; } ;
typedef int apr_pool_t ;
typedef int apr_hash_t ;


 int FUNC_0 (int ) ;
 int * VAR_0 ;
 int VAR_1 ;
 int * FUNC_1 (int *,int ) ;
 int FUNC_2 (int *,char*,int ,int *,int *,int **,int *) ;

__attribute__((used)) static svn_error_t *
FUNC_3(const svn_string_t **VAR_2,
                        svn_stream_t *VAR_3,
                        void *VAR_4,
                        apr_pool_t *VAR_5)
{
  struct getter_baton *VAR_6 = VAR_4;
  svn_ra_session_t *VAR_7 = VAR_6->ra_session;
  apr_hash_t *VAR_8;

  FUNC_0(FUNC_2(VAR_7, "", VAR_6->base_revision_for_url,
                          VAR_3, ((void*)0),
                          (VAR_2 ? &VAR_8 : ((void*)0)),
                          VAR_5));

  if (VAR_2)
    *VAR_2 = FUNC_1(VAR_8, VAR_1);

  return VAR_0;
}
