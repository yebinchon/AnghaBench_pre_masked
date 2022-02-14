
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int svn_stringbuf_t ;
typedef scalar_t__ svn_fs_x__txn_id_t ;
typedef int svn_fs_t ;
typedef int svn_error_t ;
typedef int apr_pool_t ;
typedef int apr_hash_t ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int FUNC_1 (int ,int ) ;
 scalar_t__ VAR_1 ;
 int * VAR_2 ;
 int FUNC_2 (char*) ;
 int FUNC_3 (int *,int ,int ) ;
 int * FUNC_4 (int ,int *,int ) ;
 int FUNC_5 (int **,int ,int *) ;
 int FUNC_6 (int *,scalar_t__,int *) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int **,int ,int *) ;

__attribute__((used)) static svn_error_t *
FUNC_9(apr_hash_t **VAR_3,
                 svn_fs_t *VAR_4,
                 svn_fs_x__txn_id_t VAR_5,
                 apr_pool_t *VAR_6,
                 apr_pool_t *VAR_7)
{
  svn_stringbuf_t *VAR_8;



  if (VAR_5 == VAR_1)
    return FUNC_4(VAR_0, ((void*)0),
                            FUNC_2("Internal error: a null transaction id was "
                              "passed to get_txn_proplist()"));


  FUNC_0(FUNC_8(&VAR_8,
                                   FUNC_6(VAR_4, VAR_5,
                                                            VAR_7),
                                   VAR_6));


  FUNC_1(FUNC_5(VAR_3,
                                   FUNC_7(VAR_8),
                                   VAR_6),
            FUNC_3(VAR_7,
                         FUNC_2("malformed property list in transaction '%s'"),
                         FUNC_6(VAR_4, VAR_5, VAR_7)));

  return VAR_2;
}
