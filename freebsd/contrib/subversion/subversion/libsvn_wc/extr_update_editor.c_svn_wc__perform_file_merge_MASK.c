
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


typedef int svn_wc__db_t ;
typedef int svn_skel_t ;
typedef scalar_t__ svn_revnum_t ;
typedef int svn_error_t ;
typedef int svn_checksum_t ;
typedef int svn_cancel_func_t ;
typedef int svn_boolean_t ;
typedef enum svn_wc_merge_outcome_t { ____Placeholder_svn_wc_merge_outcome_t } svn_wc_merge_outcome_t ;
typedef int apr_pool_t ;
typedef int apr_hash_t ;
struct TYPE_6__ {scalar_t__ nelts; } ;
typedef TYPE_1__ apr_array_header_t ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (scalar_t__) ;
 int * VAR_1 ;
 int VAR_2 ;
 char* FUNC_2 (int *,char*,char*,char const*,...) ;
 int FUNC_3 (char const**,int *,char const*,int *,int *) ;
 scalar_t__ FUNC_4 (char const*,TYPE_1__ const*) ;
 int FUNC_5 (int *,char const**,char const*,int *) ;
 int FUNC_6 (char const**,int *,char const*,int const*,int *,int *) ;
 int FUNC_7 (int **,int **,int*,int *,char const*,char const*,char const*,char const*,char const*,char const*,char const*,int *,int,char const*,int *,TYPE_1__ const*,int ,void*,int *,int *) ;
 int FUNC_8 (int **,int *,char const*,char const*,int *,int *) ;
 int * FUNC_9 (int *,int *,int *) ;
 int VAR_3 ;
 int VAR_4 ;

svn_error_t *
FUNC_10(svn_skel_t **VAR_5,
                           svn_skel_t **VAR_6,
                           svn_boolean_t *VAR_7,
                           svn_wc__db_t *VAR_8,
                           const char *VAR_9,
                           const char *VAR_10,
                           const svn_checksum_t *VAR_11,
                           const svn_checksum_t *VAR_12,
                           apr_hash_t *VAR_13,
                           const apr_array_header_t *VAR_14,
                           svn_revnum_t VAR_15,
                           svn_revnum_t VAR_16,
                           const apr_array_header_t *VAR_17,
                           const char *VAR_18,
                           svn_cancel_func_t VAR_19,
                           void *VAR_20,
                           apr_pool_t *VAR_21,
                           apr_pool_t *VAR_22)
{



  const char *VAR_23, *VAR_24, *VAR_25;
  const char *VAR_26;
  svn_boolean_t VAR_27 = VAR_0;
  const char *VAR_28 = "";
  const char *VAR_29;
  enum svn_wc_merge_outcome_t VAR_30 = VAR_4;
  svn_skel_t *VAR_31;

  *VAR_5 = ((void*)0);

  FUNC_0(FUNC_6(&VAR_29,
                                       VAR_8, VAR_10, VAR_11,
                                       VAR_22, VAR_22));






  if (VAR_14 && VAR_14->nelts)
    {
      FUNC_5(((void*)0), &VAR_28, VAR_9, VAR_22);
      if (! (*VAR_28 && FUNC_4(VAR_28, VAR_14)))
        VAR_28 = "";
    }



  if (!FUNC_1(VAR_15))
    VAR_15 = 0;

  VAR_23 = FUNC_2(VAR_22, ".r%ld%s%s",
                            VAR_15,
                            *VAR_28 ? "." : "",
                            *VAR_28 ? VAR_28 : "");

  VAR_24 = FUNC_2(VAR_22, ".r%ld%s%s",
                            VAR_16,
                            *VAR_28 ? "." : "",
                            *VAR_28 ? VAR_28 : "");
  VAR_25 = FUNC_2(VAR_22, ".mine%s%s",
                          *VAR_28 ? "." : "",
                          *VAR_28 ? VAR_28 : "");

  if (! VAR_12)
    {
      FUNC_0(FUNC_3(&VAR_26, VAR_8, VAR_10,
                                 VAR_21, VAR_22));
      VAR_27 = VAR_2;
    }
  else
    FUNC_0(FUNC_6(&VAR_26, VAR_8, VAR_10,
                                         VAR_12,
                                         VAR_21, VAR_22));




  FUNC_0(FUNC_7(&VAR_31,
                                 VAR_6,
                                 &VAR_30,
                                 VAR_8,
                                 VAR_26,
                                 VAR_29,
                                 VAR_9,
                                 VAR_10,
                                 VAR_23, VAR_24, VAR_25,
                                 VAR_13,
                                 VAR_0 ,
                                 VAR_18, ((void*)0), VAR_17,
                                 VAR_19, VAR_20,
                                 VAR_21, VAR_22));

  *VAR_5 = FUNC_9(*VAR_5, VAR_31, VAR_21);
  *VAR_7 = (VAR_30 == VAR_3);


  if (VAR_27)
    {
      FUNC_0(FUNC_8(&VAR_31, VAR_8, VAR_10,
                                           VAR_26,
                                           VAR_21, VAR_22));
      *VAR_5 = FUNC_9(*VAR_5, VAR_31, VAR_21);
    }

  return VAR_1;
}
