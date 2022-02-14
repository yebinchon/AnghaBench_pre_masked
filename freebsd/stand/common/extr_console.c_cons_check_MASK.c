
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {char* c_name; } ;


 int FUNC_0 (char*) ;
 TYPE_1__** VAR_0 ;
 int FUNC_1 (char*) ;
 int FUNC_2 (char*,...) ;
 char* FUNC_3 (char const*) ;
 char* FUNC_4 (char**,char*) ;

__attribute__((used)) static int
FUNC_5(const char *VAR_1)
{
    int VAR_2, VAR_3, VAR_4;
    char *VAR_5, *VAR_6, *VAR_7;

    VAR_6 = VAR_7 = FUNC_3(VAR_1);
    VAR_3 = VAR_4 = 0;
    while (VAR_7 != ((void*)0)) {
 VAR_5 = FUNC_4(&VAR_7, " ,");
 if (*VAR_5 != '\0') {
     VAR_2 = FUNC_0(VAR_5);
     if (VAR_2 == -1) {
  FUNC_2("console %s is invalid!\n", VAR_5);
  VAR_4++;
     } else {
  VAR_3++;
     }
 }
    }

    FUNC_1(VAR_6);

    if (VAR_3 == 0)
 FUNC_2("no valid consoles!\n");

    if (VAR_3 == 0 || VAR_4 != 0) {
 FUNC_2("Available consoles:\n");
 for (VAR_2 = 0; VAR_0[VAR_2] != ((void*)0); VAR_2++)
     FUNC_2("    %s\n", VAR_0[VAR_2]->c_name);
    }

    return (VAR_3);
}
