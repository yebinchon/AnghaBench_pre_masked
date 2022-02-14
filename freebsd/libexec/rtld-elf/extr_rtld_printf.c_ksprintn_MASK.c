
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uintmax_t ;


 char FUNC_0 (int) ;
 char FUNC_1 (int) ;

__attribute__((used)) static char *
FUNC_2(char *VAR_0, uintmax_t VAR_1, int VAR_2, int *VAR_3, int VAR_4)
{
 char *VAR_5, VAR_6;

 VAR_5 = VAR_0;
 *VAR_5 = '\0';
 do {
  VAR_6 = VAR_4 ? FUNC_1(VAR_1 % VAR_2) :
      FUNC_0(VAR_1 % VAR_2);
  *++VAR_5 = VAR_6;
 } while (VAR_1 /= VAR_2);
 if (VAR_3)
  *VAR_3 = VAR_5 - VAR_0;
 return (VAR_5);
}
