
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int svn_error_t ;
typedef int apr_pool_t ;
typedef int apr_file_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (char const*) ;
 char* FUNC_2 (char const*,int ,int *) ;
 int * FUNC_3 (int ) ;
 int FUNC_4 (int *,int *) ;
 int FUNC_5 (int **,char const*,int,int ,int *) ;
 int FUNC_6 (int *,char const*,int,int *,int *) ;

__attribute__((used)) static svn_error_t *
FUNC_7(const char *VAR_6, const char *VAR_7, apr_pool_t *VAR_8)
{
  const char *VAR_9;
  apr_file_t *VAR_10;

  VAR_9 = FUNC_2(VAR_6, VAR_5, VAR_8);
  FUNC_0(FUNC_5(&VAR_10, VAR_9,
                           VAR_4|VAR_1|VAR_3|VAR_0,
                           VAR_2, VAR_8));
  FUNC_0(FUNC_6(VAR_10, VAR_7, FUNC_1(VAR_7), ((void*)0),
                                 VAR_8));
  FUNC_0(FUNC_6(VAR_10, "\n", 1, ((void*)0), VAR_8));
  return FUNC_3(FUNC_4(VAR_10, VAR_8));
}
