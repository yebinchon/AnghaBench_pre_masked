
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int svn_fs_x__txn_id_t ;
typedef int svn_error_t ;
typedef int apr_uint64_t ;


 int VAR_0 ;
 int * VAR_1 ;
 int FUNC_0 (char const**,char const*) ;
 int * FUNC_1 (int ,int *,char*,char const*) ;

svn_error_t *
FUNC_2(svn_fs_x__txn_id_t *VAR_2,
                      const char *VAR_3)
{
  const char *VAR_4;
  apr_uint64_t VAR_5 = FUNC_0(&VAR_4, VAR_3);
  if (VAR_4 == ((void*)0) || *VAR_4 != 0 || *VAR_3 == 0)
    return FUNC_1(VAR_0, ((void*)0),
                             "Malformed TXN name '%s'", VAR_3);

  *VAR_2 = VAR_5;
  return VAR_1;
}
