
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int svn_revnum_t ;
typedef scalar_t__ svn_node_kind_t ;
typedef int svn_error_t ;
struct edit_baton {int ra_session; int revision; } ;
typedef int apr_pool_t ;
typedef int apr_hash_t ;
typedef int apr_array_header_t ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int * VAR_0 ;
 int * FUNC_2 (int *) ;
 int FUNC_3 (int *,int *,int *,int **,int *) ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int * FUNC_4 (int *,int *) ;
 int * FUNC_5 (int *,int *) ;
 int FUNC_6 (int ,char const*,int ,scalar_t__*,int *) ;
 int FUNC_7 (int ,int *,int *,int **,char const*,int ,int ,int *) ;
 int FUNC_8 (int ,char const*,int ,int *,int *,int **,int *) ;

__attribute__((used)) static svn_error_t *
FUNC_9(apr_hash_t **VAR_3,
                 void *VAR_4,
                 const char *VAR_5,
                 svn_revnum_t VAR_6,
                 apr_pool_t *VAR_7,
                 apr_pool_t *VAR_8)
{
  struct edit_baton *VAR_9 = VAR_4;
  svn_node_kind_t VAR_10;

  if (!FUNC_1(VAR_6))
    VAR_6 = VAR_9->revision;

  FUNC_0(FUNC_6(VAR_9->ra_session, VAR_5, VAR_6, &VAR_10,
                            VAR_8));

  if (VAR_10 == VAR_2)
    {
      FUNC_0(FUNC_8(VAR_9->ra_session, VAR_5, VAR_6,
                              ((void*)0), ((void*)0), VAR_3, VAR_7));
    }
  else if (VAR_10 == VAR_1)
    {
      apr_array_header_t *VAR_11;

      FUNC_0(FUNC_7(VAR_9->ra_session, ((void*)0), ((void*)0), VAR_3, VAR_5,
                              VAR_6, 0 ,
                              VAR_7));
      VAR_11 = FUNC_5(*VAR_3, VAR_7);
      FUNC_0(FUNC_3(VAR_11, ((void*)0), ((void*)0), &VAR_11,
                                   VAR_7));
      *VAR_3 = FUNC_4(VAR_11, VAR_7);
    }
  else
    {
      *VAR_3 = FUNC_2(VAR_7);
    }

  return VAR_0;
}
