
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_17__ TYPE_2__ ;
typedef struct TYPE_16__ TYPE_1__ ;


typedef int svn_wc_notify_func2_t ;
struct TYPE_16__ {int * db; } ;
typedef TYPE_1__ svn_wc_context_t ;
typedef int svn_wc__db_t ;
typedef int svn_wc__db_status_t ;
typedef int svn_skel_t ;
typedef scalar_t__ svn_node_kind_t ;
struct TYPE_17__ {scalar_t__ apr_err; } ;
typedef TYPE_2__ svn_error_t ;
typedef int svn_cancel_func_t ;
typedef scalar_t__ svn_boolean_t ;
typedef int apr_pool_t ;


 int VAR_0 ;
 int FUNC_0 (TYPE_2__*) ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 TYPE_2__* VAR_3 ;
 int FUNC_1 (char*) ;
 TYPE_2__* FUNC_2 (int **,int *,char const*,scalar_t__,scalar_t__,int *,int *) ;
 TYPE_2__* FUNC_3 (char const*,int ,int ,void*,int *) ;
 int FUNC_4 (char const*,int *) ;
 int FUNC_5 (char const*,int *) ;
 int FUNC_6 (TYPE_2__*) ;
 TYPE_2__* FUNC_7 (scalar_t__,int *,int ,int ) ;
 scalar_t__ VAR_4 ;
 TYPE_2__* FUNC_8 (scalar_t__*,int *,char const*,int *) ;
 TYPE_2__* FUNC_9 (int *,char const*,int *,int,int *,int *,int ,void*,int ,void*,int *) ;
 TYPE_2__* FUNC_10 (int*,scalar_t__*,int *,char const**,int *,int *,int *,int *,int *,int *,int *,int *,int *,int *,int *,int *,int *,int *,int *,int *,scalar_t__*,int *,int *,int *,int *,int *,int *,int *,char const*,int *,int *) ;

 int VAR_5 ;

 TYPE_2__* FUNC_11 (int *,char const*,int ,void*,int *) ;
 TYPE_2__* FUNC_12 (int *,int ,int *) ;

svn_error_t *
FUNC_13(svn_wc_context_t *VAR_6,
               const char *VAR_7,
               svn_boolean_t VAR_8,
               svn_boolean_t VAR_9,
               svn_cancel_func_t VAR_10,
               void *VAR_11,
               svn_wc_notify_func2_t VAR_12,
               void *VAR_13,
               apr_pool_t *VAR_14)
{
  apr_pool_t *VAR_15 = VAR_14;
  svn_wc__db_t *VAR_16 = VAR_6->db;
  svn_error_t *VAR_17;
  svn_wc__db_status_t VAR_18;
  svn_node_kind_t VAR_19;
  svn_boolean_t VAR_20;
  svn_skel_t *VAR_21 = ((void*)0);
  const char *VAR_22;

  VAR_17 = FUNC_10(&VAR_18, &VAR_19, ((void*)0), &VAR_22, ((void*)0), ((void*)0),
                             ((void*)0), ((void*)0), ((void*)0), ((void*)0), ((void*)0), ((void*)0), ((void*)0), ((void*)0),
                             ((void*)0), ((void*)0), ((void*)0), ((void*)0), ((void*)0), ((void*)0), &VAR_20,
                             ((void*)0), ((void*)0), ((void*)0), ((void*)0), ((void*)0), ((void*)0),
                             VAR_16, VAR_7, VAR_15, VAR_15);

  if (VAR_9 &&
      VAR_17 != ((void*)0) && VAR_17->apr_err == VAR_1)
    {
      FUNC_6(VAR_17);

      if (!VAR_8)
        FUNC_0(FUNC_3(VAR_7, VAR_0,
                                          VAR_10, VAR_11,
                                          VAR_15));
      return VAR_3;
    }
  else
    FUNC_0(VAR_17);

  switch (VAR_18)
    {

      case 129:
      case 128:
        return FUNC_7(VAR_1, ((void*)0),
                                 FUNC_1("'%s' cannot be deleted"),
                                 FUNC_5(VAR_7, VAR_15));


      default:
        break;
    }

  if (VAR_18 == VAR_5
      && VAR_19 == VAR_4)
    {
      svn_boolean_t VAR_23;
      FUNC_0(FUNC_8(&VAR_23, VAR_16, VAR_7, VAR_15));

      if (VAR_23)
        return FUNC_7(VAR_2, ((void*)0),
                                 FUNC_1("'%s' is the root of a working copy and "
                                   "cannot be deleted"),
                                 FUNC_5(VAR_7, VAR_15));
    }
  if (VAR_22 && !VAR_22[0])
    return FUNC_7(VAR_2, ((void*)0),
                             FUNC_1("'%s' represents the repository root "
                               "and cannot be deleted"),
                               FUNC_5(VAR_7, VAR_15));



  FUNC_0(FUNC_12(VAR_16, FUNC_4(VAR_7, VAR_15),
                              VAR_15));


      if (!VAR_8)
        {
          FUNC_0(FUNC_2(&VAR_21, VAR_16, VAR_7, VAR_19,
                                         VAR_20,
                                         VAR_14, VAR_14));
        }

  FUNC_0(FUNC_9(VAR_16, VAR_7,
                               ((void*)0) ,
                               !VAR_8 ,
                               ((void*)0), VAR_21,
                               VAR_10, VAR_11,
                               VAR_12, VAR_13,
                               VAR_15));

  if (VAR_21)
    FUNC_0(FUNC_11(VAR_16, VAR_7, VAR_10, VAR_11,
                           VAR_14));

  return VAR_3;
}
