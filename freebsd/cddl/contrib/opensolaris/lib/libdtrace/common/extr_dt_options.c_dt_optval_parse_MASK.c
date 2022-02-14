
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int dtrace_optval_t ;


 scalar_t__ VAR_0 ;
 size_t FUNC_0 (char const*) ;
 int FUNC_1 (char const*,char**,int ) ;

__attribute__((used)) static int
FUNC_2(const char *VAR_1, dtrace_optval_t *VAR_2)
{
 dtrace_optval_t VAR_3 = 1;
 size_t VAR_4;
 char *VAR_5;

 VAR_4 = FUNC_0(VAR_1);
 VAR_0 = 0;

 switch (VAR_1[VAR_4 - 1]) {
 case 't':
 case 'T':
  VAR_3 *= 1024;

 case 'g':
 case 'G':
  VAR_3 *= 1024;

 case 'm':
 case 'M':
  VAR_3 *= 1024;

 case 'k':
 case 'K':
  VAR_3 *= 1024;

 default:
  break;
 }

 VAR_0 = 0;
 *VAR_2 = FUNC_1(VAR_1, &VAR_5, 0) * VAR_3;

 if ((VAR_3 > 1 && VAR_5 != &VAR_1[VAR_4 - 1]) || (VAR_3 == 1 && *VAR_5 != '\0') ||
     *VAR_2 < 0 || VAR_0 != 0)
  return (-1);

 return (0);
}
