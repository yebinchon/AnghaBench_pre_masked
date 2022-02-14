
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 char VAR_0 ;

 int VAR_1 ;



__attribute__((used)) static char *
FUNC_0(char *VAR_2)
{
    if ((*VAR_2&0xff) != VAR_0) {
 return VAR_2+1;
    }
    switch (*(VAR_2+1)&0xff) {
    case 132:
    case 131:
    case 129:
    case 128:
 return VAR_2+3;
    case 130:
 {
     char *VAR_3 = VAR_2+2;

     for (;;) {
  if ((*VAR_3++&0xff) == VAR_0) {
      if ((*VAR_3++&0xff) == VAR_1) {
   return VAR_3;
      }
  }
     }
 }
    default:
 return VAR_2+2;
    }
}
