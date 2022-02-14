
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int value ;
typedef int quad_t ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (char const*,char*,int) ;
 int FUNC_1 (char*,char**,int ) ;

int
FUNC_2(const char *VAR_2, quad_t *VAR_3)
{
 char VAR_4[VAR_0 + 1 + VAR_1 + 1];
 char *VAR_5;
 quad_t VAR_6;

 if (!FUNC_0(VAR_2, VAR_4, sizeof(VAR_4)))
  return (0);
 VAR_6 = FUNC_1(VAR_4, &VAR_5, 0);
 if (VAR_5 == VAR_4 || (VAR_5[0] != '\0' && VAR_5[1] != '\0'))
  return (0);
 switch (VAR_5[0]) {
 case 't': case 'T':
  VAR_6 *= 1024;

 case 'g': case 'G':
  VAR_6 *= 1024;

 case 'm': case 'M':
  VAR_6 *= 1024;

 case 'k': case 'K':
  VAR_6 *= 1024;
 case '\0':
  break;
 default:
  return (0);
 }
 *VAR_3 = VAR_6;
 return (1);
}
