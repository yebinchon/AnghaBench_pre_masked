
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


struct TYPE_10__ {int db; } ;
typedef TYPE_1__ svn_wc_context_t ;
typedef scalar_t__ svn_node_kind_t ;
struct TYPE_11__ {scalar_t__ apr_err; } ;
typedef TYPE_2__ svn_error_t ;
typedef scalar_t__ svn_boolean_t ;
typedef int apr_pool_t ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int ) ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 TYPE_2__* VAR_3 ;
 char* FUNC_1 (int *,char const*) ;
 int FUNC_2 (char const**,char const*,int *) ;
 int FUNC_3 (char const**,char const**,char const*,int *) ;
 int FUNC_4 (TYPE_2__*) ;
 TYPE_2__* FUNC_5 (TYPE_2__*) ;
 scalar_t__ VAR_4 ;
 TYPE_2__* FUNC_6 (scalar_t__*,scalar_t__*,scalar_t__*,int ,char const*,int *) ;

svn_error_t *
FUNC_7(const char **VAR_5,
                          const char **VAR_6,
                          svn_wc_context_t *VAR_7,
                          const char *VAR_8,
                          apr_pool_t *VAR_9,
                          apr_pool_t *VAR_10)
{
  svn_boolean_t VAR_11, VAR_12;
  svn_node_kind_t VAR_13;
  const char *VAR_14;
  svn_error_t *VAR_15;

  FUNC_0(FUNC_2(&VAR_14, VAR_8, VAR_10));

  VAR_15 = FUNC_6(&VAR_11, &VAR_12, &VAR_13,
                               VAR_7->db, VAR_14,
                               VAR_10);

  if (VAR_15)
    {
      if (VAR_15->apr_err != VAR_2 &&
          VAR_15->apr_err != VAR_1)
        return FUNC_5(VAR_15);

      FUNC_4(VAR_15);
      VAR_11 = VAR_0;
      VAR_12 = VAR_0;
    }


  if (!(VAR_11 || VAR_12) || (VAR_13 != VAR_4))
    {
      FUNC_3(VAR_5, VAR_6, VAR_8, VAR_9);
    }
  else
    {
      *VAR_5 = FUNC_1(VAR_9, VAR_8);
      *VAR_6 = "";
    }

  return VAR_3;
}
