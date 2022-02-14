
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_3__ ;
typedef struct TYPE_12__ TYPE_1__ ;


typedef int svn_wc_operation_t ;
struct TYPE_12__ {int revision; void* prop_state; void* content_state; int kind; } ;
typedef TYPE_1__ svn_wc_notify_t ;
typedef int (* svn_wc_notify_func2_t ) (void*,TYPE_1__*,int *) ;
typedef int svn_wc_conflict_reason_t ;
typedef int svn_wc_conflict_action_t ;
struct TYPE_13__ {int abspath; } ;
typedef TYPE_3__ svn_wc__db_wcroot_t ;
typedef int svn_wc__db_t ;
typedef int svn_revnum_t ;
typedef int svn_error_t ;
typedef int svn_cancel_func_t ;
typedef int apr_pool_t ;


 int FUNC_0 (int ) ;
 int * VAR_0 ;
 int FUNC_1 (int ,TYPE_3__*) ;
 int FUNC_2 (TYPE_3__*) ;
 int FUNC_3 (int ,char const*,int *) ;
 char* FUNC_4 (int ,char const*) ;
 int VAR_1 ;
 int FUNC_5 (TYPE_3__*,int ,int ,int (*) (void*,TYPE_1__*,int *),void*,int *) ;
 int FUNC_6 (TYPE_3__**,char const**,int *,char const*,int *,int *) ;
 TYPE_1__* FUNC_7 (int ,int ,int *) ;
 void* VAR_2 ;
 int VAR_3 ;
 int FUNC_8 (int *,int *,int *,TYPE_3__*,char const*,char const*,int ,int ,int ,int ,void*,int *) ;

svn_error_t *
FUNC_9(svn_wc__db_t *VAR_4,
                                             const char *VAR_5,
                                             const char *VAR_6,
                                             svn_wc_operation_t VAR_7,
                                             svn_wc_conflict_action_t VAR_8,
                                             svn_wc_conflict_reason_t VAR_9,
                                             svn_cancel_func_t VAR_10,
                                             void *VAR_11,
                                             svn_wc_notify_func2_t VAR_12,
                                             void *VAR_13,
                                             apr_pool_t *VAR_14)
{
  svn_wc__db_wcroot_t *VAR_15;
  svn_revnum_t VAR_16, VAR_17;
  const char *VAR_18;
  const char *VAR_19;



  FUNC_0(FUNC_6(&VAR_15, &VAR_18,
                                                VAR_4, VAR_5,
                                                VAR_14, VAR_14));
  FUNC_2(VAR_15);

  VAR_19
    = FUNC_4(VAR_15->abspath, VAR_6);

  FUNC_1(
    FUNC_8(
      &VAR_16, &VAR_17,
      VAR_4, VAR_15, VAR_18, VAR_19,
      VAR_7, VAR_8, VAR_9,
      VAR_10, VAR_11,
      VAR_14),
    VAR_15);


  FUNC_0(FUNC_5(VAR_15, VAR_16, VAR_17,
                                             VAR_12, VAR_13,
                                             VAR_14));
  if (VAR_12)
    {
      svn_wc_notify_t *VAR_20;

      VAR_20 = FUNC_7(FUNC_3(VAR_15->abspath,
                                                    VAR_18,
                                                    VAR_14),
                                    VAR_3,
                                    VAR_14);
      VAR_20->kind = VAR_1;
      VAR_20->content_state = VAR_2;
      VAR_20->prop_state = VAR_2;
      VAR_20->revision = VAR_17;
      VAR_12(VAR_13, VAR_20, VAR_14);
    }


  return VAR_0;
}
