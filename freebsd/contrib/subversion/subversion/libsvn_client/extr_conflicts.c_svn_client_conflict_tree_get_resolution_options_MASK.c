
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int svn_error_t ;
typedef int svn_client_ctx_t ;
typedef int svn_client_conflict_t ;
typedef int svn_client_conflict_option_t ;
typedef int apr_pool_t ;
typedef int apr_array_header_t ;


 int FUNC_0 (int ) ;
 int * VAR_0 ;
 int FUNC_1 (char*) ;
 int FUNC_2 (int *,int *,int ,int ,int ,int ) ;
 int * FUNC_3 (int *,int,int) ;
 int FUNC_4 (int *,int *) ;
 int FUNC_5 (int *,int *) ;
 int FUNC_6 (int *,int *,int *,int *) ;
 int FUNC_7 (int *,int *,int *,int *) ;
 int FUNC_8 (int *,int *,int *,int *) ;
 int FUNC_9 (int *,int *,int *,int *) ;
 int FUNC_10 (int *,int *,int *,int *) ;
 int FUNC_11 (int *,int *,int *,int *) ;
 int FUNC_12 (int *,int *,int *,int *) ;
 int FUNC_13 (int *,int *,int *,int *) ;
 int FUNC_14 (int *,int *,int *,int *) ;
 int FUNC_15 (int *,int *,int *,int *) ;
 int FUNC_16 (int *,int *,int *,int *) ;
 int FUNC_17 (int *,int *) ;
 int FUNC_18 (int *,int *) ;
 int VAR_1 ;
 int VAR_2 ;

svn_error_t *
FUNC_19(apr_array_header_t **VAR_3,
                                                svn_client_conflict_t *VAR_4,
                                                svn_client_ctx_t *VAR_5,
                                                apr_pool_t *VAR_6,
                                                apr_pool_t *VAR_7)
{
  FUNC_0(FUNC_4(VAR_4, VAR_7));

  *VAR_3 = FUNC_3(VAR_6, 2,
                            sizeof(svn_client_conflict_option_t *));


  FUNC_2(*VAR_3, VAR_4,
                        VAR_2,
                        FUNC_1("Postpone"),
                        FUNC_1("skip this conflict and leave it unresolved"),
                        VAR_1);


  FUNC_0(FUNC_5(VAR_4, *VAR_3));


  FUNC_0(FUNC_17(VAR_4, *VAR_3));
  FUNC_0(FUNC_18(VAR_4,
                                                            *VAR_3));
  FUNC_0(FUNC_6(VAR_4, VAR_5, *VAR_3,
                                               VAR_7));
  FUNC_0(FUNC_11(VAR_4, VAR_5,
                                                          *VAR_3,
                                                          VAR_7));
  FUNC_0(FUNC_10(VAR_4,
                                                                 VAR_5,
                                                                 *VAR_3,
                                                                 VAR_7));
  FUNC_0(FUNC_7(VAR_4, VAR_5,
                                                    *VAR_3,
                                                    VAR_7));
  FUNC_0(FUNC_8(VAR_4, VAR_5,
                                                      *VAR_3,
                                                      VAR_7));
  FUNC_0(FUNC_9(VAR_4,
                                                                VAR_5,
                                                                *VAR_3,
                                                                VAR_7));
  FUNC_0(FUNC_13(VAR_4, VAR_5, *VAR_3,
                                                  VAR_7));
  FUNC_0(FUNC_12(VAR_4, VAR_5, *VAR_3,
                                                  VAR_7));
  FUNC_0(FUNC_15(VAR_4, VAR_5, *VAR_3,
                                                    VAR_7));
  FUNC_0(FUNC_14(VAR_4, VAR_5, *VAR_3,
                                              VAR_7));
  FUNC_0(FUNC_16(VAR_4, VAR_5, *VAR_3,
                                                 VAR_7));

  return VAR_0;
}
