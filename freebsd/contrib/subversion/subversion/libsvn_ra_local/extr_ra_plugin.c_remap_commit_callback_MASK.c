
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int svn_ra_session_t ;
typedef int * svn_commit_callback2_t ;
struct ccw_baton {void* original_baton; int * original_callback; int * session; } ;
typedef int apr_pool_t ;


 struct ccw_baton* FUNC_0 (int *,int) ;
 int * VAR_0 ;

__attribute__((used)) static void
FUNC_1(svn_commit_callback2_t *VAR_1,
                      void **VAR_2,
                      svn_ra_session_t *VAR_3,
                      svn_commit_callback2_t VAR_4,
                      void *VAR_5,
                      apr_pool_t *VAR_6)
{
  if (VAR_4 == ((void*)0))
    {
      *VAR_1 = ((void*)0);
      *VAR_2 = ((void*)0);
    }
  else
    {


      struct ccw_baton *VAR_7 = FUNC_0(VAR_6, sizeof(*VAR_7));

      VAR_7->session = VAR_3;
      VAR_7->original_callback = VAR_4;
      VAR_7->original_baton = VAR_5;

      *VAR_1 = VAR_0;
      *VAR_2 = VAR_7;
    }
}
