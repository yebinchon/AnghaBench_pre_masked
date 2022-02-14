
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 scalar_t__ VAR_0 ;
 int FUNC_0 (int) ;
 scalar_t__ VAR_1 ;
 size_t FUNC_1 (char const*) ;
 float FUNC_2 (char const*,char**) ;
 scalar_t__ FUNC_3 (char const*,char**,int) ;

__attribute__((used)) static int
FUNC_4(const char *VAR_2, char **VAR_3, const char *VAR_4)
{
 int VAR_5;
 float VAR_6;
 size_t VAR_7;
 const char *VAR_8;
 int VAR_9, VAR_10;

 FUNC_0(VAR_1 == 0);

 VAR_7 = FUNC_1(VAR_2);

 FUNC_0(VAR_7 > 0);
 if (VAR_4[2] != '\0' && VAR_4[2] >= '0' && VAR_4[2] <= '9')
  VAR_9 = VAR_4[2] - '0';
 else
  VAR_9 = 1;
 VAR_8 = &VAR_2[VAR_7 - 1];
 if (*VAR_8 == 'C' || *VAR_8 == 'F' || *VAR_8 == 'K') {
  VAR_6 = FUNC_2(VAR_2, VAR_3);
  if (*VAR_3 != VAR_2 && *VAR_3 == VAR_8 && VAR_1 == 0) {
   if (*VAR_8 == 'F')
    VAR_6 = (VAR_6 - 32) * 5 / 9;
   *VAR_3 = ((void*)0);
   if (*VAR_8 != 'K')
    VAR_6 += 273.15;
   for (VAR_10 = 0; VAR_10 < VAR_9; VAR_10++)
    VAR_6 *= 10.0;
   return ((int)(VAR_6 + 0.5));
  }
 } else {

  VAR_5 = (int)FUNC_3(VAR_2, VAR_3, 10);
  if (*VAR_3 != VAR_2 && *VAR_3 == VAR_8 && VAR_1 == 0) {
   *VAR_3 = ((void*)0);
   return (VAR_5);
  }
 }

 VAR_1 = VAR_0;
 return (0);
}
