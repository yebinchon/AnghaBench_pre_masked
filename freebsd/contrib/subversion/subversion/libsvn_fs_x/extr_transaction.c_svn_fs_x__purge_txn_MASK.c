
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int svn_fs_x__txn_id_t ;
typedef int svn_fs_t ;
typedef int svn_error_t ;
typedef int apr_pool_t ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int * VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (int *,int ,int *) ;
 int FUNC_2 (int *,int ,int *) ;
 int FUNC_3 (int *,int ,int *) ;
 int FUNC_4 (int *,int ,int *) ;
 int FUNC_5 (int *,char const*) ;
 int FUNC_6 (int ,int ,int *,int *,int *) ;
 int FUNC_7 (int ,int ,int *) ;
 int * FUNC_8 (int *) ;
 int FUNC_9 (int *) ;

svn_error_t *
FUNC_10(svn_fs_t *VAR_3,
                    const char *VAR_4,
                    apr_pool_t *VAR_5)
{
  svn_fs_x__txn_id_t VAR_6;




  apr_pool_t *VAR_7 = FUNC_8(VAR_5);
  FUNC_0(FUNC_5(&VAR_6, VAR_4));


  FUNC_0(FUNC_1(VAR_3, VAR_6, VAR_7));

  FUNC_0(FUNC_6(FUNC_2(VAR_3, VAR_6, VAR_7),
                             VAR_0, ((void*)0), ((void*)0), VAR_7));




  FUNC_0(FUNC_7(
                FUNC_3(VAR_3, VAR_6, VAR_7),
                VAR_2, VAR_7));
  FUNC_0(FUNC_7(
                FUNC_4(VAR_3, VAR_6, VAR_7),
                VAR_2, VAR_7));

  FUNC_9(VAR_7);
  return VAR_1;
}
