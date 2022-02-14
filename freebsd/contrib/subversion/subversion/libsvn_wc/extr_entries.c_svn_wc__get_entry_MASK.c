
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_2__ ;
typedef struct TYPE_13__ TYPE_1__ ;


struct TYPE_13__ {scalar_t__ kind; } ;
typedef TYPE_1__ svn_wc_entry_t ;
typedef int svn_wc__db_t ;
typedef scalar_t__ svn_node_kind_t ;
struct TYPE_14__ {scalar_t__ apr_err; } ;
typedef TYPE_2__ svn_error_t ;
typedef scalar_t__ svn_boolean_t ;
typedef int apr_pool_t ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 TYPE_2__* VAR_3 ;
 int FUNC_2 (char*) ;
 int FUNC_3 (char const**,char const**,int *,char const*,scalar_t__,int *,int *) ;
 TYPE_2__* FUNC_4 (TYPE_1__ const**,TYPE_1__ const**,int *,char const*,char const*,int *,int *) ;
 int FUNC_5 (char const*,int *) ;
 int FUNC_6 (TYPE_2__*) ;
 TYPE_2__* FUNC_7 (scalar_t__,int *,int ,int ) ;
 TYPE_2__* FUNC_8 (TYPE_2__*) ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;

svn_error_t *
FUNC_9(const svn_wc_entry_t **VAR_7,
                  svn_wc__db_t *VAR_8,
                  const char *VAR_9,
                  svn_boolean_t VAR_10,
                  svn_node_kind_t VAR_11,
                  apr_pool_t *VAR_12,
                  apr_pool_t *VAR_13)
{
  const char *VAR_14;
  const char *VAR_15;

  FUNC_0(FUNC_3(&VAR_14, &VAR_15, VAR_8, VAR_9,
                                VAR_11, VAR_13, VAR_13));

    {
      const svn_wc_entry_t *VAR_16;
      svn_error_t *VAR_17;
      VAR_17 = FUNC_4(&VAR_16, VAR_7,
                            VAR_8, VAR_14, VAR_15,
                            VAR_12, VAR_13);
      if (VAR_17)
        {
          if (VAR_17->apr_err != VAR_1 || VAR_11 != VAR_6
              || *VAR_15 != '\0')
            return FUNC_8(VAR_17);
          FUNC_6(VAR_17);
          VAR_17 = FUNC_9(VAR_7, VAR_8, VAR_9, VAR_10,
                                  VAR_5, VAR_12, VAR_13);
          if (VAR_17 == VAR_3)
            return VAR_3;
          if (VAR_17->apr_err != VAR_0)
            return FUNC_8(VAR_17);
          FUNC_6(VAR_17);






          FUNC_1(*VAR_7 != ((void*)0) && (*VAR_7)->kind == VAR_4);
          return FUNC_7(VAR_2, ((void*)0),
                                 FUNC_2("Admin area of '%s' is missing"),
                                 FUNC_5(VAR_9,
                                                        VAR_13));
        }
    }

  if (*VAR_7 == ((void*)0))
    {
      if (VAR_10)
        return VAR_3;
      return FUNC_7(VAR_2, ((void*)0),
                               FUNC_2("'%s' is not under version control"),
                               FUNC_5(VAR_9,
                                                      VAR_13));
    }


  if ((VAR_11 == VAR_5 && (*VAR_7)->kind != VAR_5)
      || (VAR_11 == VAR_4 && (*VAR_7)->kind != VAR_4))
    return FUNC_7(VAR_0, ((void*)0),
                             FUNC_2("'%s' is not of the right kind"),
                             FUNC_5(VAR_9,
                                                    VAR_13));

  return VAR_3;
}
