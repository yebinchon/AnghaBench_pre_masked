
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int svn_stream_t ;
typedef int svn_fs_t ;
typedef int svn_fs_fs__id_part_t ;
typedef int svn_error_t ;
typedef int apr_pool_t ;
typedef int apr_hash_t ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (char*) ;
 int FUNC_2 (int *,int const*,int *) ;
 int * FUNC_3 (int *,int *) ;
 int * FUNC_4 (int ,int *,int ) ;
 int * FUNC_5 (int *,int ,int ) ;
 int FUNC_6 (int const*) ;
 int * FUNC_7 (int *,int *,int ,int *) ;
 int * FUNC_8 (int *) ;
 int FUNC_9 (int **,int ,int *,int *) ;

__attribute__((used)) static svn_error_t *
FUNC_10(apr_hash_t *VAR_2,
                 svn_fs_t *VAR_3,
                 const svn_fs_fs__id_part_t *VAR_4,
                 apr_pool_t *VAR_5)
{
  svn_stream_t *VAR_6;
  svn_error_t *VAR_7;



  if (!VAR_4 || !FUNC_6(VAR_4))
    return FUNC_4(VAR_0, ((void*)0),
                            FUNC_1("Internal error: a null transaction id was "
                              "passed to get_txn_proplist()"));


  FUNC_0(FUNC_9(&VAR_6, FUNC_2(VAR_3, VAR_4, VAR_5),
                                   VAR_5, VAR_5));


  VAR_7 = FUNC_7(VAR_2, VAR_6, VAR_1, VAR_5);
  if (VAR_7)
    {
      VAR_7 = FUNC_3(VAR_7, FUNC_8(VAR_6));
      return FUNC_5(VAR_7,
               FUNC_1("malformed property list in transaction '%s'"),
               FUNC_2(VAR_3, VAR_4, VAR_5));
    }

  return FUNC_8(VAR_6);
}
