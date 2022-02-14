
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_34__ TYPE_3__ ;
typedef struct TYPE_33__ TYPE_2__ ;
typedef struct TYPE_32__ TYPE_1__ ;


struct TYPE_32__ {scalar_t__ nelts; } ;
typedef TYPE_1__ svn_rangelist_t ;
typedef int * svn_mergeinfo_t ;
typedef int * svn_mergeinfo_catalog_t ;
typedef int svn_merge_range_t ;
struct TYPE_33__ {scalar_t__ apr_err; } ;
typedef TYPE_2__ svn_error_t ;
struct TYPE_34__ {int wc_ctx; } ;
typedef TYPE_3__ svn_client_ctx_t ;
typedef scalar_t__ svn_boolean_t ;
typedef int apr_pool_t ;
typedef int apr_hash_t ;
typedef int apr_hash_index_t ;


 int VAR_0 ;
 int FUNC_0 (TYPE_2__*) ;
 int FUNC_1 (int ) ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 TYPE_2__* VAR_4 ;
 int VAR_5 ;
 TYPE_1__* FUNC_2 (int *,int ,int) ;
 scalar_t__ FUNC_3 (int *) ;
 int * FUNC_4 (int *,int *) ;
 int * FUNC_5 (int *) ;
 int * FUNC_6 (int *) ;
 int * FUNC_7 (int *) ;
 char* FUNC_8 (int *) ;
 TYPE_1__* FUNC_9 (int *) ;
 char const* FUNC_10 (int *,char const*) ;
 TYPE_2__* FUNC_11 (int **,int *,int ,char const*,int *,int *,int ,TYPE_3__*,int *,int *) ;
 TYPE_2__* FUNC_12 (int **,int ,char const*,int *,int *) ;
 TYPE_2__* FUNC_13 (char const*,int *,int ,TYPE_3__*,int *) ;
 char* FUNC_14 (char const*,char const*) ;
 int FUNC_15 (TYPE_2__*) ;
 TYPE_2__* FUNC_16 (TYPE_2__*) ;
 char* FUNC_17 (char const*,char const*,int *) ;
 void* FUNC_18 (int *,char const*) ;
 int FUNC_19 (int *,char const*,TYPE_1__*) ;
 int FUNC_20 (int *,int *) ;
 TYPE_1__* FUNC_21 (int *,int *) ;
 TYPE_2__* FUNC_22 (int *,int *,int *,int *) ;
 int VAR_6 ;
 int FUNC_23 (int *) ;
 int * FUNC_24 (int *) ;
 int FUNC_25 (int *) ;
 TYPE_1__* FUNC_26 (TYPE_1__*,int *) ;
 TYPE_2__* FUNC_27 (TYPE_1__*,TYPE_1__*,int *,int *) ;
 TYPE_2__* FUNC_28 (TYPE_1__**,TYPE_1__*,TYPE_1__*,int ,int *) ;
 TYPE_2__* FUNC_29 (TYPE_1__*,int *) ;

__attribute__((used)) static svn_error_t *
FUNC_30(svn_mergeinfo_catalog_t VAR_7,
                    const char *VAR_8,
                    const char *VAR_9,
                    apr_hash_t *VAR_10,
                    svn_boolean_t VAR_11,
                    svn_client_ctx_t *VAR_12,
                    apr_pool_t *VAR_13)
{
  apr_pool_t *VAR_14 = FUNC_24(VAR_13);
  apr_hash_index_t *VAR_15;



  for (VAR_15 = FUNC_4(VAR_13, VAR_10); VAR_15; VAR_15 = FUNC_6(VAR_15))
    {
      const char *VAR_16 = FUNC_8(VAR_15);
      svn_rangelist_t *VAR_17 = FUNC_9(VAR_15);
      svn_rangelist_t *VAR_18;
      svn_error_t *VAR_19;
      const char *VAR_20;
      const char *VAR_21;
      svn_mergeinfo_t VAR_22;

      FUNC_23(VAR_14);



      VAR_19 = FUNC_12(&VAR_22, VAR_12->wc_ctx,
                                        VAR_16, VAR_14, VAR_14);




      if (VAR_19)
        {
          if (VAR_19->apr_err == VAR_2
              || VAR_19->apr_err == VAR_3)
            {
              FUNC_15(VAR_19);
              continue;
            }
          else
            {
              return FUNC_16(VAR_19);
            }
        }




      if (VAR_22 == ((void*)0) && VAR_17->nelts == 0)
        {
          FUNC_0(FUNC_11(&VAR_22, ((void*)0),
                                               VAR_6,
                                               VAR_16, ((void*)0), ((void*)0),
                                               VAR_0, VAR_12, VAR_14, VAR_14));
        }

      if (VAR_22 == ((void*)0))
        VAR_22 = FUNC_5(VAR_14);

      VAR_20 = FUNC_14(VAR_8,
                                                             VAR_16);
      FUNC_1(VAR_20 != ((void*)0));
      VAR_21 = FUNC_17(VAR_9,
                                VAR_20,
                                VAR_14);
      VAR_18 = FUNC_18(VAR_22, VAR_21);
      if (VAR_18 == ((void*)0))
        VAR_18 = FUNC_2(VAR_14, 0, sizeof(svn_merge_range_t *));

      if (VAR_11)
        {
          VAR_17 = FUNC_26(VAR_17, VAR_14);
          FUNC_0(FUNC_29(VAR_17, VAR_14));
          FUNC_0(FUNC_28(&VAR_18, VAR_17, VAR_18,
                                       VAR_0,
                                       VAR_14));
        }
      else
        {
          FUNC_0(FUNC_27(VAR_18, VAR_17, VAR_14, VAR_14));
        }

      FUNC_19(VAR_22, VAR_21, VAR_18);

      if (VAR_11 && FUNC_3(VAR_22) == 0)
        VAR_22 = ((void*)0);

      FUNC_20(VAR_22, VAR_13);

      if (VAR_7)
        {
          svn_mergeinfo_t VAR_23 =
            FUNC_18(VAR_7, VAR_16);
          apr_pool_t *VAR_24 = FUNC_7(VAR_7);

          if (VAR_23)
            FUNC_0(FUNC_22(VAR_22, VAR_23,
                                         VAR_24, VAR_13));
          FUNC_19(VAR_7,
                        FUNC_10(VAR_24, VAR_16),
                        FUNC_21(VAR_22, VAR_24));
        }
      else
        {
          VAR_19 = FUNC_13(VAR_16, VAR_22,
                                                VAR_5, VAR_12, VAR_14);

          if (VAR_19 && VAR_19->apr_err == VAR_1)
            {
              FUNC_15(VAR_19);
            }
          else
            FUNC_0(VAR_19);
        }
    }

  FUNC_25(VAR_14);
  return VAR_4;
}
