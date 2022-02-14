
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int svn_revnum_t ;
typedef int svn_node_kind_t ;
typedef int svn_error_t ;
struct edit_baton {int ra_session; int revision; } ;
typedef int apr_pool_t ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int * VAR_0 ;
 int FUNC_2 (int ,char const*,int ,int *,int *) ;

__attribute__((used)) static svn_error_t *
FUNC_3(svn_node_kind_t *VAR_1,
                void *VAR_2,
                const char *VAR_3,
                svn_revnum_t VAR_4,
                apr_pool_t *VAR_5)
{
  struct edit_baton *VAR_6 = VAR_2;

  if (!FUNC_1(VAR_4))
    VAR_4 = VAR_6->revision;

  FUNC_0(FUNC_2(VAR_6->ra_session, VAR_3, VAR_4, VAR_1,
                            VAR_5));

  return VAR_0;
}
