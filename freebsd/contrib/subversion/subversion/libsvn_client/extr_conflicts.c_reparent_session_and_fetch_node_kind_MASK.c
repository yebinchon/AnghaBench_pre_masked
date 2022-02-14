
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_1__ ;


typedef int svn_revnum_t ;
typedef int svn_ra_session_t ;
typedef int svn_node_kind_t ;
struct TYPE_8__ {scalar_t__ apr_err; } ;
typedef TYPE_1__ svn_error_t ;
typedef int apr_pool_t ;


 int FUNC_0 (int ) ;
 scalar_t__ VAR_0 ;
 TYPE_1__* VAR_1 ;
 int FUNC_1 (TYPE_1__*) ;
 TYPE_1__* FUNC_2 (TYPE_1__*) ;
 int VAR_2 ;
 int FUNC_3 (int *,char*,int ,int *,int *) ;
 TYPE_1__* FUNC_4 (int *,char const*,int *) ;

__attribute__((used)) static svn_error_t *
FUNC_5(svn_node_kind_t *VAR_3,
                                     svn_ra_session_t *VAR_4,
                                     const char *VAR_5,
                                     svn_revnum_t VAR_6,
                                     apr_pool_t *VAR_7)
{
  svn_error_t *VAR_8;

  VAR_8 = FUNC_4(VAR_4, VAR_5, VAR_7);
  if (VAR_8)
    {
      if (VAR_8->apr_err == VAR_0)
        {
          FUNC_1(VAR_8);
          *VAR_3 = VAR_2;
          return VAR_1;
        }

      return FUNC_2(VAR_8);
    }

  FUNC_0(FUNC_3(VAR_4, "", VAR_6, VAR_3, VAR_7));

  return VAR_1;
}
