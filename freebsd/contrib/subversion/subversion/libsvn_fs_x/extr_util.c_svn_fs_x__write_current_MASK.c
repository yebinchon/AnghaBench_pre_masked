
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int svn_revnum_t ;
typedef int svn_fs_t ;
typedef int svn_error_t ;
typedef int apr_pool_t ;
typedef int apr_file_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ) ;
 int * VAR_4 ;
 int VAR_5 ;
 char* FUNC_1 (int *,char*,int ) ;
 int FUNC_2 (char*) ;
 char* FUNC_3 (int *,int *) ;
 char* FUNC_4 (int *,int *) ;
 int FUNC_5 (char const*,char const*,int *) ;
 int FUNC_6 (int *,int *) ;
 int FUNC_7 (int **,char const*,int,int ,int *) ;
 int FUNC_8 (char const*,char const*,int ,int *) ;
 int FUNC_9 (int *,char*,int ,int *,int *) ;

svn_error_t *
FUNC_10(svn_fs_t *VAR_6,
                        svn_revnum_t VAR_7,
                        apr_pool_t *VAR_8)
{
  char *VAR_9;
  const char *VAR_10, *VAR_11;
  apr_file_t *VAR_12;


  VAR_9 = FUNC_1(VAR_8, "%ld\n", VAR_7);

  VAR_11 = FUNC_3(VAR_6, VAR_8);
  VAR_10 = FUNC_4(VAR_6, VAR_8);

  FUNC_0(FUNC_7(&VAR_12, VAR_10,
                           VAR_3 | VAR_1 | VAR_0,
                           VAR_2, VAR_8));
  FUNC_0(FUNC_9(VAR_12, VAR_9, FUNC_2(VAR_9), ((void*)0),
                                 VAR_8));
  FUNC_0(FUNC_6(VAR_12, VAR_8));


  FUNC_0(FUNC_5(VAR_11, VAR_10, VAR_8));


  FUNC_0(FUNC_8(VAR_10, VAR_11, VAR_5, VAR_8));

  return VAR_4;
}
