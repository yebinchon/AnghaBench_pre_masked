
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int svn_error_t ;
typedef scalar_t__ apr_size_t ;
typedef int apr_pool_t ;


 int VAR_0 ;
 int * VAR_1 ;
 int FUNC_0 (char*) ;
 char* FUNC_1 (int *,char const*,int) ;
 int FUNC_2 (char const) ;
 scalar_t__ FUNC_3 (char const) ;
 int FUNC_4 (char const) ;
 int * FUNC_5 (int ,int *,int ,...) ;

__attribute__((used)) static svn_error_t *
FUNC_6(const char *VAR_2, apr_size_t VAR_3, apr_pool_t *VAR_4)
{
  const char *VAR_5 = VAR_2;

  for (; VAR_3 > 0; --VAR_3, VAR_2++)
    {
      if ((! FUNC_2(*VAR_2))
          || ((! FUNC_4(*VAR_2))
              && FUNC_3(*VAR_2)))
        {
          if (VAR_2 - VAR_5)
            {
              const char *VAR_6
                = FUNC_1(VAR_4, VAR_5, (VAR_2 - VAR_5));

              return FUNC_5
                (VAR_0, ((void*)0),
                 FUNC_0("Safe data '%s' was followed by non-ASCII byte %d: "
                   "unable to convert to/from UTF-8"),
                 VAR_6, *((const unsigned char *) VAR_2));
            }
          else
            {
              return FUNC_5
                (VAR_0, ((void*)0),
                 FUNC_0("Non-ASCII character (code %d) detected, "
                   "and unable to convert to/from UTF-8"),
                 *((const unsigned char *) VAR_2));
            }
        }
    }

  return VAR_1;
}
