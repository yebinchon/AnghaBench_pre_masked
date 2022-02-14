
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_2__ ;
typedef struct TYPE_11__ TYPE_1__ ;


typedef scalar_t__ svn_mergeinfo_t ;
typedef int svn_error_t ;
struct TYPE_11__ {struct TYPE_11__ const* remaining_ranges; } ;
typedef TYPE_1__ svn_client__merge_path_t ;
struct TYPE_12__ {int ctx; int ra_session2; int paths_with_new_mergeinfo; scalar_t__ dry_run; } ;
typedef TYPE_2__ merge_cmd_baton_t ;
typedef int apr_pool_t ;
typedef int apr_hash_index_t ;
typedef int apr_array_header_t ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (TYPE_1__ const*) ;
 int * VAR_1 ;
 int * FUNC_2 (int *,int ) ;
 int * FUNC_3 (int *) ;
 char* FUNC_4 (int *) ;
 TYPE_1__* FUNC_5 (int *,int ,char const*) ;
 TYPE_1__* FUNC_6 (int *,char const*) ;
 int FUNC_7 (int *,TYPE_1__*,int *) ;
 int FUNC_8 (scalar_t__*,int *,int ,char const*,int *,int *,int ,int ,int *,int *) ;
 int FUNC_9 (scalar_t__*,int *,int *,int ,int ,int ,char const*,int ,int *) ;
 TYPE_1__* FUNC_10 (char const*,int *) ;
 int FUNC_11 (char const*,scalar_t__,int ,int ,int *) ;
 int VAR_2 ;
 int FUNC_12 (scalar_t__,scalar_t__,int *,int *) ;
 int VAR_3 ;
 int FUNC_13 (int *) ;
 int * FUNC_14 (int *) ;
 int FUNC_15 (int *) ;
 TYPE_1__ const* FUNC_16 (TYPE_1__ const*,int *) ;

__attribute__((used)) static svn_error_t *
FUNC_17(merge_cmd_baton_t *VAR_4,
                                    apr_array_header_t *VAR_5,
                                    apr_pool_t *VAR_6)
{
  apr_pool_t *VAR_7;
  apr_hash_index_t *VAR_8;

  if (!VAR_4->paths_with_new_mergeinfo || VAR_4->dry_run)
    return VAR_1;


  VAR_7 = FUNC_14(VAR_6);
  for (VAR_8 = FUNC_2(VAR_6, VAR_4->paths_with_new_mergeinfo);
       VAR_8;
       VAR_8 = FUNC_3(VAR_8))
    {
      const char *VAR_9 = FUNC_4(VAR_8);
      svn_mergeinfo_t VAR_10;
      svn_mergeinfo_t VAR_11;
      svn_client__merge_path_t *VAR_12;

      FUNC_13(VAR_7);
      FUNC_0(FUNC_8(&VAR_11, ((void*)0),
                                           VAR_2,
                                           VAR_9,
                                           ((void*)0), ((void*)0), VAR_0,
                                           VAR_4->ctx,
                                           VAR_7, VAR_7));


      if (VAR_11)
        {


          FUNC_0(FUNC_9(
            &VAR_10,
            ((void*)0), ((void*)0),
            VAR_0,
            VAR_3,
            VAR_4->ra_session2,
            VAR_9,
            VAR_4->ctx,
            VAR_7));




          if (VAR_10)
            {
              FUNC_0(FUNC_12(VAR_11,
                                           VAR_10,
                                           VAR_7, VAR_7));
              FUNC_0(FUNC_11(
                                          VAR_9,
                                          VAR_11,
                                          VAR_0, VAR_4->ctx, VAR_7));
            }


          VAR_12 =
            FUNC_6(VAR_5,
                                     VAR_9);
          if (!VAR_12)
            {
              const svn_client__merge_path_t *VAR_13
                = FUNC_5(VAR_5,
                                        VAR_0, VAR_9);
              VAR_12
                = FUNC_10(VAR_9,
                                                VAR_6);
              FUNC_1(VAR_13);
              FUNC_1(VAR_13->remaining_ranges);


              VAR_12->remaining_ranges = FUNC_16(
                 VAR_13->remaining_ranges, VAR_6);
              FUNC_7(VAR_5, VAR_12, VAR_6);
            }
        }
    }
  FUNC_15(VAR_7);

  return VAR_1;
}
