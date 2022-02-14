
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 unsigned long long FUNC_0 (char const*,char**,int ) ;

unsigned long long FUNC_1(const char *VAR_0, char **VAR_1)
{
 char *VAR_2;

 unsigned long long VAR_3 = FUNC_0(VAR_0, &VAR_2, 0);

 switch (*VAR_2) {
 case 'G':
 case 'g':
  VAR_3 <<= 10;
 case 'M':
 case 'm':
  VAR_3 <<= 10;
 case 'K':
 case 'k':
  VAR_3 <<= 10;
  VAR_2++;
 default:
  break;
 }

 if (VAR_1)
  *VAR_1 = VAR_2;

 return VAR_3;
}
