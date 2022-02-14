
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int svn_error_t ;
typedef int apr_pool_t ;


 int * FUNC_0 (char const**,char const*,int *) ;
 char const* FUNC_1 (char const*,int *) ;
 int FUNC_2 (int *) ;

__attribute__((used)) static const char *
FUNC_3(const char *VAR_0, apr_pool_t *VAR_1)
{
  svn_error_t *VAR_2;
  const char *VAR_3;


  if (VAR_0 == ((void*)0))
    return "(NULL)";




  VAR_2 = FUNC_0(&VAR_3, VAR_0, VAR_1);
  if (VAR_2)
    {


      FUNC_2(VAR_2);
      VAR_3 = VAR_0;
    }



  return FUNC_1(VAR_3, VAR_1);
}
