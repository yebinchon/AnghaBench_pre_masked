
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int va_list ;
typedef enum MAD_FIELDS { ____Placeholder_MAD_FIELDS } MAD_FIELDS ;


 int FUNC_0 (int) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (char*,int ,size_t) ;
 int FUNC_3 (char*,size_t,char const*,int ) ;

int FUNC_4(char *VAR_0, size_t VAR_1, enum MAD_FIELDS VAR_2, int VAR_3,
     const char *VAR_4, va_list VAR_5)
{
 int VAR_6, VAR_7, VAR_8;

 VAR_6 = FUNC_1(FUNC_0(VAR_2));
 if (VAR_6 + 2 > VAR_1 || VAR_3 + 1 > VAR_1)
  return 0;

 FUNC_2(VAR_0, FUNC_0(VAR_2), VAR_1);
 VAR_0[VAR_6] = ':';
 for (VAR_7 = VAR_6+1; VAR_7 < VAR_3+1; VAR_7++) {
  VAR_0[VAR_7] = '.';
 }

 VAR_8 = FUNC_3(&VAR_0[VAR_3+1], VAR_1 - VAR_3, VAR_4, VAR_5);
 if (VAR_8 >= VAR_1 - VAR_3)
  VAR_0[VAR_1] = '\0';

 return VAR_8 + VAR_3;
}
