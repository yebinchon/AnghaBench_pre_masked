
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int buf ;


 int VAR_0 ;
 int FUNC_0 (int) ;
 int VAR_1 ;
 int FUNC_1 (char const*,int ) ;
 scalar_t__ FUNC_2 (char*) ;
 int FUNC_3 (char*,char const*,char*) ;
 size_t FUNC_4 (int,char*,int) ;
 char* FUNC_5 (int ) ;

int
FUNC_6(const char *VAR_2)
{
    char VAR_3[80];
    size_t VAR_4;
    int VAR_5;
    int VAR_6;

    if ((VAR_5 = FUNC_1(VAR_2, VAR_0)) == -1) {
 FUNC_3("can't open '%s': %s\n", VAR_2, FUNC_5(VAR_1));
 return(-1);
    }

    for (;;) {
 VAR_4 = FUNC_4(VAR_5, VAR_3, sizeof(VAR_3) - 1);
 if (VAR_4 == -1) {
     VAR_6 = -1;
     break;
 }
 if (VAR_4 == 0) {
     VAR_6 = 0;
     break;
 }
 VAR_3[VAR_4] = 0;
 if (FUNC_2(VAR_3)) {
     VAR_6 = 1;
     break;
 }
    }
    FUNC_0(VAR_5);
    return(VAR_6);
}
