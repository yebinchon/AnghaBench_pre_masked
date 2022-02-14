
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int svn_ra_session_t ;
typedef int svn_error_t ;
typedef int svn_element__tree_t ;
typedef int svn_client_ctx_t ;
typedef int svn_client__pathrev_t ;
typedef scalar_t__ svn_boolean_t ;
typedef int merge_target_t ;
typedef int element_matching_info_t ;
typedef int apr_pool_t ;
typedef int apr_array_header_t ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int * VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_1 (char*) ;
 int FUNC_2 (int *,int *,int *,int *) ;
 int FUNC_3 (int **,int **,int **,int const*,int const*,int *,int *,int *,int *,int *,int *) ;
 int FUNC_4 (int *,int *) ;
 int FUNC_5 (int **,void**,int *,int *,int *,int *,int *) ;
 int FUNC_6 (int const*,int *) ;
 int * FUNC_7 (int ,int *,int ) ;
 int FUNC_8 (char*,...) ;

__attribute__((used)) static svn_error_t *
FUNC_9(svn_boolean_t *VAR_3,
                          const svn_client__pathrev_t *VAR_4,
                          const svn_client__pathrev_t *VAR_5,
                          merge_target_t *VAR_6,
                          svn_ra_session_t *VAR_7,
                          element_matching_info_t *VAR_8,
                          svn_boolean_t VAR_9,
                          svn_boolean_t VAR_10,
                          svn_boolean_t VAR_11,
                          const apr_array_header_t *VAR_12,
                          svn_client_ctx_t *VAR_13,
                          apr_pool_t *VAR_14)
{
  svn_element__tree_t *VAR_15, *VAR_16, *VAR_17;
  svn_element__tree_t *VAR_18;
  void *VAR_19;

  FUNC_8("--- Merging by elements: "
                 "left=%s, right=%s, matching=%s",
                 FUNC_6(VAR_4, VAR_14),
                 FUNC_6(VAR_5, VAR_14),
                 FUNC_4(VAR_8,
                                           VAR_14));



  FUNC_0(FUNC_3(&VAR_15, &VAR_16, &VAR_17,
                               VAR_4, VAR_5, VAR_6, VAR_7,
                               VAR_8,
                               VAR_13, VAR_14, VAR_14));


  FUNC_0(FUNC_5(&VAR_18, &VAR_19,
                      VAR_15, VAR_16, VAR_17,
                      VAR_14, VAR_14));


  if (VAR_19)
    {
      return FUNC_7(VAR_0, ((void*)0),
                              FUNC_1("Merge had conflicts; "
                                "this is not yet supported"));
    }


  if (VAR_11)
    {
      FUNC_8("--- Dry run; not writing merge result to WC");
    }
  else
    {
      FUNC_0(FUNC_2(VAR_6, VAR_18,
                                       VAR_13, VAR_14));
      *VAR_3 = VAR_2;
    }


  return VAR_1;
}
