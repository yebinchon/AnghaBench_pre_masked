
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


typedef int svn_rangelist_t ;
typedef int svn_ra_session_t ;
typedef int svn_opt_revision_t ;
typedef int svn_error_t ;
typedef scalar_t__ svn_depth_t ;
typedef int svn_client_ctx_t ;
typedef int svn_client__pathrev_t ;
typedef int svn_client__conflict_report_t ;
typedef scalar_t__ svn_boolean_t ;
struct TYPE_5__ {int loc; } ;
typedef TYPE_1__ merge_target_t ;
typedef int apr_pool_t ;
typedef int apr_array_header_t ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int ) ;
 int * VAR_1 ;
 int VAR_2 ;
 int * FUNC_2 (int *,int *,int **,scalar_t__*,int *,TYPE_1__*,int *,int ,scalar_t__,scalar_t__,scalar_t__,scalar_t__,scalar_t__,scalar_t__,int *,scalar_t__,scalar_t__,scalar_t__,int const*,int *,int *,int *) ;
 scalar_t__ FUNC_3 (char*) ;
 scalar_t__ FUNC_4 (int *,int *,int ) ;
 int * FUNC_5 (int **,char const*,int *,int const*,int *,int *,int *,int *) ;
 int * FUNC_6 (TYPE_1__**,char const*,scalar_t__,int ,int ,int *,int *,int *) ;
 int * FUNC_7 (scalar_t__*,int *,TYPE_1__*,int *,scalar_t__,scalar_t__,scalar_t__,int const*,int *,int *,int *) ;
 int * FUNC_8 (int **,int **,char const*,int *,int const*,int const*,int *,int *) ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 int FUNC_9 (char const*) ;
 int FUNC_10 (char const*,int *) ;
 int * FUNC_11 (int *) ;
 int FUNC_12 (int *) ;

__attribute__((used)) static svn_error_t *
FUNC_13(svn_client__conflict_report_t **VAR_5,
                 const char *VAR_6,
                 const svn_opt_revision_t *VAR_7,
                 const svn_rangelist_t *VAR_8,
                 const char *VAR_9,
                 svn_depth_t VAR_10,
                 svn_boolean_t VAR_11,
                 svn_boolean_t VAR_12,
                 svn_boolean_t VAR_13,
                 svn_boolean_t VAR_14,
                 svn_boolean_t VAR_15,
                 svn_boolean_t VAR_16,
                 const apr_array_header_t *VAR_17,
                 svn_client_ctx_t *VAR_18,
                 apr_pool_t *VAR_19,
                 apr_pool_t *VAR_20)
{
  merge_target_t *VAR_21;
  svn_client__pathrev_t *VAR_22;
  apr_array_header_t *VAR_23;
  svn_ra_session_t *VAR_24;
  apr_pool_t *VAR_25;
  svn_boolean_t VAR_26 = VAR_0;
  svn_error_t *VAR_27;
  svn_boolean_t VAR_28;

  FUNC_1(FUNC_9(VAR_9));

  FUNC_0(FUNC_6(&VAR_21, VAR_9,
                         VAR_16, VAR_2, VAR_2,
                         VAR_18, VAR_20, VAR_20));


  VAR_25 = FUNC_11(VAR_20);


  FUNC_0(FUNC_8(
            &VAR_24, &VAR_22,
            VAR_6, ((void*)0), VAR_7, VAR_7,
            VAR_18, VAR_25));


  FUNC_0(FUNC_5(&VAR_23, VAR_6,
                                  VAR_22,
                                  VAR_8, VAR_24, VAR_18,
                                  VAR_20, VAR_20));


  VAR_28 = FUNC_4(&VAR_21->loc, VAR_22, VAR_2 );



  if (FUNC_3("SVN_ELEMENT_MERGE")
      && VAR_28
      && (VAR_10 == VAR_3 || VAR_10 == VAR_4)
      && VAR_11
      && !VAR_14)
    {
      VAR_27 = FUNC_7(&VAR_26,
                                       VAR_23, VAR_21, VAR_24,
                                       VAR_12, VAR_13,
                                       VAR_15, VAR_17,
                                       VAR_18, VAR_19, VAR_20);

      *VAR_5 = ((void*)0);
    }
  else
  VAR_27 = FUNC_2(((void*)0), ((void*)0), VAR_5, &VAR_26,
                 VAR_23, VAR_21, VAR_24,
                 VAR_2 , VAR_28, VAR_11,
                 VAR_12, VAR_13, VAR_15,
                 VAR_14, ((void*)0), VAR_0, VAR_0, VAR_10, VAR_17,
                 VAR_18, VAR_19, VAR_20);


  FUNC_12(VAR_25);

  if (VAR_26)
    FUNC_10(VAR_9, VAR_20);

  FUNC_0(VAR_27);
  return VAR_1;
}
