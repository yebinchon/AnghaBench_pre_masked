
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_1__ ;


typedef int svn_wc__db_wcroot_t ;
typedef int svn_wc__db_t ;
typedef int svn_revnum_t ;
struct TYPE_9__ {scalar_t__ apr_err; } ;
typedef TYPE_1__ svn_error_t ;
typedef int svn_boolean_t ;
typedef int apr_pool_t ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 scalar_t__ VAR_1 ;
 TYPE_1__* VAR_2 ;
 int FUNC_1 (char*) ;
 int FUNC_2 (int *,int *,char const*) ;
 int FUNC_3 (int *,int *,int *,char const*,int ,int *) ;
 int FUNC_4 (int *,int *,char const*,int *) ;
 TYPE_1__* FUNC_5 (int *,int *,char const*,char const*,int *) ;
 int FUNC_6 (int *,int *,char const*,int *) ;
 int FUNC_7 (int *,char const*,int *) ;
 int FUNC_8 (TYPE_1__*) ;
 TYPE_1__* FUNC_9 (scalar_t__,int *,int ,int ) ;
 TYPE_1__* FUNC_10 (TYPE_1__*) ;

__attribute__((used)) static svn_error_t *
FUNC_11(svn_revnum_t *VAR_3,
                    svn_revnum_t *VAR_4,
                    svn_boolean_t *VAR_5,
                    svn_boolean_t *VAR_6,
                    svn_boolean_t *VAR_7,
                    svn_wc__db_wcroot_t *VAR_8,
                    const char *VAR_9,
                    svn_wc__db_t *VAR_10,
                    const char *VAR_11,
                    svn_boolean_t VAR_12,
                    apr_pool_t *VAR_13)
{
  svn_error_t *VAR_14;
  svn_boolean_t VAR_15;

  FUNC_0(FUNC_2(&VAR_15, VAR_8, VAR_9));

  if (!VAR_15)
    {
      return FUNC_9(VAR_1, ((void*)0),
                               FUNC_1("The node '%s' was not found."),
                               FUNC_7(VAR_8, VAR_9,
                                                      VAR_13));
    }


  FUNC_0(FUNC_3(VAR_3, VAR_4, VAR_8,
                                VAR_9, VAR_12, VAR_13));


  FUNC_0(FUNC_6(VAR_5, VAR_8,
                                      VAR_9, VAR_13));


  {
    VAR_14 = FUNC_5(VAR_7, VAR_8, VAR_9,
                                VAR_11, VAR_13);

    if (VAR_14)
      {
        if (VAR_14->apr_err != VAR_1)
          return FUNC_10(VAR_14);

        FUNC_8(VAR_14);
        *VAR_7 = VAR_0;
      }
  }


  FUNC_0(FUNC_4(VAR_6, VAR_8, VAR_9, VAR_13));

  return VAR_2;
}
