
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_16__ TYPE_2__ ;
typedef struct TYPE_15__ TYPE_1__ ;


struct TYPE_15__ {int * db; } ;
typedef TYPE_1__ svn_wc_context_t ;
typedef int svn_wc__db_t ;
typedef scalar_t__ svn_node_kind_t ;
struct TYPE_16__ {scalar_t__ apr_err; } ;
typedef TYPE_2__ svn_error_t ;
typedef scalar_t__ svn_boolean_t ;
typedef int apr_pool_t ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (TYPE_2__*) ;
 int FUNC_1 (int ) ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 TYPE_2__* VAR_4 ;
 scalar_t__ FUNC_2 (TYPE_2__*) ;
 int VAR_5 ;
 int FUNC_3 (char*) ;
 char* FUNC_4 (int *,char const*) ;
 char* FUNC_5 (char const*,int *) ;
 int FUNC_6 (char const*,int *) ;
 int FUNC_7 (TYPE_2__*) ;
 TYPE_2__* FUNC_8 (int ,int *,int ,int ) ;
 TYPE_2__* FUNC_9 (TYPE_2__*) ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 scalar_t__ VAR_8 ;
 TYPE_2__* FUNC_10 (scalar_t__*,scalar_t__*,scalar_t__*,int *,char const*,int *) ;
 TYPE_2__* FUNC_11 (scalar_t__*,int *,char const*,int ,int ,scalar_t__,int *) ;
 TYPE_2__* FUNC_12 (int *,char const*,int,scalar_t__,int *) ;

svn_error_t *
FUNC_13(const char **VAR_9,
                           svn_wc_context_t *VAR_10,
                           const char *VAR_11,
                           svn_boolean_t VAR_12,
                           apr_pool_t *VAR_13,
                           apr_pool_t *VAR_14)
{
  svn_wc__db_t *VAR_15 = VAR_10->db;
  svn_boolean_t VAR_16;
  svn_boolean_t VAR_17;
  svn_node_kind_t VAR_18;
  svn_error_t *VAR_19;

  VAR_19 = FUNC_10(&VAR_16, &VAR_17, &VAR_18,
                               VAR_15, VAR_11, VAR_14);

  if (VAR_19)
    {
      if (VAR_19->apr_err != VAR_3)
        return FUNC_9(VAR_19);

      FUNC_7(VAR_19);

      VAR_18 = VAR_7;
      VAR_16 = VAR_0;
      VAR_17 = VAR_0;
    }

  if (!VAR_9 && VAR_18 != VAR_6)
    return FUNC_8(VAR_1, ((void*)0),
                             FUNC_3("Can't obtain lock on non-directory '%s'."),
                             FUNC_6(VAR_11,
                                                    VAR_14));

  if (VAR_12 && VAR_18 == VAR_6)
    {
      if (VAR_16)
        VAR_12 = VAR_0;
    }

  if (VAR_12)
    {
      const char *VAR_20;
      FUNC_1(VAR_9 != ((void*)0));

      VAR_20 = FUNC_5(VAR_11, VAR_14);

      if (VAR_18 == VAR_6)
        {
          if (! VAR_17)
            VAR_11 = VAR_20;
        }
      else if (VAR_18 != VAR_7 && VAR_18 != VAR_8)
        {

          VAR_11 = VAR_20;
        }
      else
        {

          svn_node_kind_t VAR_21;
          VAR_19 = FUNC_11(&VAR_21, VAR_15, VAR_20,
                                     VAR_5 ,
                                     VAR_5 ,
                                     VAR_0 ,
                                     VAR_14);
          if (VAR_19 && FUNC_2(VAR_19))
            {
              FUNC_7(VAR_19);
              VAR_21 = VAR_8;
            }
          else
            FUNC_0(VAR_19);

          if (VAR_21 != VAR_6)
            return FUNC_8(VAR_2, ((void*)0),
                                     FUNC_3("'%s' is not a working copy"),
                                     FUNC_6(VAR_11,
                                                            VAR_14));

          VAR_11 = VAR_20;
        }
    }
  else if (VAR_18 != VAR_6)
    {
      VAR_11 = FUNC_5(VAR_11, VAR_14);
    }

  if (VAR_9)
    *VAR_9 = FUNC_4(VAR_13, VAR_11);

  FUNC_0(FUNC_12(VAR_10->db, VAR_11,
                                   -1 ,
                                   VAR_0 ,
                                   VAR_14));

  return VAR_4;
}
