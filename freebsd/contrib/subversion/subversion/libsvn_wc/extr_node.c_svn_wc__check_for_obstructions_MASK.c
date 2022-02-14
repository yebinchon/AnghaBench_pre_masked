
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_2__ ;
typedef struct TYPE_12__ TYPE_1__ ;


typedef int svn_wc_notify_state_t ;
struct TYPE_12__ {int db; } ;
typedef TYPE_1__ svn_wc_context_t ;
typedef int svn_wc__db_status_t ;
typedef scalar_t__ svn_node_kind_t ;
struct TYPE_13__ {scalar_t__ apr_err; } ;
typedef TYPE_2__ svn_error_t ;
typedef int svn_depth_t ;
typedef scalar_t__ svn_boolean_t ;
typedef int apr_pool_t ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (TYPE_2__*) ;
 int FUNC_1 () ;
 scalar_t__ VAR_1 ;
 TYPE_2__* VAR_2 ;
 scalar_t__ VAR_3 ;
 TYPE_2__* FUNC_2 (scalar_t__*,scalar_t__,int,scalar_t__) ;
 int VAR_4 ;
 char const* FUNC_3 (char const*,int *) ;
 int FUNC_4 (TYPE_2__*) ;
 TYPE_2__* FUNC_5 (char const*,scalar_t__*,int *) ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 TYPE_2__* FUNC_6 (scalar_t__*,int ,char const*,int *) ;
 TYPE_2__* FUNC_7 (int*,scalar_t__*,int *,int *,int *,int *,int *,int *,int *,int *,int *,int *,int *,int *,int *,int *,int *,int *,int *,int *,int *,int *,int *,int *,int *,int *,int *,int ,char const*,int *,int *) ;







 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;

svn_error_t *
FUNC_8(svn_wc_notify_state_t *VAR_10,
                               svn_node_kind_t *VAR_11,
                               svn_boolean_t *VAR_12,
                               svn_boolean_t *VAR_13,
                               svn_depth_t *VAR_14,
                               svn_wc_context_t *VAR_15,
                               const char *VAR_16,
                               svn_boolean_t VAR_17,
                               apr_pool_t *VAR_18)
{
  svn_wc__db_status_t VAR_19;
  svn_node_kind_t VAR_20;
  svn_node_kind_t VAR_21;
  svn_error_t *VAR_22;

  *VAR_10 = VAR_7;
  if (VAR_11)
    *VAR_11 = VAR_6;
  if (VAR_12)
    *VAR_12 = VAR_0;
  if (VAR_13)
    *VAR_13 = VAR_0;
  if (VAR_14)
    *VAR_14 = VAR_4;

  FUNC_0(FUNC_5(VAR_16, &VAR_21, VAR_18));

  VAR_22 = FUNC_7(&VAR_19, &VAR_20, ((void*)0), ((void*)0), ((void*)0), ((void*)0), ((void*)0),
                             ((void*)0), ((void*)0), ((void*)0), ((void*)0), ((void*)0), ((void*)0), ((void*)0), ((void*)0),
                             ((void*)0), ((void*)0), ((void*)0), ((void*)0), ((void*)0), ((void*)0), ((void*)0),
                             ((void*)0), ((void*)0), ((void*)0), ((void*)0), ((void*)0),
                             VAR_15->db, VAR_16,
                             VAR_18, VAR_18);

  if (VAR_22 && VAR_22->apr_err == VAR_1)
    {
      FUNC_4(VAR_22);

      if (VAR_21 != VAR_6)
        {

          *VAR_10 = VAR_9;
          return VAR_2;
        }

      VAR_22 = FUNC_7(&VAR_19, &VAR_20, ((void*)0), ((void*)0), ((void*)0), ((void*)0),
                                 ((void*)0), ((void*)0), ((void*)0), VAR_14, ((void*)0), ((void*)0),
                                 ((void*)0), ((void*)0), ((void*)0), ((void*)0), ((void*)0), ((void*)0), ((void*)0),
                                 ((void*)0), ((void*)0), ((void*)0), ((void*)0), ((void*)0), ((void*)0), ((void*)0),
                                 ((void*)0),
                                 VAR_15->db, FUNC_3(VAR_16,
                                                                VAR_18),
                                 VAR_18, VAR_18);

      if (VAR_22 && VAR_22->apr_err == VAR_1)
        {
          FUNC_4(VAR_22);

          *VAR_10 = VAR_9;
          return VAR_2;
        }
      else
        FUNC_0(VAR_22);

      if (VAR_20 != VAR_5
          || (VAR_19 != 130
              && VAR_19 != 134))
        {

          *VAR_10 = VAR_9;
        }

      return VAR_2;
    }
  else
    FUNC_0(VAR_22);


  if (!VAR_17
      && VAR_20 == VAR_5
      && VAR_19 == 130)
    {
      svn_boolean_t VAR_23;
      FUNC_0(FUNC_6(&VAR_23, VAR_15->db, VAR_16,
                                   VAR_18));

      if (VAR_23)
        {

          *VAR_10 = VAR_9;
          return VAR_2;
        }
    }

  if (VAR_11)
    FUNC_0(FUNC_2(VAR_11, VAR_20, VAR_19, VAR_0));

  switch (VAR_19)
    {
      case 133:
        if (VAR_12)
          *VAR_12 = VAR_3;

      case 129:
        if (VAR_21 != VAR_6)
          *VAR_10 = VAR_9;
        break;

      case 132:
      case 128:
        if (VAR_13)
          *VAR_13 = VAR_3;

      case 131:
        *VAR_10 = VAR_8;
        break;

      case 134:
      case 130:
        if (VAR_21 == VAR_6)
          *VAR_10 = VAR_8;
        else
          {
            svn_node_kind_t VAR_24;

            FUNC_0(FUNC_2(&VAR_24, VAR_20,
                                                 VAR_19, VAR_0));

            if (VAR_21 != VAR_24)
              *VAR_10 = VAR_9;
          }
        break;
      default:
        FUNC_1();
    }

  return VAR_2;
}
