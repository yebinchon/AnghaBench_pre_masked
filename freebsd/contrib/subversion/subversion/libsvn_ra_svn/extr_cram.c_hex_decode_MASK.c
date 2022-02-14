
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int svn_boolean_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (char const) ;

__attribute__((used)) static svn_boolean_t FUNC_1(unsigned char *VAR_3, const char *VAR_4)
{
  int VAR_5, VAR_6, VAR_7;

  for (VAR_5 = 0; VAR_5 < VAR_0; VAR_5++)
    {
      VAR_6 = FUNC_0(VAR_4[2 * VAR_5]);
      VAR_7 = FUNC_0(VAR_4[2 * VAR_5 + 1]);
      if (VAR_6 == -1 || VAR_7 == -1)
        return VAR_1;
      VAR_3[VAR_5] = (unsigned char)((VAR_6 << 4) | VAR_7);
    }
  return VAR_2;
}
