
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_22__ TYPE_5__ ;
typedef struct TYPE_21__ TYPE_4__ ;
typedef struct TYPE_20__ TYPE_3__ ;
typedef struct TYPE_19__ TYPE_2__ ;
typedef struct TYPE_18__ TYPE_1__ ;


typedef scalar_t__ svn_revnum_t ;
typedef int svn_ra_session_t ;
struct TYPE_18__ {scalar_t__ number; } ;
struct TYPE_20__ {TYPE_1__ value; void* kind; } ;
typedef TYPE_3__ svn_opt_revision_t ;
typedef int * svn_mergeinfo_catalog_t ;
typedef int svn_error_t ;
typedef int svn_client_ctx_t ;
struct TYPE_21__ {scalar_t__ rev; int url; } ;
typedef TYPE_4__ svn_client__pathrev_t ;
struct TYPE_22__ {TYPE_2__* tip; } ;
typedef TYPE_5__ branch_history_t ;
typedef int apr_pool_t ;
struct TYPE_19__ {int url; scalar_t__ rev; } ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 scalar_t__ VAR_1 ;
 scalar_t__ FUNC_1 (scalar_t__) ;
 int * VAR_2 ;
 int VAR_3 ;
 int FUNC_2 (int *,TYPE_4__**,TYPE_5__*,int *,int *) ;
 int FUNC_3 (TYPE_5__**,TYPE_5__ const*,scalar_t__,scalar_t__,int *,int *) ;
 int VAR_4 ;
 int FUNC_4 (int **,int ,int ,TYPE_3__*,int ,TYPE_3__*,TYPE_3__*,TYPE_3__*,int ,scalar_t__*,int *,int *,int *,int *) ;
 void* VAR_5 ;
 int * FUNC_5 (int *) ;
 int FUNC_6 (int *) ;

__attribute__((used)) static svn_error_t *
FUNC_7(svn_client__pathrev_t **VAR_6,
                          svn_client__pathrev_t *VAR_7,
                          const branch_history_t *VAR_8,
                          svn_client__pathrev_t *VAR_9,
                          svn_client_ctx_t *VAR_10,
                          svn_ra_session_t *VAR_11,
                          apr_pool_t *VAR_12,
                          apr_pool_t *VAR_13)
{
  svn_opt_revision_t VAR_14, VAR_15, VAR_16,
    VAR_17;
  svn_revnum_t VAR_18 = VAR_1;
  svn_mergeinfo_catalog_t VAR_19 = ((void*)0);



  apr_pool_t *VAR_20 = FUNC_5(VAR_13);

  VAR_14.kind = VAR_5;
  VAR_14.value.number = VAR_8->tip->rev;
  VAR_15.kind = VAR_5;
  VAR_15.value.number = VAR_7->rev;
  VAR_16.kind = VAR_5;
  VAR_16.value.number = VAR_8->tip->rev;
  VAR_17.kind = VAR_5;
  VAR_17.value.number = VAR_9->rev;



  FUNC_0(FUNC_4(&VAR_19,
                                      VAR_3,
                                      VAR_9->url, &VAR_17,
                                      VAR_8->tip->url,
                                      &VAR_14,
                                      &VAR_16, &VAR_15,
                                      VAR_4,
                                      &VAR_18,
                                      VAR_10, VAR_11,
                                      VAR_20, VAR_20));

  if (!FUNC_1(VAR_18))
    {


      *VAR_6 = VAR_7;
    }
  else
    {




      branch_history_t *VAR_21;
      svn_revnum_t VAR_22;
      svn_revnum_t VAR_23 = VAR_1;
      VAR_16.value.number = VAR_18;
      FUNC_0(FUNC_4(&VAR_19,
                                          VAR_0,
                                          VAR_9->url, &VAR_17,
                                          VAR_8->tip->url,
                                          &VAR_14,
                                          &VAR_15, &VAR_16,
                                          VAR_4,
                                          &VAR_23,
                                          VAR_10, VAR_11,
                                          VAR_20, VAR_20));





      if (FUNC_1(VAR_23))
        VAR_22 = VAR_23 - 1;
      else
        VAR_22 = VAR_18;




      FUNC_0(FUNC_3(&VAR_21,
                                             VAR_8, VAR_7->rev,
                                             VAR_22,
                                             VAR_13, VAR_13));
      FUNC_0(FUNC_2(((void*)0), VAR_6, VAR_21,
                                           VAR_12, VAR_13));
    }

  FUNC_6(VAR_20);
  return VAR_2;
}
