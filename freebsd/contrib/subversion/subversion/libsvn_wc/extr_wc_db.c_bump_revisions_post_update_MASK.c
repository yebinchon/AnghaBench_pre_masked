
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_18__ TYPE_2__ ;
typedef struct TYPE_17__ TYPE_1__ ;


typedef int svn_wc_notify_func2_t ;
struct TYPE_17__ {int sdb; } ;
typedef TYPE_1__ svn_wc__db_wcroot_t ;
typedef int svn_wc__db_t ;
typedef int svn_wc__db_status_t ;
typedef int svn_revnum_t ;
typedef int svn_node_kind_t ;
struct TYPE_18__ {scalar_t__ apr_err; } ;
typedef TYPE_2__ svn_error_t ;
typedef int svn_depth_t ;
typedef int svn_boolean_t ;
typedef int apr_pool_t ;
typedef int apr_int64_t ;
typedef int apr_hash_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (TYPE_2__*) ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 TYPE_2__* VAR_4 ;
 int VAR_5 ;
 TYPE_2__* FUNC_1 (TYPE_1__*,char const*,int,int ,int ,char const*,int ,char const*,int ,int ,int *,int *,int ,int ,int *,int *) ;
 TYPE_2__* FUNC_2 (int *,char const*,char const*,int ,int *) ;
 int FUNC_3 (TYPE_2__*) ;
 TYPE_2__* FUNC_4 (int*,int *,int *,char const**,int *,int *,int *,int *,int *,int *,int *,int *,int *,int *,int *,TYPE_1__*,char const*,int *,int *) ;
 TYPE_2__* FUNC_5 (TYPE_1__*,char const*,int ,int *,int *) ;



 TYPE_2__* FUNC_6 (TYPE_1__*,int ,int ,int ,void*,int *) ;

__attribute__((used)) static svn_error_t *
FUNC_7(svn_wc__db_wcroot_t *VAR_6,
                           const char *VAR_7,
                           svn_wc__db_t *VAR_8,
                           svn_depth_t VAR_9,
                           const char *VAR_10,
                           const char *VAR_11,
                           const char *VAR_12,
                           svn_revnum_t VAR_13,
                           apr_hash_t *VAR_14,
                           apr_hash_t *VAR_15,
                           svn_boolean_t VAR_16,
                           svn_wc_notify_func2_t VAR_17,
                           void *VAR_18,
                           apr_pool_t *VAR_19)
{
  svn_wc__db_status_t VAR_20;
  svn_node_kind_t VAR_21;
  svn_error_t *VAR_22;
  apr_int64_t VAR_23 = VAR_1;
  svn_revnum_t VAR_24;
  const char *VAR_25;

  VAR_22 = FUNC_4(&VAR_20, &VAR_21, &VAR_24,
                                          &VAR_25, ((void*)0),
                                          ((void*)0), ((void*)0), ((void*)0), ((void*)0), ((void*)0), ((void*)0),
                                          ((void*)0), ((void*)0), ((void*)0), ((void*)0),
                                          VAR_6, VAR_7,
                                          VAR_19, VAR_19);
  if (VAR_22 && VAR_22->apr_err == VAR_2)
    {
      FUNC_3(VAR_22);
      return VAR_4;
    }
  else
    FUNC_0(VAR_22);

  switch (VAR_20)
    {
      case 130:
      case 128:
      case 129:
        return VAR_4;


      default:
        break;
    }

  if (VAR_11 != ((void*)0))
    FUNC_0(FUNC_2(&VAR_23, VAR_11,
                            VAR_12,
                            VAR_6->sdb, VAR_19));

  FUNC_0(FUNC_1(VAR_6, VAR_7,
                             VAR_20, VAR_21, VAR_24, VAR_25,
                             VAR_23,
                             VAR_10, VAR_13,
                             VAR_9, VAR_14,
                             VAR_15,
                             VAR_5 , VAR_0, VAR_8,
                             VAR_19));


  FUNC_0(FUNC_5(VAR_6, VAR_7, VAR_9, VAR_8,
                                     VAR_19));

  FUNC_0(FUNC_6(VAR_6, VAR_3,
                                             VAR_3, VAR_17,
                                             VAR_18, VAR_19));

  return VAR_4;
}
