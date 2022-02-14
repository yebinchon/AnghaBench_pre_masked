
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 char* FUNC_0 (char*) ;

__attribute__((used)) static void
FUNC_1(char **VAR_0)
{
    for (; *VAR_0; ++VAR_0) {
 char *VAR_1 = VAR_0[0];

 if (VAR_1[0] == '-' && VAR_1[1] == '\0') {
     VAR_0[0] = FUNC_0("-q");
     continue;
 }

 if ((VAR_1[0] != '-')
     || (VAR_0[1] && VAR_0[1][0] != '-')
     || (VAR_1[1] != 'e' && VAR_1[1] != 'i' && VAR_1[1] != 'k')
     || (VAR_1[2] != '\0'))
     continue;
 switch (VAR_0[0][1]) {
 case 'e':
     VAR_0[0] = FUNC_0("-e^H");
     break;
 case 'i':
     VAR_0[0] = FUNC_0("-i^C");
     break;
 case 'k':
     VAR_0[0] = FUNC_0("-k^U");
     break;
 }
    }
}
