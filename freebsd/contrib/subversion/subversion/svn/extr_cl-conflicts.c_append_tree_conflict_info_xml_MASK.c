
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int svn_stringbuf_t ;
typedef int svn_revnum_t ;
typedef int svn_node_kind_t ;
typedef int svn_error_t ;
typedef int svn_client_conflict_t ;
typedef int apr_pool_t ;
typedef int apr_hash_t ;


 int FUNC_0 (int ) ;
 int * VAR_0 ;
 int FUNC_1 (int **,char*,char const*,char const*,int ,int ,int *) ;
 int * FUNC_2 (int *) ;
 int VAR_1 ;
 int VAR_2 ;
 char const* FUNC_3 (int ) ;
 char const* FUNC_4 (int ,int *) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (char const**,int *,int *,int *,int *,int *) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (int *) ;
 int FUNC_10 (char const**,int *,int *,int *,int *) ;
 int FUNC_11 (int *) ;
 char const* FUNC_12 (int ,int *) ;
 int FUNC_13 (int *,char*,char const*) ;
 char* FUNC_14 (int ,int ) ;
 int FUNC_15 (int **,int *,char*) ;
 int FUNC_16 (int **,int *,int ,char*,int *) ;
 int VAR_3 ;

__attribute__((used)) static svn_error_t *
FUNC_17(svn_stringbuf_t *VAR_4,
                              svn_client_conflict_t *VAR_5,
                              apr_pool_t *VAR_6)
{
  apr_hash_t *VAR_7 = FUNC_2(VAR_6);
  const char *VAR_8;
  const char *VAR_9;
  const char *VAR_10;
  svn_revnum_t VAR_11;
  svn_node_kind_t VAR_12;

  FUNC_13(VAR_7, "victim",
                FUNC_12(
                  FUNC_7(VAR_5), VAR_6));

  FUNC_13(VAR_7, "kind",
                FUNC_3(
                  FUNC_11(VAR_5)));

  FUNC_13(VAR_7, "operation",
                FUNC_4(
                  FUNC_9(VAR_5), VAR_6));

  VAR_8 = FUNC_14(VAR_1,
                           FUNC_5(VAR_5));
  FUNC_13(VAR_7, "action", VAR_8);

  VAR_8 = FUNC_14(VAR_2,
                           FUNC_8(VAR_5));
  FUNC_13(VAR_7, "reason", VAR_8);


  FUNC_16(&VAR_4, VAR_6, VAR_3,
                             "tree-conflict", VAR_7);



  FUNC_0(FUNC_10(&VAR_9, ((void*)0), VAR_5,
                                             VAR_6, VAR_6));
  FUNC_0(FUNC_6(&VAR_10,
                                                              &VAR_11,
                                                              &VAR_12,
                                                              VAR_5,
                                                              VAR_6,
                                                              VAR_6));
  if (VAR_9 && VAR_10)
    FUNC_0(FUNC_1(&VAR_4, "source-left",
                                     VAR_9, VAR_10, VAR_11,
                                     VAR_12, VAR_6));

  FUNC_0(FUNC_6(&VAR_10,
                                                              &VAR_11,
                                                              &VAR_12,
                                                              VAR_5,
                                                              VAR_6,
                                                              VAR_6));
  if (VAR_9 && VAR_10)
    FUNC_0(FUNC_1(&VAR_4,
                                     "source-right",
                                     VAR_9, VAR_10, VAR_11,
                                     VAR_12, VAR_6));

  FUNC_15(&VAR_4, VAR_6, "tree-conflict");

  return VAR_0;
}
