
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int svn_wc_context_t ;
typedef scalar_t__ svn_subst_eol_style_t ;
struct TYPE_3__ {int data; } ;
typedef TYPE_1__ svn_string_t ;
typedef int svn_stream_t ;
typedef int svn_error_t ;
typedef scalar_t__ svn_boolean_t ;
typedef int apr_pool_t ;
typedef int apr_hash_t ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int VAR_1 ;
 int * VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 char* VAR_6 ;
 int FUNC_1 (scalar_t__*,int *,int *,int *) ;
 int * FUNC_2 (int ,int *,int *) ;
 TYPE_1__* FUNC_3 (int *,int ) ;
 int FUNC_4 (scalar_t__*,int *,int *,int *) ;
 int FUNC_5 (int **,char const*,int *,int *) ;
 int FUNC_6 (int **,int ,char*,char*,char*,int ,char*,int *) ;
 scalar_t__ VAR_7 ;
 int FUNC_7 (scalar_t__*,char const**,int ) ;
 scalar_t__ VAR_8 ;
 scalar_t__ VAR_9 ;
 int FUNC_8 (int **,char const*,int *,int *) ;
 int * FUNC_9 (int *,char const*,int ,int *,int ,int *) ;
 int FUNC_10 (int **,int *,char const*,int *,int *) ;

__attribute__((used)) static svn_error_t *
FUNC_11(svn_boolean_t *VAR_10,
             const char *VAR_11,
             apr_hash_t *VAR_12,
             const char *VAR_13,
             svn_wc_context_t *VAR_14,
             apr_pool_t *VAR_15)
{
  apr_hash_t *VAR_16;

  FUNC_0(FUNC_10(&VAR_16, VAR_14, VAR_13,
                            VAR_15, VAR_15));


  FUNC_0(FUNC_1(VAR_10, VAR_12, VAR_16,
                            VAR_15));
  if (*VAR_10)
    {
      svn_stream_t *VAR_17;
      svn_stream_t *VAR_18;
      svn_string_t *VAR_19 = FUNC_3(VAR_16, VAR_5);
      svn_string_t *VAR_20 = FUNC_3(VAR_16, VAR_3);
      svn_string_t *VAR_21 = FUNC_3(VAR_16, VAR_4);


      if (VAR_19 != ((void*)0))
        FUNC_0(FUNC_8(&VAR_17, VAR_13,
                                           VAR_15, VAR_15));
      else
        FUNC_0(FUNC_5(&VAR_17, VAR_13,
                                         VAR_15, VAR_15));

      if (!VAR_19 && (VAR_20 || VAR_21))
        {
          apr_hash_t *VAR_22 = ((void*)0);
          const char *VAR_23 = ((void*)0);
          svn_subst_eol_style_t VAR_24;






          if (VAR_20)
            {
              FUNC_7(&VAR_24, &VAR_23, VAR_20->data);

              if (VAR_24 == VAR_8)
                VAR_23 = VAR_6;
              else if (VAR_24 != VAR_7
                       && VAR_24 != VAR_9)
                return FUNC_2(VAR_1, ((void*)0), ((void*)0));
            }

          if (VAR_21)
            FUNC_0(FUNC_6(&VAR_22, VAR_21->data, "", "",
                                              "", 0, "", VAR_15));

          VAR_17 = FUNC_9(
            VAR_17, VAR_23, VAR_0, VAR_22, VAR_0, VAR_15);
        }

      FUNC_0(FUNC_5(&VAR_18, VAR_11,
                                       VAR_15, VAR_15));

      FUNC_0(FUNC_4(VAR_10, VAR_17, VAR_18,
                                        VAR_15));

    }

  return VAR_2;
}
