
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_1__ ;


typedef int svn_wc_context_t ;
typedef int svn_wc_adm_access_t ;
struct TYPE_8__ {scalar_t__ apr_err; } ;
typedef TYPE_1__ svn_error_t ;
typedef int svn_boolean_t ;
typedef int apr_pool_t ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 scalar_t__ VAR_1 ;
 int FUNC_1 (char const**,char const*,int *) ;
 int FUNC_2 (TYPE_1__*) ;
 TYPE_1__* FUNC_3 (TYPE_1__*) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int **,int *,int ,int *) ;
 TYPE_1__* FUNC_6 (int *) ;
 TYPE_1__* FUNC_7 (int *,int *,char const*,int *) ;

svn_error_t *
FUNC_8(svn_boolean_t *VAR_2,
                        const char *VAR_3,
                        svn_wc_adm_access_t *VAR_4,
                        apr_pool_t *VAR_5)
{
  svn_wc_context_t *VAR_6;
  const char *VAR_7;
  svn_error_t *VAR_8;

  FUNC_0(FUNC_1(&VAR_7, VAR_3, VAR_5));
  FUNC_0(FUNC_5(&VAR_6, ((void*)0) ,
                                         FUNC_4(VAR_4), VAR_5));

  VAR_8 = FUNC_7(VAR_2,
                                 VAR_6,
                                 VAR_7,
                                 VAR_5);

  if (VAR_8)
    {
      if (VAR_8->apr_err != VAR_1)
        return FUNC_3(VAR_8);

      FUNC_2(VAR_8);
      *VAR_2 = VAR_0;
    }

  return FUNC_3(FUNC_6(VAR_6));
}
