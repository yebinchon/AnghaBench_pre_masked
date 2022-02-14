
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uintmax_t ;
typedef int intmax_t ;



__attribute__((used)) static intmax_t
FUNC_0(const char VAR_0)
{
 intmax_t VAR_1;

 VAR_1 = 0;
 switch (VAR_0) {
 case 'B':
 case 'b':
  VAR_1 = 512;
  break;
 case 'K':
 case 'k':
  VAR_1 = 1 << 10;
  break;
 case 'M':
 case 'm':
  VAR_1 = 1 << 20;
  break;
 case 'G':
 case 'g':
  VAR_1 = 1 << 30;
  break;
 case 'T':
 case 't':
  VAR_1 = (uintmax_t)1 << 40;
  break;
 case 'P':
 case 'p':
  VAR_1 = (uintmax_t)1 << 50;
  break;
 case 'W':
 case 'w':
  VAR_1 = sizeof(int);
  break;
 }

 return (VAR_1);
}
