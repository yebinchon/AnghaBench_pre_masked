
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_2__ ;
typedef struct TYPE_11__ TYPE_1__ ;


struct TYPE_11__ {int db; } ;
typedef TYPE_1__ svn_wc_context_t ;
typedef scalar_t__ svn_node_kind_t ;
struct TYPE_12__ {scalar_t__ apr_err; int message; } ;
typedef TYPE_2__ svn_error_t ;
typedef int svn_boolean_t ;
typedef int apr_pool_t ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 TYPE_2__* VAR_3 ;
 int FUNC_1 (char const*) ;
 TYPE_2__* FUNC_2 (int ,TYPE_2__*,int ) ;
 TYPE_2__* FUNC_3 (TYPE_2__*) ;
 scalar_t__ VAR_4 ;
 TYPE_2__* FUNC_4 (int*,int*,scalar_t__*,int ,char const*,int *) ;

svn_error_t *
FUNC_5(svn_boolean_t *VAR_5,
                   svn_wc_context_t *VAR_6,
                   const char *VAR_7,
                   apr_pool_t *VAR_8)
{
  svn_boolean_t VAR_9;
  svn_boolean_t VAR_10;
  svn_node_kind_t VAR_11;
  svn_error_t *VAR_12;
  FUNC_0(FUNC_1(VAR_7));

  VAR_12 = FUNC_4(&VAR_9, &VAR_10, &VAR_11,
                               VAR_6->db, VAR_7, VAR_8);

  if (VAR_12)
    {
      if (VAR_12->apr_err != VAR_2 &&
          VAR_12->apr_err != VAR_1)
        return FUNC_3(VAR_12);

      return FUNC_2(VAR_0, VAR_12, VAR_12->message);
    }

  *VAR_5 = VAR_9 || (VAR_11 == VAR_4 && VAR_10);

  return VAR_3;
}
