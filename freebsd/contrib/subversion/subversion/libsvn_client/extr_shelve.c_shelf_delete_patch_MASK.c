
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int svn_error_t ;
typedef int svn_client_ctx_t ;
typedef int apr_pool_t ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int * VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 char* FUNC_1 (int *,char*,char*,int ) ;
 int FUNC_2 (char**,char const*,char const*,int *,int *,int *) ;
 int FUNC_3 (char*,char*,int ,int *) ;
 int FUNC_4 (char*,int ,int *) ;

__attribute__((used)) static svn_error_t *
FUNC_5(const char *VAR_4,
                   const char *VAR_5,
                   svn_client_ctx_t *VAR_6,
                   apr_pool_t *VAR_7)
{
  char *VAR_8, *VAR_9;

  FUNC_0(FUNC_2(&VAR_8, VAR_4, VAR_5,
                            VAR_6, VAR_7, VAR_7));
  VAR_9 = FUNC_1(VAR_7, VAR_8, ".bak", VAR_2);


  FUNC_0(FUNC_4(VAR_9, VAR_3 ,
                              VAR_7));


  FUNC_0(FUNC_3(VAR_8, VAR_9, VAR_0 ,
                              VAR_7));
  return VAR_1;
}
