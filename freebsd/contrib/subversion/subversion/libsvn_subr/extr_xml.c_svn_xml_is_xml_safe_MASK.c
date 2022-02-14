
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int svn_boolean_t ;
typedef int apr_size_t ;


 int VAR_0 ;
 unsigned char VAR_1 ;
 unsigned char VAR_2 ;
 unsigned char VAR_3 ;
 unsigned char VAR_4 ;
 int VAR_5 ;
 scalar_t__ FUNC_0 (unsigned char) ;
 int FUNC_1 (char const*,int) ;

svn_boolean_t
FUNC_2(const char *VAR_6, apr_size_t VAR_7)
{
  const char *VAR_8 = VAR_6 + VAR_7;
  const char *VAR_9;

  if (! FUNC_1(VAR_6, VAR_7))
    return VAR_0;

  for (VAR_9 = VAR_6; VAR_9 < VAR_8; VAR_9++)
    {
      unsigned char VAR_10 = *VAR_9;

      if (FUNC_0(VAR_10))
        {
          if ((VAR_10 != VAR_4)
              && (VAR_10 != VAR_3)
              && (VAR_10 != VAR_1)
              && (VAR_10 != VAR_2))
            return VAR_0;
        }
    }
  return VAR_5;
}
