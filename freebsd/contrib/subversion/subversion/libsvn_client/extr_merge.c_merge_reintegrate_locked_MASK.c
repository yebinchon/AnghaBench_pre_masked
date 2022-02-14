
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int svn_ra_session_t ;
typedef int svn_opt_revision_t ;
typedef int svn_error_t ;
typedef int svn_client_ctx_t ;
typedef int svn_client__pathrev_t ;
typedef int svn_client__conflict_report_t ;
typedef void* svn_boolean_t ;
typedef int merge_target_t ;
struct TYPE_4__ {void* ancestral; } ;
typedef TYPE_1__ merge_source_t ;
typedef int apr_pool_t ;
typedef int apr_array_header_t ;


 void* VAR_0 ;
 int FUNC_0 (int *) ;
 int * VAR_1 ;
 int VAR_2 ;
 int * FUNC_1 (TYPE_1__**,int **,int *,int *,int *,int *,int *,int *,int *) ;
 int * FUNC_2 (int **,void**,int *,int *,int *,TYPE_1__*,int *,int ,int ,void*,void*,void*,void*,int const*,int *,int *,int *) ;
 int * FUNC_3 (int **,int **,int **,int **,char const*,int const*,char const*,int *,int *,int *) ;
 int VAR_3 ;
 int FUNC_4 (char const*,int *) ;

__attribute__((used)) static svn_error_t *
FUNC_5(svn_client__conflict_report_t **VAR_4,
                         const char *VAR_5,
                         const svn_opt_revision_t *VAR_6,
                         const char *VAR_7,
                         svn_boolean_t VAR_8,
                         svn_boolean_t VAR_9,
                         const apr_array_header_t *VAR_10,
                         svn_client_ctx_t *VAR_11,
                         apr_pool_t *VAR_12,
                         apr_pool_t *VAR_13)
{
  svn_ra_session_t *VAR_14, *VAR_15;
  merge_target_t *VAR_16;
  svn_client__pathrev_t *VAR_17;
  merge_source_t *VAR_18;
  svn_client__pathrev_t *VAR_19;
  svn_boolean_t VAR_20 = VAR_0;
  svn_error_t *VAR_21;

  FUNC_0(FUNC_3(
            &VAR_15, &VAR_17, &VAR_14, &VAR_16,
            VAR_5, VAR_6, VAR_7,
            VAR_11, VAR_13, VAR_13));

  FUNC_0(FUNC_1(&VAR_18, &VAR_19,
                                 VAR_15, VAR_17,
                                 VAR_14, VAR_16,
                                 VAR_11, VAR_13, VAR_13));

  if (! VAR_18)
    {
      *VAR_4 = ((void*)0);
      return VAR_1;
    }







  VAR_18->ancestral = VAR_0;
  VAR_21 = FUNC_2(VAR_4,
                                               &VAR_20,
                                               VAR_16,
                                               VAR_14,
                                               VAR_15,
                                               VAR_18, VAR_19,
                                               VAR_2 ,
                                               VAR_3,
                                               VAR_8,
                                               VAR_0 ,
                                               VAR_0 ,
                                               VAR_9,
                                               VAR_10,
                                               VAR_11,
                                               VAR_12, VAR_13);

  if (VAR_20)
    FUNC_4(VAR_7, VAR_13);

  FUNC_0(VAR_21);
  return VAR_1;
}
