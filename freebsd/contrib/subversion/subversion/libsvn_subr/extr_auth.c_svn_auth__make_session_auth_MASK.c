
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int svn_error_t ;
typedef int svn_config_t ;
typedef int svn_boolean_t ;
struct svn_auth_baton_t {int pool; int slave_parameters; } ;
typedef struct svn_auth_baton_t svn_auth_baton_t ;
typedef int apr_pool_t ;
typedef int apr_hash_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 char const* VAR_10 ;
 int VAR_11 ;
 char const* VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 char const* VAR_18 ;
 int VAR_19 ;
 int FUNC_0 (int ) ;
 int * VAR_20 ;
 int FUNC_1 (int *) ;
 struct svn_auth_baton_t* FUNC_2 (int *,struct svn_auth_baton_t const*,int) ;
 char* FUNC_3 (int ,char const*) ;
 int * FUNC_4 (struct svn_auth_baton_t*,int ) ;
 int FUNC_5 (struct svn_auth_baton_t*,int ,char const*) ;
 char* FUNC_6 (int *,char const*,int ,int *) ;
 int FUNC_7 (int *,int *,char const*,int ,int ) ;
 int FUNC_8 (int *,char const**,char const*,int ,char const*) ;
 int * FUNC_9 (int *,int ) ;

svn_error_t *
FUNC_10(svn_auth_baton_t **VAR_21,
                            const svn_auth_baton_t *VAR_22,
                            apr_hash_t *VAR_23,
                            const char *VAR_24,
                            apr_pool_t *VAR_25,
                            apr_pool_t *VAR_26)
{
  svn_boolean_t VAR_27 = VAR_9;
  svn_boolean_t VAR_28 = VAR_8;
  const char *VAR_29
    = VAR_10;
  svn_boolean_t VAR_30 = VAR_11;
  const char *VAR_31
    = VAR_12;
  svn_config_t *VAR_32 = ((void*)0);
  const char *VAR_33 = ((void*)0);

  struct svn_auth_baton_t *VAR_34;

  VAR_34 = FUNC_2(VAR_25, VAR_22, sizeof(*VAR_34));

  VAR_34->slave_parameters = FUNC_1(VAR_25);
  if (FUNC_4(VAR_34, VAR_1) != ((void*)0))
    VAR_27 = VAR_0;

  if (FUNC_4(VAR_34, VAR_3) != ((void*)0))
    VAR_28 = VAR_0;
  if (VAR_23)
    {

      VAR_32 = FUNC_9(VAR_23, VAR_7);
      if (VAR_32)
        {


          FUNC_0(FUNC_7
            (VAR_32, &VAR_27, VAR_18,
             VAR_14,
             VAR_27));

          FUNC_0(FUNC_8
            (VAR_32, &VAR_29, VAR_18,
             VAR_15,
             VAR_10));

          FUNC_0(FUNC_7
            (VAR_32, &VAR_30, VAR_18,
             VAR_16,
             VAR_30));

          FUNC_0(FUNC_8
            (VAR_32, &VAR_31,
             VAR_18,
             VAR_17,
             VAR_12));

          FUNC_0(FUNC_7
            (VAR_32, &VAR_28, VAR_18,
              VAR_13,
              VAR_28));



          VAR_33 = FUNC_6(VAR_32, VAR_24,
                                               VAR_19,
                                               VAR_26);

          if (VAR_33)
            {


              FUNC_0(FUNC_7(VAR_32, &VAR_28,
                                          VAR_33,
                                          VAR_13,
                                          VAR_28));

              FUNC_0(FUNC_7(VAR_32, &VAR_27,
                                          VAR_33,
                                          VAR_14,
                                          VAR_27));

              FUNC_0(FUNC_8
                (VAR_32, &VAR_29, VAR_33,
                 VAR_15,
                 VAR_29));

              FUNC_0(FUNC_7
                (VAR_32, &VAR_30,
                 VAR_33, VAR_16,
                 VAR_30));

              FUNC_0(FUNC_8
                (VAR_32, &VAR_31, VAR_33,
                 VAR_17,
                 VAR_31));
            }
        }
    }


  if (! VAR_27)
    FUNC_5(VAR_34, VAR_1, "");

  FUNC_5(VAR_34,
                         VAR_5,
                         VAR_29);

  if (! VAR_30)
    FUNC_5(VAR_34,
                           VAR_2,
                           "");

  FUNC_5(VAR_34,
                         VAR_6,
                         VAR_31);

  if (! VAR_28)
    FUNC_5(VAR_34, VAR_3, "");

  if (VAR_33)
    FUNC_5(VAR_34,
                           VAR_4,
                           FUNC_3(VAR_34->pool, VAR_33));

  *VAR_21 = VAR_34;

  return VAR_20;
}
