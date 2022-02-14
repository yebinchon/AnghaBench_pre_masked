
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int lineno; } ;





 int FUNC_0 (char*) ;
 int FUNC_1 (char*) ;
 int FUNC_2 (char*) ;
 int FUNC_3 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 char* FUNC_4 (int ,int*) ;
 int FUNC_5 (int ,char*) ;
 TYPE_1__* VAR_3 ;

__attribute__((used)) static char *
FUNC_6(void)
{
    char *VAR_4;
    int VAR_5;
    int VAR_6;
    int VAR_7;

    for (;;) {
 VAR_4 = FUNC_4(0, &VAR_5);
 if (VAR_4 == ((void*)0))
     return ((void*)0);

 if (VAR_4[0] != '.')
     return VAR_4;





 switch (FUNC_0(VAR_4)) {
 case 128:

     do {
  VAR_4 = FUNC_4(VAR_2, &VAR_5);
     } while (VAR_4 && FUNC_0(VAR_4) != 129);
     if (VAR_4 == ((void*)0))
  break;
     continue;
 case 129:
     continue;
 case 130:

     VAR_7 = FUNC_2(VAR_4);
     if (VAR_7 == 0)

  break;
     if (VAR_7 < 0)

  continue;

     VAR_6 = VAR_3->lineno;

     do {
  VAR_4 = FUNC_4(VAR_1, &VAR_5);
  if (VAR_4 == ((void*)0)) {
      FUNC_5(VAR_0,
        "Unexpected end of file in for loop.");
      break;
  }
     } while (FUNC_1(VAR_4));

     FUNC_3(VAR_6);

     continue;
 }
 return (VAR_4);
    }
}
