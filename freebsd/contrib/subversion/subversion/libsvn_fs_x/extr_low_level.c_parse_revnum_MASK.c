
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int svn_revnum_t ;
typedef int svn_error_t ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int * VAR_2 ;
 int FUNC_1 (char*) ;
 int * FUNC_2 (int ,int *,int ) ;
 int FUNC_3 (int *,char const*,char const**) ;

__attribute__((used)) static svn_error_t *
FUNC_4(svn_revnum_t *VAR_3,
             const char **VAR_4)
{
  const char *VAR_5 = *VAR_4;
  if ((VAR_5[0] == '-') && (VAR_5[1] == '1'))
    {
      *VAR_3 = VAR_1;
      VAR_5 += 2;
    }
  else
    {
      FUNC_0(FUNC_3(VAR_3, VAR_5, &VAR_5));
    }

  if (*VAR_5 == ' ')
    ++VAR_5;
  else if (*VAR_5 != '\0')
    return FUNC_2(VAR_0, ((void*)0),
                            FUNC_1("Invalid character in revision number"));

  *VAR_4 = VAR_5;
  return VAR_2;
}
