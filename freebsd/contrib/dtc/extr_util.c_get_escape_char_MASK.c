
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 char FUNC_0 (char const*,int*) ;
 char FUNC_1 (char const*,int*) ;

char FUNC_2(const char *VAR_0, int *VAR_1)
{
 char VAR_2 = VAR_0[*VAR_1];
 int VAR_3 = *VAR_1 + 1;
 char VAR_4;

 switch (VAR_2) {
 case 'a':
  VAR_4 = '\a';
  break;
 case 'b':
  VAR_4 = '\b';
  break;
 case 't':
  VAR_4 = '\t';
  break;
 case 'n':
  VAR_4 = '\n';
  break;
 case 'v':
  VAR_4 = '\v';
  break;
 case 'f':
  VAR_4 = '\f';
  break;
 case 'r':
  VAR_4 = '\r';
  break;
 case '0':
 case '1':
 case '2':
 case '3':
 case '4':
 case '5':
 case '6':
 case '7':
  VAR_3--;

  VAR_4 = FUNC_1(VAR_0, &VAR_3);
  break;
 case 'x':
  VAR_4 = FUNC_0(VAR_0, &VAR_3);
  break;
 default:
  VAR_4 = VAR_2;
 }

 (*VAR_1) = VAR_3;
 return VAR_4;
}
