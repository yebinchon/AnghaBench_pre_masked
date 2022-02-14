
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int svn_error_t ;
typedef int apr_pool_t ;


 int FUNC_0 (int ) ;
 int * VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (char const*,int ,int *) ;
 int FUNC_2 (int *,char*,char const*,char const*) ;

__attribute__((used)) static svn_error_t *
FUNC_3(const char *VAR_2, const char *VAR_3,
                       apr_pool_t *VAR_4)
{
  if (VAR_2)
    {
      if (VAR_3)
        FUNC_0(FUNC_2(VAR_4, "%-10s %s", VAR_2, VAR_3));
      else
        FUNC_0(FUNC_1(VAR_2, VAR_1, VAR_4));
    }
  else if (VAR_3)
    FUNC_0(FUNC_2(VAR_4, "%-10s %s", "", VAR_3));

  return VAR_0;
}
