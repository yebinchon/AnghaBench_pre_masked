
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_16__ TYPE_4__ ;
typedef struct TYPE_15__ TYPE_3__ ;
typedef struct TYPE_14__ TYPE_2__ ;
typedef struct TYPE_13__ TYPE_1__ ;


typedef void* svn_revnum_t ;
typedef int svn_ra_session_t ;
typedef int svn_proplist_receiver2_t ;
struct TYPE_13__ {void* number; } ;
struct TYPE_14__ {TYPE_1__ value; void* kind; } ;
typedef TYPE_2__ svn_opt_revision_t ;
typedef int svn_node_kind_t ;
typedef int svn_error_t ;
typedef int svn_depth_t ;
struct TYPE_15__ {int cancel_baton; int cancel_func; int wc_ctx; } ;
typedef TYPE_3__ svn_client_ctx_t ;
struct TYPE_16__ {int rev; int url; } ;
typedef TYPE_4__ svn_client__pathrev_t ;
typedef int svn_boolean_t ;
typedef int apr_pool_t ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (void*) ;
 int FUNC_1 (int ) ;
 int VAR_1 ;
 int * VAR_2 ;
 int FUNC_2 (int ,char*,int ,int ,int *,int ,int ,int ,int ,void*,int ,int ,int *) ;
 int FUNC_3 (void**,int *,int ,char const*,int *,TYPE_2__ const*,int *) ;
 int FUNC_4 (int **,TYPE_4__**,char const*,int *,TYPE_2__ const*,TYPE_2__ const*,TYPE_3__*,int *) ;
 int FUNC_5 (char const**,char const*,int *) ;
 int * FUNC_6 (int ,int *,int *) ;
 void* VAR_3 ;
 scalar_t__ FUNC_7 (char const*) ;
 char* FUNC_8 (char const*,char const*,int *) ;
 int FUNC_9 (int *,char*,int ,int *,int *) ;
 int FUNC_10 (int *,int *,char const**,char const**,int *,int *,int *,int ,char const*,int ,int *,int *) ;

__attribute__((used)) static svn_error_t *
FUNC_11(const char *VAR_4,
                 const svn_opt_revision_t *VAR_5,
                 const svn_opt_revision_t *VAR_6,
                 svn_depth_t VAR_7,
                 svn_boolean_t VAR_8,
                 svn_boolean_t VAR_9,
                 svn_proplist_receiver2_t VAR_10,
                 void *VAR_11,
                 svn_client_ctx_t *VAR_12,
                 apr_pool_t *VAR_13)
{
  svn_ra_session_t *VAR_14;
  svn_node_kind_t VAR_15;
  svn_opt_revision_t VAR_16;
  svn_opt_revision_t VAR_17;
  svn_client__pathrev_t *VAR_18;




  if (FUNC_0(VAR_5->kind)
      || FUNC_0(VAR_6->kind))
    {
      const char *VAR_19;
      const char *VAR_20;
      const char *VAR_21;
      svn_boolean_t VAR_22;



      if (FUNC_7(VAR_4))
        return FUNC_6(VAR_1,
                                ((void*)0), ((void*)0));

      FUNC_1(FUNC_5(&VAR_21, VAR_4,
                                      VAR_13));

      if (FUNC_0(VAR_5->kind))
        {
          FUNC_1(FUNC_10(&VAR_22,
                                          ((void*)0),
                                          &VAR_19,
                                          &VAR_20,
                                          ((void*)0), ((void*)0), ((void*)0),
                                          VAR_12->wc_ctx,
                                          VAR_21,
                                          VAR_0,
                                          VAR_13,
                                          VAR_13));
          if (VAR_19)
            {
              VAR_4 =
                FUNC_8(VAR_20,
                                            VAR_19,
                                            VAR_13);
              if (FUNC_0(VAR_5->kind))
                {
                  svn_revnum_t VAR_23;

                  FUNC_1(FUNC_3(&VAR_23,
                                                          ((void*)0), VAR_12->wc_ctx,
                                                          VAR_21, ((void*)0),
                                                          VAR_5,
                                                          VAR_13));
                  VAR_17.kind = VAR_3;
                  VAR_17.value.number = VAR_23;
                  VAR_5 = &VAR_17;
                }

              if (FUNC_0(VAR_6->kind))
                {
                  svn_revnum_t VAR_24;

                  FUNC_1(FUNC_3(
                    &VAR_24,
                    ((void*)0), VAR_12->wc_ctx,
                    VAR_21, ((void*)0),
                    VAR_6,
                    VAR_13));
                  VAR_16.kind = VAR_3;
                  VAR_16.value.number = VAR_24;
                  VAR_6 = &VAR_16;
                }
            }
          else
            {



                  if (!VAR_8)
                    return VAR_2;
            }
        }
    }


  FUNC_1(FUNC_4(&VAR_14, &VAR_18,
                                            VAR_4, ((void*)0),
                                            VAR_5,
                                            VAR_6, VAR_12,
                                            VAR_13));

  FUNC_1(FUNC_9(VAR_14, "", VAR_18->rev, &VAR_15,
                            VAR_13));

  FUNC_1(FUNC_2(VAR_18->url, "", VAR_15, VAR_18->rev, VAR_14,
                          VAR_8,
                          VAR_9,
                          VAR_7, VAR_10, VAR_11,
                          VAR_12->cancel_func, VAR_12->cancel_baton,
                          VAR_13));
  return VAR_2;
}
