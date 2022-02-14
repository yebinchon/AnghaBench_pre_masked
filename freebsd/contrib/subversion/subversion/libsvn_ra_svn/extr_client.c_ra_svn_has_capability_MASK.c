
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int conn; } ;
typedef TYPE_1__ svn_ra_svn__session_baton_t ;
struct TYPE_5__ {TYPE_1__* priv; } ;
typedef TYPE_2__ svn_ra_session_t ;
typedef int svn_error_t ;
typedef int svn_boolean_t ;
typedef int apr_pool_t ;


 int VAR_0 ;
 int VAR_1 ;
 int * VAR_2 ;
 int FUNC_0 (char*) ;
 scalar_t__ FUNC_1 (char const*,char const*) ;
 int * FUNC_2 (int ,int *,int ,char const*) ;
 int FUNC_3 (int ,char const*) ;

__attribute__((used)) static svn_error_t *
FUNC_4(svn_ra_session_t *VAR_3,
                      svn_boolean_t *VAR_4,
                      const char *VAR_5,
                      apr_pool_t *VAR_6)
{
  svn_ra_svn__session_baton_t *VAR_7 = VAR_3->priv;
  static const char* VAR_8[][2] =
  {

      {145, 135},
      {139, 129},
      {140, 130},
      {138, 128},
      {146, 136},
      {147, 137},
      {142, 132},
      {144,
                                          134},
      {143,
                                       133},
      {141, 131},

      {((void*)0), ((void*)0)}
  };
  int VAR_9;

  *VAR_4 = VAR_0;

  for (VAR_9 = 0; VAR_8[VAR_9][0]; VAR_9++)
    {
      if (FUNC_1(VAR_5, VAR_8[VAR_9][0]) == 0)
        {
          *VAR_4 = FUNC_3(VAR_7->conn, VAR_8[VAR_9][1]);
          return VAR_2;
        }
    }

  return FUNC_2(VAR_1, ((void*)0),
                           FUNC_0("Don't know anything about capability '%s'"),
                           VAR_5);
}
