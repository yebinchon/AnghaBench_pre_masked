
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef unsigned int uint64_t ;


 unsigned int FUNC_0 (char const*,char**,int ) ;
 int FUNC_1 (unsigned char) ;

int
FUNC_2(const char *VAR_0, uint64_t *VAR_1)
{
 char *VAR_2;
 uint64_t VAR_3;
 unsigned VAR_4;

 VAR_3 = FUNC_0(VAR_0, &VAR_2, 0);

 switch (FUNC_1((unsigned char)*VAR_2)) {
 case 'e':
  VAR_4 = 60;
  break;
 case 'p':
  VAR_4 = 50;
  break;
 case 't':
  VAR_4 = 40;
  break;
 case 'g':
  VAR_4 = 30;
  break;
 case 'm':
  VAR_4 = 20;
  break;
 case 'k':
  VAR_4 = 10;
  break;
 case 'b':
 case '\0':
  *VAR_1 = VAR_3;
  return (0);
 default:

  return (-1);
 }

 if ((VAR_3 << VAR_4) >> VAR_4 != VAR_3) {

  return (-1);
 }
 *VAR_1 = VAR_3 << VAR_4;
 return (0);
}
