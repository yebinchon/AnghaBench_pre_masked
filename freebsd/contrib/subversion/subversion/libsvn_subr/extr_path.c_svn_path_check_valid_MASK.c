
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int svn_error_t ;
typedef int apr_pool_t ;


 int VAR_0 ;
 int * VAR_1 ;
 int FUNC_0 (char*) ;
 scalar_t__ FUNC_1 (char const) ;
 int FUNC_2 (char const*,int *) ;
 int * FUNC_3 (int ,int *,int ,unsigned char,int ) ;
 int FUNC_4 (int ,int *) ;

svn_error_t *
FUNC_5(const char *VAR_2, apr_pool_t *VAR_3)
{
  const char *VAR_4;

  for (VAR_4 = VAR_2; *VAR_4; VAR_4++)
    {
      if (FUNC_1(*VAR_4))
        {
          return FUNC_3(VAR_0, ((void*)0),
             FUNC_0("Invalid control character '0x%02x' in path '%s'"),
             (unsigned char)*VAR_4,
             FUNC_4(FUNC_2(VAR_2, VAR_3),
                                          VAR_3));
        }
    }

  return VAR_1;
}
