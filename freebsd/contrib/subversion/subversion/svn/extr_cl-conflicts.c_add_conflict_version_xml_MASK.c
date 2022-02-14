
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int svn_stringbuf_t ;
typedef int svn_revnum_t ;
typedef scalar_t__ svn_node_kind_t ;
typedef int svn_error_t ;
typedef int apr_pool_t ;
typedef int apr_hash_t ;


 scalar_t__ FUNC_0 (int ) ;
 int * VAR_0 ;
 int * FUNC_1 (int *) ;
 char const* FUNC_2 (int *,int ) ;
 char const* FUNC_3 (scalar_t__) ;
 int FUNC_4 (int *,char*,char const*) ;
 scalar_t__ VAR_1 ;
 int FUNC_5 (int **,int *,int ,char*,int *) ;
 int VAR_2 ;

__attribute__((used)) static svn_error_t *
FUNC_6(svn_stringbuf_t **VAR_3,
                         const char *VAR_4,
                         const char *VAR_5,
                         const char *VAR_6,
                         svn_revnum_t VAR_7,
                         svn_node_kind_t VAR_8,
                         apr_pool_t *VAR_9)
{
  apr_hash_t *VAR_10 = FUNC_1(VAR_9);


  FUNC_4(VAR_10, "side", VAR_4);

  if (VAR_5)
    FUNC_4(VAR_10, "repos-url", VAR_5);

  if (VAR_6)
    FUNC_4(VAR_10, "path-in-repos", VAR_6);

  if (FUNC_0(VAR_7))
    FUNC_4(VAR_10, "revision", FUNC_2(VAR_9, VAR_7));

  if (VAR_8 != VAR_1)
    FUNC_4(VAR_10, "kind", FUNC_3(VAR_8));

  FUNC_5(VAR_3, VAR_9, VAR_2,
                             "version", VAR_10);
  return VAR_0;
}
