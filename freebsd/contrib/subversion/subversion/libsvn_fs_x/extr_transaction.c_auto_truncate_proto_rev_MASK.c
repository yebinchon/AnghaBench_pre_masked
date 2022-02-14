
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int svn_fs_x__txn_id_t ;
typedef int svn_fs_t ;
typedef int svn_error_t ;
typedef int apr_pool_t ;
typedef scalar_t__ apr_off_t ;
typedef int apr_file_t ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int * VAR_1 ;
 int FUNC_1 (char*) ;
 int FUNC_2 (int *,scalar_t__) ;
 int * FUNC_3 (int ,int *,int ,int ,int ,int ) ;
 int FUNC_4 (scalar_t__*,int *,int *) ;
 int FUNC_5 (int **,char const*,int *) ;
 char* FUNC_6 (int *,int ,int *) ;
 int FUNC_7 (int ,int *) ;
 int FUNC_8 (int *,int *) ;
 int FUNC_9 (int *,scalar_t__,int *) ;

__attribute__((used)) static svn_error_t *
FUNC_10(svn_fs_t *VAR_2,
                        apr_file_t *VAR_3,
                        apr_off_t VAR_4,
                        svn_fs_x__txn_id_t VAR_5,
                        apr_pool_t *VAR_6)
{



  const char *VAR_7 = FUNC_6(VAR_2, VAR_5, VAR_6);
  apr_file_t *VAR_8;
  apr_off_t VAR_9;

  FUNC_0(FUNC_5(&VAR_8, VAR_7, VAR_6));
  FUNC_0(FUNC_4(&VAR_9, VAR_8,
                                                VAR_6));
  FUNC_0(FUNC_8(VAR_8, VAR_6));


  if (VAR_9 < VAR_4)
    FUNC_0(FUNC_9(VAR_3, VAR_9, VAR_6));
  else if (VAR_9 > VAR_4)
    return FUNC_3(VAR_0,
                             ((void*)0),
                             FUNC_1("p2l proto index offset %s beyond proto"
                               "rev file size %s for TXN %s"),
                             FUNC_2(VAR_6, VAR_9),
                             FUNC_2(VAR_6, VAR_4),
                             FUNC_7(VAR_5, VAR_6));

  return VAR_1;
}
