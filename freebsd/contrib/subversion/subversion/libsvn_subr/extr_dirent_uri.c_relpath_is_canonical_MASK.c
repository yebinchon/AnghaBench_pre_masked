
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int svn_boolean_t ;
typedef int apr_size_t ;


 int VAR_0 ;
 int VAR_1 ;
 char* FUNC_0 (char const*,char,int) ;
 char* FUNC_1 (char const*,char) ;
 int FUNC_2 (char const*) ;

__attribute__((used)) static svn_boolean_t
FUNC_3(const char *VAR_2)
{
  const char *VAR_3, *VAR_4 = VAR_2;
  apr_size_t VAR_5, VAR_6;
  unsigned VAR_7 = 0;
  if (*VAR_4 == '/')
    return VAR_0;

  if (VAR_4[0] == '.' && (VAR_4[1] == '/' || VAR_4[1] == '\0'))
    return VAR_0;


  VAR_6 = FUNC_2(VAR_4);
  if (VAR_6 < 2)
    return VAR_1;


  if (VAR_4[VAR_6-1] == '/' || (VAR_4[VAR_6-1] == '.' && VAR_4[VAR_6-2] == '/'))
    return VAR_0;





  for (VAR_3 = FUNC_0(VAR_4, '.', VAR_6);
       VAR_3;
       VAR_3 = FUNC_1(VAR_3+1, '.'))
    if (VAR_3 > VAR_4 && VAR_3[-1] == '/' && VAR_3[1] == '/')
      return VAR_0;


  for (VAR_5 = 0; VAR_5 < VAR_6 - 1; ++VAR_5)
    {
      VAR_7 = ((VAR_7 & 0xff) << 8) + (unsigned char)VAR_4[VAR_5];
      if (VAR_7 == 0x101 * (unsigned char)('/'))
        return VAR_0;
    }

  return VAR_1;
}
