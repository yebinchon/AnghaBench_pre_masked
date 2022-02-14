
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ svn_revnum_t ;
typedef int svn_error_t ;
typedef scalar_t__ apr_uint32_t ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int * VAR_2 ;
 int FUNC_0 (char*) ;
 int FUNC_1 (char const*,char const**) ;
 int * FUNC_2 (int ,int *,int ,char const*) ;

svn_error_t *
FUNC_3(svn_revnum_t *VAR_3,
                 const char *VAR_4,
                 const char **VAR_5)
{
  const char *VAR_6;

  svn_revnum_t VAR_7 = (svn_revnum_t)FUNC_1(VAR_4, &VAR_6);

  if (VAR_5)
    *VAR_5 = VAR_4;

  if (VAR_4 == VAR_6)
    return FUNC_2
              (VAR_1, ((void*)0),
               *VAR_4 == '-' ? FUNC_0("Negative revision number found parsing '%s'")
                           : FUNC_0("Invalid revision number found parsing '%s'"),
               VAR_4);



  if (VAR_4 + 10 <= VAR_6)
    {

      if (VAR_4 + 10 < VAR_6)
        return FUNC_2
                  (VAR_1, ((void*)0),
                  FUNC_0("Revision number longer than 10 digits '%s'"), VAR_4);


      if (*VAR_4 > '2' || (apr_uint32_t)VAR_7 > VAR_0)
        return FUNC_2
                  (VAR_1, ((void*)0),
                  FUNC_0("Revision number too large '%s'"), VAR_4);
    }

  if (VAR_5)
    *VAR_5 = VAR_6;

  *VAR_3 = VAR_7;

  return VAR_2;
}
