
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_20__ TYPE_3__ ;
typedef struct TYPE_19__ TYPE_2__ ;
typedef struct TYPE_18__ TYPE_1__ ;


typedef int svn_revnum_t ;
typedef int svn_ra_session_t ;
typedef scalar_t__ svn_node_kind_t ;
typedef int * svn_mergeinfo_t ;
typedef int * svn_mergeinfo_catalog_t ;
struct TYPE_18__ {scalar_t__ apr_err; } ;
typedef TYPE_1__ svn_error_t ;
typedef int svn_client_ctx_t ;
struct TYPE_19__ {int rev; int url; } ;
typedef TYPE_2__ svn_client__pathrev_t ;
struct TYPE_20__ {TYPE_2__ const loc; } ;
typedef TYPE_3__ merge_target_t ;
typedef int apr_pool_t ;
typedef int apr_hash_t ;
typedef int apr_hash_index_t ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_1 (int ) ;
 TYPE_1__* VAR_4 ;
 int VAR_5 ;
 scalar_t__ FUNC_2 (int *) ;
 int * FUNC_3 (int *,int *) ;
 void* FUNC_4 (int *) ;
 int * FUNC_5 (int *) ;
 char* FUNC_6 (int *) ;
 int * FUNC_7 (int *) ;
 char const* FUNC_8 (int *,char const*) ;
 int FUNC_9 (int ) ;
 int FUNC_10 (int **,int *,int *,TYPE_2__*,int *,int *,int *,int *) ;
 int FUNC_11 (int *,int *,int *,int *) ;
 int FUNC_12 (int *,int ,int *) ;
 TYPE_1__* FUNC_13 (int **,int *,TYPE_2__*,int ,int ,int *,int *,int *) ;
 int FUNC_14 (int **,int *,int ,int ,int ,int ,int *) ;
 int FUNC_15 (TYPE_2__**,int *,int ,char const*,int *) ;
 TYPE_2__* FUNC_16 (TYPE_2__ const*,char const*,int *) ;
 char* FUNC_17 (TYPE_2__ const*,int *) ;
 int FUNC_18 (TYPE_1__*) ;
 TYPE_1__* FUNC_19 (TYPE_1__*) ;
 int * FUNC_20 (int *,char const*) ;
 int FUNC_21 (int *,char const*,int *) ;
 int FUNC_22 (int **,int *,int ,int ,int ,int *,int *) ;
 int FUNC_23 (int **,int *,int ,int ,int ,int *,int *) ;
 int * FUNC_24 (int *,int *) ;
 int VAR_6 ;
 scalar_t__ VAR_7 ;
 char* FUNC_25 (int ,char const*,int *) ;
 int FUNC_26 (int *) ;
 int * FUNC_27 (int *) ;
 int FUNC_28 (int *) ;
 int FUNC_29 (int *,char const*,int ,scalar_t__*,int *) ;
 char* FUNC_30 (char const*,char const*,int *) ;
 char* FUNC_31 (char const*,char const*) ;

