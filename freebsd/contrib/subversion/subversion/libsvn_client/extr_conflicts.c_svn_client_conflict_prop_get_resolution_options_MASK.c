
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
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;

svn_error_t *
FUNC_5(apr_array_header_t **VAR_10,
                                                svn_client_conflict_t *VAR_11,
                                                svn_client_ctx_t *VAR_12,
                                                apr_pool_t *VAR_13,
                                                apr_pool_t *VAR_14)
{
  FUNC_0(FUNC_4(VAR_11, VAR_14));

  *VAR_10 = FUNC_3(VAR_13, 7,
                            sizeof(svn_client_conflict_option_t *));

  FUNC_2(*VAR_10, VAR_11,
    VAR_7,
    FUNC_1("Postpone"),
    FUNC_1("skip this conflict and leave it unresolved"),
    VAR_1);

  FUNC_2(*VAR_10, VAR_11,
    VAR_3,
    FUNC_1("Accept base"),
    FUNC_1("discard local and incoming changes for this property"),
    VAR_2);

  FUNC_2(*VAR_10, VAR_11,
    VAR_4,
    FUNC_1("Accept incoming"),
    FUNC_1("accept incoming version of entire property value"),
    VAR_2);

  FUNC_2(*VAR_10, VAR_11,
    VAR_8,
    FUNC_1("Mark as resolved"),
    FUNC_1("accept working copy version of entire property value"),
    VAR_2);

  FUNC_2(*VAR_10, VAR_11,
    VAR_5,
    FUNC_1("Accept incoming for conflicts"),
    FUNC_1("accept incoming changes only where they conflict"),
    VAR_2);

  FUNC_2(*VAR_10, VAR_11,
    VAR_9,
    FUNC_1("Reject conflicts"),
    FUNC_1("reject changes which conflict and accept the rest"),
    VAR_2);

  FUNC_2(*VAR_10, VAR_11,
    VAR_6,
    FUNC_1("Accept merged"),
    FUNC_1("accept merged version of property value"),
    VAR_2);

  return VAR_0;
}
