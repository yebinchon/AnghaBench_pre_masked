
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_25__ TYPE_2__ ;
typedef struct TYPE_24__ TYPE_1__ ;


typedef scalar_t__ svn_revnum_t ;
struct TYPE_24__ {scalar_t__ nelts; } ;
typedef TYPE_1__ svn_rangelist_t ;
typedef int svn_ra_session_t ;
typedef int svn_merge_range_t ;
typedef int svn_error_t ;
typedef int svn_client_ctx_t ;
struct TYPE_25__ {TYPE_1__* remaining_ranges; int implicit_mergeinfo; } ;
typedef TYPE_2__ svn_client__merge_path_t ;
typedef int svn_boolean_t ;
typedef int apr_pool_t ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int * VAR_1 ;
 int VAR_2 ;
 void* FUNC_1 (int *,int ,int) ;
 int FUNC_2 (TYPE_2__*,TYPE_2__*,int ,scalar_t__,scalar_t__,int *,int *,int *,int *) ;
 int * VAR_3 ;
 TYPE_1__* FUNC_3 (int ,char const*) ;
 TYPE_1__* FUNC_4 (scalar_t__,scalar_t__,int ,int *) ;
 int FUNC_5 (TYPE_1__**,TYPE_1__**,TYPE_1__*,TYPE_1__*,int ,int *) ;
 void* FUNC_6 (TYPE_1__*,int *) ;
 int FUNC_7 (TYPE_1__**,TYPE_1__*,TYPE_1__*,int ,int *) ;
 int FUNC_8 (TYPE_1__*,TYPE_1__*,int *,int *) ;
 int FUNC_9 (TYPE_1__**,TYPE_1__*,TYPE_1__*,int ,int *) ;
 int FUNC_10 (TYPE_1__*,int *) ;

__attribute__((used)) static svn_error_t *
FUNC_11(svn_client__merge_path_t *VAR_4,
                        svn_client__merge_path_t *VAR_5,
                        const char *VAR_6,
                        svn_rangelist_t *VAR_7,
                        svn_revnum_t VAR_8,
                        svn_revnum_t VAR_9,
                        svn_boolean_t VAR_10,
                        svn_ra_session_t *VAR_11,
                        svn_client_ctx_t *VAR_12,
                        apr_pool_t *VAR_13,
                        apr_pool_t *VAR_14)
{
  svn_rangelist_t *VAR_15,
    *VAR_16, *VAR_17;
  VAR_15 = FUNC_4(VAR_8, VAR_9,
                                                  VAR_2, VAR_14);



  if (VAR_8 > VAR_9)
    {
      svn_rangelist_t *VAR_18, *VAR_19;



      FUNC_0(FUNC_10(VAR_15, VAR_14));



      if (VAR_7)
        {
          FUNC_0(FUNC_7(&VAR_17,
                                          VAR_7,
                                          VAR_15,
                                          VAR_0, VAR_14));
        }
      else
        {
          VAR_17 =
            FUNC_1(VAR_13, 0, sizeof(svn_merge_range_t *));
        }



      FUNC_0(FUNC_5(&VAR_19, &VAR_18,
                                 VAR_15, VAR_17,
                                 VAR_0, VAR_14));

      if (VAR_19->nelts == 0)
        {



          FUNC_0(FUNC_10(VAR_15, VAR_14));
          VAR_5->remaining_ranges = FUNC_6(VAR_15,
                                                      VAR_13);
        }
      else
        {
          svn_rangelist_t *VAR_20;

          FUNC_0(FUNC_2(VAR_4,
                                            VAR_5,
                                            VAR_10,
                                            VAR_8,
                                            VAR_9,
                                            VAR_11,
                                            VAR_12,
                                            VAR_13,
                                            VAR_14));

          VAR_16 = FUNC_3(VAR_5->implicit_mergeinfo,
                                                    VAR_6);

          if (VAR_16)
            FUNC_0(FUNC_7(&VAR_20,
                                            VAR_16,
                                            VAR_15,
                                            VAR_0, VAR_14));
          else
            VAR_20 = FUNC_1(VAR_14, 0,
                                                sizeof(svn_merge_range_t *));

          FUNC_0(FUNC_8(VAR_20,
                                       VAR_17, VAR_14,
                                       VAR_14));
          FUNC_0(FUNC_10(VAR_20, VAR_14));
          VAR_5->remaining_ranges = FUNC_6(VAR_20,
                                                      VAR_13);
        }
    }
  else
    {


      if (VAR_7)
        {


          FUNC_0(FUNC_9(&VAR_17,
                                       VAR_7,
                                       VAR_15, VAR_0,
                                       VAR_14));
        }
      else
        {
          VAR_17 = FUNC_6(VAR_15,
                                                 VAR_14);
        }

      if (VAR_17->nelts == 0)
        {
          VAR_5->remaining_ranges =
            FUNC_1(VAR_13, 0, sizeof(svn_merge_range_t *));
        }
      else
        {



          FUNC_0(FUNC_2(VAR_4,
                                            VAR_5,
                                            VAR_10,
                                            VAR_8,
                                            VAR_9,
                                            VAR_11,
                                            VAR_12,
                                            VAR_13,
                                            VAR_14));

          VAR_16 = FUNC_3(VAR_5->implicit_mergeinfo,
                                                    VAR_6);
          if (VAR_16)
            FUNC_0(FUNC_9(&(VAR_5->remaining_ranges),
                                         VAR_16,
                                         VAR_17,
                                         VAR_0, VAR_13));
          else
            VAR_5->remaining_ranges = FUNC_6(VAR_17,
                                                        VAR_13);
        }

    }

  return VAR_1;
}
