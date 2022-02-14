
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ wchar_t ;


 int FUNC_0 (scalar_t__*,char const*,int) ;

__attribute__((used)) static wchar_t
FUNC_1(const char **VAR_0)
{
 wchar_t VAR_1;
 int VAR_2;

 VAR_2 = FUNC_0(&VAR_1, *VAR_0, 4);
 if (VAR_2 == 0)
  return 0;
 else if (VAR_2 == -1)
  VAR_1 = 0;
 else
  *VAR_0 += VAR_2;
 return VAR_1;
}
