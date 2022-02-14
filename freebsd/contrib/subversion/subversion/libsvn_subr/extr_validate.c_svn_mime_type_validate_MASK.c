
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int svn_error_t ;
typedef size_t apr_size_t ;
typedef int apr_pool_t ;


 int VAR_0 ;
 int * VAR_1 ;
 int FUNC_0 (char*) ;
 char* FUNC_1 (char const*,char const) ;
 size_t FUNC_2 (char const*,char*) ;
 size_t FUNC_3 (char const*) ;
 int FUNC_4 (char const) ;
 scalar_t__ FUNC_5 (char const) ;
 scalar_t__ FUNC_6 (char const) ;
 int * FUNC_7 (int ,int *,int ,char const*,...) ;

svn_error_t *
FUNC_8(const char *VAR_2, apr_pool_t *VAR_3)
{



  const apr_size_t VAR_4 = FUNC_2(VAR_2, "; ");
  const apr_size_t VAR_5 = FUNC_3(VAR_2);
  const char *const VAR_6 = FUNC_1(VAR_2, '/');
  apr_size_t VAR_7;
  const char *VAR_8 = "()<>@,;:\\\"/[]?=";

  if (VAR_4 == 0)
    return FUNC_7
      (VAR_0, ((void*)0),
       FUNC_0("MIME type '%s' has empty media type"), VAR_2);

  if (VAR_6 == ((void*)0) || VAR_6 >= &VAR_2[VAR_4])
    return FUNC_7
      (VAR_0, ((void*)0),
       FUNC_0("MIME type '%s' does not contain '/'"), VAR_2);


  for (VAR_7 = 0; VAR_7 < VAR_4; VAR_7++)
    {
      if (&VAR_2[VAR_7] != VAR_6
         && (! FUNC_4(VAR_2[VAR_7])
            || FUNC_5(VAR_2[VAR_7])
            || FUNC_6(VAR_2[VAR_7])
            || (FUNC_1(VAR_8, VAR_2[VAR_7]) != ((void*)0))))
        return FUNC_7
          (VAR_0, ((void*)0),
           FUNC_0("MIME type '%s' contains invalid character '%c' "
             "in media type"),
           VAR_2, VAR_2[VAR_7]);
    }


  for (VAR_7 = 0; VAR_7 < VAR_5; VAR_7++)
    {
      if (FUNC_5(VAR_2[VAR_7]) && VAR_2[VAR_7] != '\t')
        return FUNC_7(
           VAR_0, ((void*)0),
           FUNC_0("MIME type '%s' contains invalid character '0x%02x' "
             "in postfix"),
           VAR_2, VAR_2[VAR_7]);
    }

  return VAR_1;
}
