
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int wc_id; int sdb; } ;
typedef TYPE_1__ svn_wc__db_wcroot_t ;
typedef scalar_t__ svn_wc__db_status_t ;
typedef int svn_sqlite__stmt_t ;
typedef int svn_error_t ;
typedef scalar_t__ svn_boolean_t ;
typedef int apr_pool_t ;
typedef int apr_hash_t ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (scalar_t__) ;
 int VAR_1 ;
 int VAR_2 ;
 int * VAR_3 ;
 int FUNC_2 (char*) ;
 int * FUNC_3 (int *) ;
 int FUNC_4 (TYPE_1__*,char const*,int *) ;
 int VAR_4 ;
 int FUNC_5 (int *,int ) ;
 int * FUNC_6 (int ,int ,int ,int ) ;
 int FUNC_7 (int *,char*,int ,char const*) ;
 int * FUNC_8 (int **,int *,int ,int *,int *) ;
 scalar_t__ FUNC_9 (int *,int,int ) ;
 int FUNC_10 (int **,int ,int ) ;
 int FUNC_11 (int *) ;
 int FUNC_12 (scalar_t__*,int *) ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;

__attribute__((used)) static svn_error_t *
FUNC_13(apr_hash_t **VAR_8,
                       svn_wc__db_wcroot_t *VAR_9,
                       const char *VAR_10,
                       svn_boolean_t VAR_11,
                       apr_pool_t *VAR_12,
                       apr_pool_t *VAR_13)
{
  svn_sqlite__stmt_t *VAR_14;
  svn_boolean_t VAR_15;
  svn_wc__db_status_t VAR_16;

  FUNC_0(FUNC_10(&VAR_14, VAR_9->sdb, VAR_0));
  FUNC_0(FUNC_7(VAR_14, "is", VAR_9->wc_id, VAR_10));

  FUNC_0(FUNC_12(&VAR_15, VAR_14));

  if (!VAR_15)
    {
      return FUNC_6(VAR_1,
                               FUNC_11(VAR_14),
                               FUNC_2("The node '%s' was not found."),
                               FUNC_4(VAR_9,
                                                      VAR_10,
                                                      VAR_13));
    }



  VAR_16 = FUNC_9(VAR_14, 1, VAR_4);



  if (VAR_16 == VAR_5 && VAR_11)
    {
      FUNC_0(FUNC_12(&VAR_15, VAR_14));

      FUNC_1(VAR_15);

      VAR_16 = FUNC_9(VAR_14, 1, VAR_4);
    }



  if (VAR_16 == VAR_7
      || VAR_16 == VAR_6)
    {
      svn_error_t *VAR_17;

      VAR_17 = FUNC_8(VAR_8, VAR_14, 0, VAR_12,
                                          VAR_13);
      FUNC_0(FUNC_5(VAR_17, FUNC_11(VAR_14)));

      if (!*VAR_8)
        *VAR_8 = FUNC_3(VAR_12);

      return VAR_3;
    }

  return FUNC_6(VAR_2,
                           FUNC_11(VAR_14),
                           FUNC_2("The node '%s' has a status that"
                             " has no properties."),
                           FUNC_4(VAR_9,
                                                  VAR_10,
                                                  VAR_13));
}
