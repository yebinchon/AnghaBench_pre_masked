
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int svn_wc_traversal_info_t ;
typedef int svn_wc_notify_func2_t ;
typedef int svn_wc_context_t ;
typedef int svn_wc_adm_access_t ;
typedef int svn_wc__db_t ;
typedef int svn_ra_reporter3_t ;
typedef int svn_error_t ;
typedef int svn_depth_t ;
typedef int svn_boolean_t ;
typedef int apr_pool_t ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int VAR_1 ;
 int FUNC_1 (int *,char const*,char const*,int ,int *,int ,int ,int *) ;
 int FUNC_2 (char const**,char const*,int *) ;
 int * FUNC_3 (int ) ;
 int * FUNC_4 (int *) ;
 int FUNC_5 (int **,int *,int *,int *) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *,char const*,int const*,void*,int ,int ,int ,int ,int ,int *,int *,int ,void*,int *) ;

svn_error_t *
FUNC_8(const char *VAR_2,
                        svn_wc_adm_access_t *VAR_3,
                        const svn_ra_reporter3_t *VAR_4,
                        void *VAR_5,
                        svn_boolean_t VAR_6,
                        svn_depth_t VAR_7,
                        svn_boolean_t VAR_8,
                        svn_boolean_t VAR_9,
                        svn_boolean_t VAR_10,
                        svn_wc_notify_func2_t VAR_11,
                        void *VAR_12,
                        svn_wc_traversal_info_t *VAR_13,
                        apr_pool_t *VAR_14)
{
  svn_wc_context_t *VAR_15;
  svn_wc__db_t *VAR_16 = FUNC_4(VAR_3);
  const char *VAR_17;

  FUNC_0(FUNC_5(&VAR_15, ((void*)0), VAR_16, VAR_14));
  FUNC_0(FUNC_2(&VAR_17, VAR_2, VAR_14));

  FUNC_0(FUNC_7(VAR_15,
                                  VAR_17,
                                  VAR_4,
                                  VAR_5,
                                  VAR_6,
                                  VAR_7,
                                  VAR_8,
                                  VAR_9,
                                  VAR_10,
                                  ((void*)0) ,
                                  ((void*)0) ,
                                  VAR_11,
                                  VAR_12,
                                  VAR_14));

  if (VAR_13)
    FUNC_0(FUNC_1(VAR_15, VAR_17, VAR_2, VAR_7,
                                  VAR_13, VAR_1, VAR_0, VAR_14));

  return FUNC_3(FUNC_6(VAR_15));
}
