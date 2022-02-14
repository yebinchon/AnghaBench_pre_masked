
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int db; } ;
typedef TYPE_1__ svn_wc_context_t ;
typedef int svn_error_t ;
typedef int apr_pool_t ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int VAR_1 ;
 int * VAR_2 ;
 int FUNC_1 (char*) ;
 int FUNC_2 (char const*,char const*) ;
 int FUNC_3 (char const*,int *) ;
 int * FUNC_4 (int ,int *,int ,int ,int ) ;
 int FUNC_5 (char const*,char const*,int ,int *) ;
 int FUNC_6 (int ,char const*,int *) ;
 int FUNC_7 (char const**,int ,char const*,int *,int *) ;

svn_error_t *
FUNC_8(svn_wc_context_t *VAR_3,
                  const char *VAR_4,
                  const char *VAR_5,
                  apr_pool_t *VAR_6)
{
  const char *VAR_7;
  FUNC_0(FUNC_7(&VAR_7, VAR_3->db, VAR_4,
                                VAR_6, VAR_6));

  if (! FUNC_2(VAR_4, VAR_7))
    {
      FUNC_0(FUNC_6(VAR_3->db, VAR_7, VAR_6));

      FUNC_0(FUNC_5(VAR_4, VAR_5, VAR_0,
                                  VAR_6));
    }
  else
    return FUNC_4(
                    VAR_1, ((void*)0),
                    FUNC_1("'%s' is not the root of the working copy '%s'"),
                    FUNC_3(VAR_4, VAR_6),
                    FUNC_3(VAR_7, VAR_6));

  return VAR_2;
}
