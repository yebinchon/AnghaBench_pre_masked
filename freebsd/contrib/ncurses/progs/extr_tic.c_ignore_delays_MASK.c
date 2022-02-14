
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 char* FUNC_0 (char*) ;

__attribute__((used)) static char *
FUNC_1(char *VAR_0)
{
    int VAR_1 = 0;

    do {
 switch (*VAR_0) {
 case '$':
     if (VAR_1 == 0)
  VAR_1 = 1;
     break;
 case '<':
     if (VAR_1 == 1)
  VAR_1 = 2;
     break;
 case '\0':
     VAR_1 = 0;
     break;
 default:
     if (VAR_1) {
  VAR_0 = FUNC_0(VAR_0);
  if (*VAR_0 == '>')
      ++VAR_0;
  VAR_1 = 0;
     }
     break;
 }
 if (VAR_1)
     ++VAR_0;
    } while (VAR_1);
    return VAR_0;
}
