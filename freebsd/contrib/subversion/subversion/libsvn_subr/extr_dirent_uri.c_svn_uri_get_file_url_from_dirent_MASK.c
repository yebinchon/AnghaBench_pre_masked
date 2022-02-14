
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int svn_error_t ;
typedef int apr_size_t ;
typedef int apr_pool_t ;


 int FUNC_0 (int ) ;
 int * VAR_0 ;
 int VAR_1 ;
 void* FUNC_1 (int *,char*,char const*,int ) ;
 int FUNC_2 (int) ;
 int FUNC_3 (char const*) ;
 int FUNC_4 (char const**,char const*,int *) ;
 int FUNC_5 (char const*,int *) ;
 char* FUNC_6 (char const*,int *) ;

svn_error_t *
FUNC_7(const char **VAR_2,
                                 const char *VAR_3,
                                 apr_pool_t *VAR_4)
{
  FUNC_2(FUNC_5(VAR_3, VAR_4));

  FUNC_0(FUNC_4(&VAR_3, VAR_3, VAR_4));

  VAR_3 = FUNC_6(VAR_3, VAR_4);


  if (VAR_3[0] == '/' && VAR_3[1] == '\0')
    VAR_3 = ((void*)0);

  *VAR_2 = FUNC_1(VAR_4, "file://", VAR_3, VAR_1);
  return VAR_0;
}
