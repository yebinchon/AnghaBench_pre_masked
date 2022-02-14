
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ Char ;


 int FUNC_0 (scalar_t__) ;
 int FUNC_1 (char) ;
 int FUNC_2 (scalar_t__) ;

__attribute__((used)) static void
FUNC_3(Char **VAR_0)
{
    int VAR_1, VAR_2;
    Char *VAR_3;

    for (; *VAR_0; VAR_0++) {
 FUNC_1('\'');
 for (VAR_2 = 0, VAR_3 = *VAR_0; *VAR_3; VAR_3++) {
     VAR_1 = FUNC_0(*VAR_3);
     if (VAR_1 && VAR_2)
  continue;
     FUNC_2(*VAR_3);
     VAR_2 = VAR_1;
 }
 FUNC_1('\'');
 if (VAR_0[1])
     FUNC_1(' ');
    }
}