__attribute__((used)) static svn_error_t *
FUNC_32(svn_mergeinfo_catalog_t *VAR_8,
                        svn_revnum_t *VAR_9,
                        svn_revnum_t VAR_10,
                        svn_mergeinfo_catalog_t VAR_11,
                        apr_hash_t *VAR_12,
                        const svn_client__pathrev_t *VAR_13,
                        const merge_target_t *VAR_14,
                        svn_ra_session_t *VAR_15,
                        svn_ra_session_t *VAR_16,
                        svn_client_ctx_t *VAR_17,
                        apr_pool_t *VAR_18,
                        apr_pool_t *VAR_19)
{
  const char *VAR_20
    = FUNC_17(VAR_13, VAR_19);
  const char *VAR_21
    = FUNC_17(&VAR_14->loc, VAR_19);
  apr_hash_index_t *VAR_22;
  svn_mergeinfo_catalog_t VAR_23 = FUNC_4(VAR_18);
  apr_pool_t *VAR_24 = FUNC_27(VAR_19);

  FUNC_9(FUNC_12(VAR_15, VAR_13->url, VAR_19));
  FUNC_9(FUNC_12(VAR_16, VAR_14->loc.url, VAR_19));

  *VAR_9 = VAR_3;



  for (VAR_22 = FUNC_3(VAR_19, VAR_12);
       VAR_22;
       VAR_22 = FUNC_5(VAR_22))
    {
      const char *VAR_25 = FUNC_6(VAR_22);
      svn_mergeinfo_t VAR_26 = FUNC_7(VAR_22);
      const char *VAR_27
        = FUNC_31(VAR_21, VAR_25);
      const char *VAR_28;
      svn_client__pathrev_t *VAR_29;
      svn_mergeinfo_t VAR_30, VAR_31;

      FUNC_26(VAR_24);

      VAR_28 = FUNC_30(VAR_20,
                                     VAR_27, VAR_24);
      VAR_29 = FUNC_16(
                         VAR_13, VAR_27, VAR_24);







      FUNC_0(FUNC_23(
        &VAR_26, VAR_26,
        VAR_13->rev, VAR_10, VAR_5, VAR_24, VAR_24));







      VAR_30 = FUNC_20(VAR_11, VAR_28);
      if (VAR_30)
        {
          FUNC_21(VAR_11, VAR_28, ((void*)0));

          FUNC_0(FUNC_11(VAR_9,
                                           VAR_26,
                                           VAR_30,
                                           VAR_24));
        }
      else
        {



          svn_node_kind_t VAR_32;

          FUNC_0(FUNC_29(VAR_15,
                                    VAR_27,
                                    VAR_13->rev, &VAR_32, VAR_24));
          if (VAR_32 == VAR_7)
              continue;



          FUNC_0(FUNC_14(
                    &VAR_30, VAR_15,
                    VAR_29->url, VAR_29->rev,
                    VAR_6, VAR_0 ,
                    VAR_24));
          if (!VAR_30)
            VAR_30 = FUNC_4(VAR_24);
        }




      FUNC_0(FUNC_10(
                &VAR_31, VAR_26,
                VAR_30, VAR_29,
                VAR_15, VAR_17, VAR_19, VAR_24));
      FUNC_21(VAR_23, FUNC_8(VAR_19, VAR_28),
                    VAR_31);
    }






  for (VAR_22 = FUNC_3(VAR_19, VAR_11);
       VAR_22;
       VAR_22 = FUNC_5(VAR_22))
    {
      const char *VAR_33 = FUNC_6(VAR_22);
      const char *VAR_34 =
        FUNC_31(VAR_20, VAR_33);
      const char *VAR_35;
      svn_mergeinfo_t VAR_36 = FUNC_7(VAR_22);
      svn_mergeinfo_t VAR_37;
      svn_client__pathrev_t *VAR_38;
      svn_mergeinfo_t VAR_39;
      svn_error_t *VAR_40;

      FUNC_26(VAR_24);

      VAR_35 = FUNC_25(VAR_13->url,
                                               VAR_34, VAR_24);
      VAR_38 = FUNC_16(
                         &VAR_14->loc, VAR_34, VAR_24);
      VAR_40 = FUNC_13(&VAR_39,
                                                 ((void*)0) ,
                                                 VAR_38,
                                                 VAR_14->loc.rev,
                                                 VAR_3,
                                                 VAR_16,
                                                 VAR_17, VAR_24);
      if (VAR_40)
        {
          if (VAR_40->apr_err == VAR_1
              || VAR_40->apr_err == VAR_2)
            {


              FUNC_18(VAR_40);
              VAR_40 = ((void*)0);
            }
          else
            {
              return FUNC_19(VAR_40);
            }
        }
      else
        {
          svn_client__pathrev_t *VAR_41;

          FUNC_0(FUNC_11(VAR_9,
                                           VAR_39,
                                           VAR_36,
                                           VAR_24));





          FUNC_0(FUNC_15(
                    &VAR_41, VAR_15, VAR_14->loc.rev, VAR_35,
                    VAR_24));
          FUNC_0(FUNC_10(
                    &VAR_37, VAR_39,
                    VAR_36, VAR_41,
                    VAR_15, VAR_17, VAR_19, VAR_24));
          if (FUNC_2(VAR_37))
            FUNC_21(VAR_23,
                          FUNC_8(VAR_19, VAR_33),
                          VAR_37);
        }
    }



  if (FUNC_1(*VAR_9))
    FUNC_0(FUNC_22(&VAR_23,
                                                    VAR_23,
                                                    *VAR_9,
                                                    0,
                                                    VAR_5,
                                                    VAR_19,
                                                    VAR_19));


  *VAR_8 = FUNC_24(VAR_23,
                                                          VAR_18);
  FUNC_28(VAR_24);
  return VAR_4;
}
