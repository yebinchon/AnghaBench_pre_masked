
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_1__ ;


typedef int svn_wc_adm_access_t ;
typedef int svn_wc__db_t ;
struct TYPE_10__ {int apr_err; } ;
typedef TYPE_1__ svn_error_t ;
typedef int svn_boolean_t ;
typedef int apr_pool_t ;


 scalar_t__ FUNC_0 (int ) ;
 int VAR_0 ;
 int FUNC_1 (TYPE_1__*) ;
 int FUNC_2 (int) ;
 int VAR_1 ;
 TYPE_1__* VAR_2 ;
 int VAR_3 ;
 int FUNC_3 (char*) ;
 TYPE_1__* FUNC_4 (int **,char const*,int *,int ,int ,int *,int *) ;
 TYPE_1__* FUNC_5 (char const**,char const*,int *) ;
 int FUNC_6 (char const*,int *) ;
 TYPE_1__* FUNC_7 (int ,TYPE_1__*,int ,int ) ;
 TYPE_1__* FUNC_8 (int*,int *,char const*,int ,int *) ;

__attribute__((used)) static svn_error_t *
FUNC_9(svn_wc_adm_access_t **VAR_4,
            const char *VAR_5,
            svn_boolean_t VAR_6,
            svn_wc__db_t *VAR_7,
            svn_boolean_t VAR_8,
            apr_pool_t *VAR_9,
            apr_pool_t *VAR_10)
{
  const char *VAR_11;
  int VAR_12 = 0;
  svn_error_t *VAR_13;
  svn_wc_adm_access_t *VAR_14;

  FUNC_1(FUNC_5(&VAR_11, VAR_5, VAR_10));
  VAR_13 = FUNC_8(&VAR_12, VAR_7, VAR_11, VAR_0,
                                  VAR_10);
  if (VAR_12 == 0 || (VAR_13 && FUNC_0(VAR_13->apr_err)))
    {
      return FUNC_7(VAR_1, VAR_13,
                               FUNC_3("'%s' is not a working copy"),
                               FUNC_6(VAR_5, VAR_10));
    }
  FUNC_1(VAR_13);




  FUNC_2(VAR_12 == VAR_3);


  FUNC_1(FUNC_4(&VAR_14, VAR_5, VAR_7, VAR_8, VAR_6,
                           VAR_9, VAR_10));


  *VAR_4 = VAR_14;

  return VAR_2;
}
