
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int svn_error_t ;
typedef int client_option_t ;
typedef int apr_pool_t ;
typedef int apr_array_header_t ;


 int FUNC_0 (int ) ;
 int * VAR_0 ;
 int FUNC_1 (char*) ;
 int * FUNC_2 (int const*,char const*) ;
 int FUNC_3 (char const**,int const*,int *) ;
 char* FUNC_4 (int const*,char const* const*,int *) ;
 int VAR_1 ;
 scalar_t__ FUNC_5 (char const*,char*) ;
 int FUNC_6 (int ,int *,char*,...) ;
 int FUNC_7 (char const**,char const*,void*,int *) ;

__attribute__((used)) static svn_error_t *
FUNC_8(const client_option_t **VAR_2,
            const apr_array_header_t *VAR_3,
            const char *const *VAR_4,
            const char *VAR_5,
            void *VAR_6,
            apr_pool_t *VAR_7)
{
  const char *VAR_8
    = FUNC_4(VAR_3, VAR_4, VAR_7);
  const char *VAR_9;

  FUNC_0(FUNC_7(&VAR_9, VAR_8, VAR_6, VAR_7));
  if (FUNC_5(VAR_9, "h") == 0 || FUNC_5(VAR_9, "?") == 0)
    {
      const char *VAR_10;

      if (VAR_5)
        FUNC_0(FUNC_6(VAR_1, VAR_7, "\n%s\n",
                                    VAR_5));
      FUNC_0(FUNC_3(&VAR_10, VAR_3, VAR_7));
      FUNC_0(FUNC_6(VAR_1, VAR_7, "\n%s\n", VAR_10));
      *VAR_2 = ((void*)0);
    }
  else
    {
      *VAR_2 = FUNC_2(VAR_3, VAR_9);
      if (! *VAR_2)
        {
          FUNC_0(FUNC_6(VAR_1, VAR_7,
                                      FUNC_1("Unrecognized option.\n\n")));
        }
    }
  return VAR_0;
}
