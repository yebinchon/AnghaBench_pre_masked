
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_26__ TYPE_5__ ;
typedef struct TYPE_25__ TYPE_3__ ;
typedef struct TYPE_24__ TYPE_2__ ;
typedef struct TYPE_23__ TYPE_1__ ;


typedef scalar_t__ svn_revnum_t ;
typedef int svn_ra_session_t ;
typedef void* svn_mergeinfo_t ;
typedef void* svn_mergeinfo_catalog_t ;
typedef int svn_error_t ;
struct TYPE_23__ {int wc_ctx; } ;
typedef TYPE_1__ svn_client_ctx_t ;
struct TYPE_24__ {scalar_t__ rev; int url; } ;
typedef TYPE_2__ svn_client__pathrev_t ;
struct TYPE_26__ {int rev; int url; int repos_uuid; int repos_root_url; } ;
struct TYPE_25__ {char const* abspath; TYPE_5__ loc; } ;
typedef TYPE_3__ merge_target_t ;
typedef int apr_pool_t ;
typedef int apr_hash_t ;
typedef int apr_hash_index_t ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int * VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (char*) ;
 int * FUNC_2 (int *,int *) ;
 void* FUNC_3 (int *) ;
 int * FUNC_4 (int *) ;
 char* FUNC_5 (int *) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (void**,scalar_t__*,scalar_t__,void*,int *,TYPE_2__ const*,TYPE_3__ const*,int *,int *,TYPE_1__*,int *,int *) ;
 int FUNC_8 (int *,int ,int *) ;
 int FUNC_9 (void*,int *) ;
 int FUNC_10 (void**,int *,TYPE_2__*,int ,scalar_t__,int *,TYPE_1__*,int *) ;
 int FUNC_11 (void**,int *,int ,scalar_t__,int ,int ,int ,int *,int *) ;
 int FUNC_12 (TYPE_2__**,TYPE_2__ const*,TYPE_5__*,int *,TYPE_1__*,int *,int *) ;
 TYPE_2__* FUNC_13 (int ,int ,int ,char const*,int *) ;
 TYPE_2__* FUNC_14 (TYPE_2__*,int *) ;
 int FUNC_15 (TYPE_2__**,int *,TYPE_5__*,scalar_t__,TYPE_1__*,int *,int *) ;
 int * FUNC_16 (int ,int *,int ,int ,scalar_t__,int ,int ) ;
 int FUNC_17 (int *,char const*) ;
 int FUNC_18 (int *,char const*,void*) ;
 void* FUNC_19 (void*,int *) ;
 int VAR_5 ;
 int FUNC_20 (int *) ;
 int * FUNC_21 (int *) ;
 int FUNC_22 (int *) ;
 int FUNC_23 (int *,char const**,int *,int *,int ,char const*,int *,int *) ;

__attribute__((used)) static svn_error_t *
FUNC_24(svn_client__pathrev_t **VAR_6,
                         svn_mergeinfo_catalog_t *VAR_7,
                         svn_mergeinfo_catalog_t *VAR_8,
                         const merge_target_t *VAR_9,
                         apr_hash_t *VAR_10,
                         const svn_client__pathrev_t *VAR_11,
                         svn_ra_session_t *VAR_12,
                         svn_ra_session_t *VAR_13,
                         svn_client_ctx_t *VAR_14,
                         apr_pool_t *VAR_15,
                         apr_pool_t *VAR_16)
{
  svn_mergeinfo_catalog_t VAR_17, VAR_18;
  apr_pool_t *VAR_19 = FUNC_21(VAR_16);
  apr_hash_index_t *VAR_20;

  apr_hash_t *VAR_21 = FUNC_3(VAR_16);
  svn_revnum_t VAR_22;
  svn_client__pathrev_t *VAR_23;

  FUNC_6(FUNC_8(VAR_12, VAR_11->url, VAR_16));
  FUNC_6(FUNC_8(VAR_13, VAR_9->loc.url, VAR_16));


  *VAR_6 = ((void*)0);





  if (!FUNC_17(VAR_10, VAR_9->abspath))
    FUNC_18(VAR_10, VAR_9->abspath,
                  FUNC_3(VAR_15));



  for (VAR_20 = FUNC_2(VAR_16, VAR_10);
       VAR_20;
       VAR_20 = FUNC_4(VAR_20))
    {
      const char *VAR_24 = FUNC_5(VAR_20);
      svn_client__pathrev_t *VAR_25;
      const char *VAR_26;
      svn_mergeinfo_t VAR_27;

      FUNC_20(VAR_19);



      FUNC_0(FUNC_23(((void*)0), &VAR_26, ((void*)0), ((void*)0),
                                          VAR_14->wc_ctx, VAR_24,
                                          VAR_16, VAR_19));
      VAR_25 = FUNC_13(
                       VAR_9->loc.repos_root_url, VAR_9->loc.repos_uuid,
                       VAR_9->loc.rev, VAR_26, VAR_19);
      FUNC_0(FUNC_10(&VAR_27,
                                                   ((void*)0) ,
                                                   VAR_25,
                                                   VAR_9->loc.rev,
                                                   VAR_2,
                                                   VAR_13,
                                                   VAR_14, VAR_16));

      FUNC_18(VAR_21, VAR_26,
                    VAR_27);
    }




  FUNC_0(FUNC_12(
              &VAR_23, VAR_11, &VAR_9->loc, VAR_13, VAR_14,
              VAR_19, VAR_19));
  if (! VAR_23)
    return FUNC_16(VAR_1, ((void*)0),
                             FUNC_1("'%s@%ld' must be ancestrally related to "
                               "'%s@%ld'"), VAR_11->url, VAR_11->rev,
                             VAR_9->loc.url, VAR_9->loc.rev);




  if (VAR_11->rev == VAR_23->rev)
    {
      FUNC_22(VAR_19);
      return VAR_3;
    }



  FUNC_0(FUNC_11(
            &VAR_17, VAR_12,
            VAR_11->url, VAR_11->rev,
            VAR_5, VAR_0 ,
            VAR_4 , VAR_19, VAR_19));

  if (!VAR_17)
    VAR_17 = FUNC_3(VAR_19);

  *VAR_7 = FUNC_19(VAR_17,
                                                        VAR_15);




  FUNC_0(FUNC_7(&VAR_18,
                                  &VAR_22,
                                  VAR_23->rev,
                                  VAR_17,
                                  VAR_21,
                                  VAR_11,
                                  VAR_9,
                                  VAR_12,
                                  VAR_13,
                                  VAR_14,
                                  VAR_19, VAR_19));


  FUNC_0(FUNC_9(VAR_18,
                                              VAR_19));
  *VAR_8 = FUNC_19(VAR_18,
                                                          VAR_15);

  if (VAR_22 == VAR_2)
    {

      *VAR_6 = FUNC_14(VAR_23, VAR_15);
    }
  else
    {



      FUNC_0(FUNC_15(VAR_6, VAR_13,
                                         &VAR_9->loc, VAR_22,
                                         VAR_14, VAR_15, VAR_19));
    }

  FUNC_22(VAR_19);
  return VAR_3;
}
