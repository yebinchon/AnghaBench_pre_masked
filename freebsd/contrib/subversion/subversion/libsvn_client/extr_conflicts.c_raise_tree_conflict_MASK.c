
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_8__ {int kind; } ;
typedef TYPE_1__ svn_wc_notify_t ;
typedef int (* svn_wc_notify_func2_t ) (void*,TYPE_1__*,int *) ;
typedef int svn_wc_context_t ;
typedef int svn_wc_conflict_version_t ;
typedef int svn_wc_conflict_reason_t ;
struct TYPE_9__ {int reason; int action; } ;
typedef TYPE_3__ svn_wc_conflict_description2_t ;
typedef int svn_wc_conflict_action_t ;
typedef int svn_revnum_t ;
typedef int svn_node_kind_t ;
typedef int svn_error_t ;
typedef int apr_pool_t ;


 int FUNC_0 (int ) ;
 int * VAR_0 ;
 int FUNC_1 (int *,TYPE_3__*,int *) ;
 TYPE_3__* FUNC_2 (char const*,int ,int ,int const*,int const*,int *) ;
 int * FUNC_3 (char const*,char const*,char const*,int ,int ,int *) ;
 TYPE_1__* FUNC_4 (char const*,int ,int *) ;
 int VAR_1 ;
 int VAR_2 ;

__attribute__((used)) static svn_error_t *
FUNC_5(const char *VAR_3,
                    svn_wc_conflict_action_t VAR_4,
                    svn_wc_conflict_reason_t VAR_5,
                    svn_node_kind_t VAR_6,
                    svn_node_kind_t VAR_7,
                    svn_node_kind_t VAR_8,
                    const char *VAR_9,
                    const char *VAR_10,
                    const char *VAR_11,
                    svn_revnum_t VAR_12,
                    svn_revnum_t VAR_13,
                    svn_wc_context_t *VAR_14,
                    svn_wc_notify_func2_t VAR_15,
                    void *VAR_16,
                    apr_pool_t *VAR_17)
{
  svn_wc_conflict_description2_t *VAR_18;
  const svn_wc_conflict_version_t *VAR_19;
  const svn_wc_conflict_version_t *VAR_20;

  VAR_19 = FUNC_3(VAR_9,
                                                 VAR_10,
                                                 VAR_11,
                                                 VAR_12,
                                                 VAR_7,
                                                 VAR_17);
  VAR_20 = FUNC_3(VAR_9,
                                                  VAR_10,
                                                  VAR_11,
                                                  VAR_13,
                                                  VAR_8,
                                                  VAR_17);
  VAR_18 = FUNC_2(VAR_3,
                                                      VAR_6,
                                                      VAR_2,
                                                      VAR_19,
                                                      VAR_20,
                                                      VAR_17);
  VAR_18->action = VAR_4;
  VAR_18->reason = VAR_5;

  FUNC_0(FUNC_1(VAR_14, VAR_18, VAR_17));

  if (VAR_15)
    {
      svn_wc_notify_t *VAR_21;

      VAR_21 = FUNC_4(VAR_3, VAR_1,
                                    VAR_17);
      VAR_21->kind = VAR_6;
      VAR_15(VAR_16, VAR_21, VAR_17);
    }

  return VAR_0;
}
