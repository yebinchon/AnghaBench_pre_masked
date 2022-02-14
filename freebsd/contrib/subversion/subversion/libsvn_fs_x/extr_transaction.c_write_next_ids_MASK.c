
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int svn_fs_x__txn_id_t ;
typedef int svn_fs_t ;
typedef int svn_error_t ;
typedef int apr_uint64_t ;
typedef int apr_pool_t ;
typedef int apr_file_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ) ;
 int VAR_3 ;
 int FUNC_1 (char*,int ) ;
 int FUNC_2 (int *,int ,int *) ;
 int * FUNC_3 (int *,int *) ;
 int FUNC_4 (int **,int ,int,int ,int *) ;
 int FUNC_5 (int *,char*,int,int *,int *) ;

__attribute__((used)) static svn_error_t *
FUNC_6(svn_fs_t *VAR_4,
               svn_fs_x__txn_id_t VAR_5,
               apr_uint64_t VAR_6,
               apr_uint64_t VAR_7,
               apr_pool_t *VAR_8)
{
  apr_file_t *VAR_9;
  char VAR_10[2 * VAR_3 + 2];
  char *VAR_11 = VAR_10;

  VAR_11 += FUNC_1(VAR_11, VAR_6);
  *(VAR_11++) = ' ';
  VAR_11 += FUNC_1(VAR_11, VAR_7);
  *(VAR_11++) = '\n';
  *(VAR_11++) = '\0';

  FUNC_0(FUNC_4(&VAR_9,
                           FUNC_2(VAR_4, VAR_5,
                                                       VAR_8),
                           VAR_2 | VAR_1,
                           VAR_0, VAR_8));
  FUNC_0(FUNC_5(VAR_9, VAR_10, VAR_11 - VAR_10, ((void*)0),
                                 VAR_8));
  return FUNC_3(VAR_9, VAR_8);
}
