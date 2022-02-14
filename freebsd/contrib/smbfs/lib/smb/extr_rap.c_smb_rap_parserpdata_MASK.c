
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 scalar_t__ FUNC_0 (char const) ;
 int FUNC_1 (char const*,char**,int) ;

__attribute__((used)) static int
FUNC_2(const char *VAR_1, char **VAR_2, int *VAR_3)
{
 char *VAR_4;
 int VAR_5, VAR_6;

 VAR_6 = 1;
 switch (*VAR_1++) {
     case 'B':
  VAR_5 = 1;
  break;
     case 'W':
  VAR_5 = 2;
  break;
     case 'D':
     case 'O':
     case 'z':
  VAR_5 = 4;
  break;
     default:
  return VAR_0;
 }
 if (FUNC_0(*VAR_1)) {
  VAR_5 *= FUNC_1(VAR_1, &VAR_4, 10);
  VAR_1 = VAR_4;
 }
 *VAR_3 = VAR_5;
 *(const char**)VAR_2 = VAR_1;
 return 0;
}
