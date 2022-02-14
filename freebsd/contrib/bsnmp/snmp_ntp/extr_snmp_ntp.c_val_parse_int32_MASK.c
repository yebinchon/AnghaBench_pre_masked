
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef long int32_t ;


 scalar_t__ VAR_0 ;
 long FUNC_0 (char const*,char**,int) ;

__attribute__((used)) static int
FUNC_1(const char *VAR_1, int32_t *VAR_2, int32_t VAR_3, int32_t VAR_4, int VAR_5)
{
 long VAR_6;
 char *VAR_7;

 VAR_0 = 0;
 VAR_6 = FUNC_0(VAR_1, &VAR_7, VAR_5);
 if (VAR_0 != 0 || *VAR_7 != '\0')
  return (0);
 if (VAR_6 < VAR_3 || VAR_6 > VAR_4)
  return (0);
 *VAR_2 = (int32_t)VAR_6;
 return (1);
}
