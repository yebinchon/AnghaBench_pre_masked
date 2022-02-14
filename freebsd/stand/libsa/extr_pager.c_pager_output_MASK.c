
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 () ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 char* VAR_2 ;
 char* VAR_3 ;
 int FUNC_1 (char*,char*) ;
 int FUNC_2 (char const) ;

int
FUNC_3(const char *VAR_4)
{
    int VAR_5;

    if (VAR_4 == ((void*)0))
 return(0);

    for (;;) {
 if (*VAR_4 == 0)
     return(0);

 FUNC_2(*VAR_4);

 if (*(VAR_4++) == '\n') {
     VAR_0--;
     if (VAR_0 <= 0) {
  FUNC_1("%s", VAR_3);
  VAR_5 = 0;
  while (VAR_5 == 0) {
      switch(FUNC_0()) {
      case '\r':
      case '\n':
   VAR_0 = 1;
   VAR_5 = 1;
   break;
      case ' ':
   VAR_0 = VAR_1;
   VAR_5 = 1;
   break;
      case 'q':
      case 'Q':
   VAR_5 = 2;
   break;
      default:
   break;
      }
  }
  FUNC_1("\r%s\r", VAR_2);
  if (VAR_5 == 2)
      return(1);
     }
 }
    }
}
