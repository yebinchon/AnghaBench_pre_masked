
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int svn_error_t ;
typedef int apr_pool_t ;


 unsigned int VAR_0 ;
 unsigned int VAR_1 ;
 unsigned int VAR_2 ;
 unsigned int VAR_3 ;
 unsigned int VAR_4 ;
 int FUNC_0 (int ) ;
 int * VAR_5 ;
 int FUNC_1 (char*) ;
 int FUNC_2 (int *,int ) ;
 int FUNC_3 (unsigned int*,char const*) ;

__attribute__((used)) static svn_error_t *
FUNC_4(const char *VAR_6,
                   apr_pool_t *VAR_7)
{
  unsigned int VAR_8;

  FUNC_0(FUNC_3(&VAR_8, VAR_6));

  if (0 == (VAR_8 & (VAR_2 | VAR_1 |
                        VAR_0 | VAR_4 |
                        VAR_3)))
    return VAR_5;

  FUNC_0(FUNC_2(
            VAR_7, FUNC_1("Automatic certificate validity check failed "
                            "because:\n")));

  if (VAR_8 & VAR_2)
    FUNC_0(FUNC_2(
              VAR_7, FUNC_1("  The certificate is not yet valid.\n")));

  if (VAR_8 & VAR_1)
    FUNC_0(FUNC_2(
              VAR_7, FUNC_1("  The certificate has expired.\n")));

  if (VAR_8 & VAR_0)
    FUNC_0(FUNC_2(
              VAR_7, FUNC_1("  The certificate's Common Name (hostname) "
                              "does not match the remote hostname.\n")));

  if (VAR_8 & VAR_4)
    FUNC_0(FUNC_2(
              VAR_7, FUNC_1("  The certificate issuer is unknown.\n")));

  if (VAR_8 & VAR_3)
    FUNC_0(FUNC_2(
              VAR_7, FUNC_1("  Unknown verification failure.\n")));

  return VAR_5;
}
