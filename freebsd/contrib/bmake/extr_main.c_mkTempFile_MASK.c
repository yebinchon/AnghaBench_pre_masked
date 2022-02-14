
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int tfile ;


 int VAR_0 ;
 int FUNC_0 (char*,char*,int ) ;
 char* VAR_1 ;
 char* FUNC_1 (char*) ;
 int VAR_2 ;
 char* FUNC_2 () ;
 int FUNC_3 (char*) ;
 int FUNC_4 (char*,int,char*,char const*,...) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (char*) ;

int
FUNC_7(const char *VAR_3, char **VAR_4)
{
    static char *VAR_5 = ((void*)0);
    char VAR_6[VAR_0];
    int VAR_7;

    if (!VAR_3)
 VAR_3 = VAR_1;
    if (!VAR_5)
 VAR_5 = FUNC_2();
    if (VAR_3[0] == '/') {
 FUNC_4(VAR_6, sizeof(VAR_6), "%s", VAR_3);
    } else {
 FUNC_4(VAR_6, sizeof(VAR_6), "%s%s", VAR_5, VAR_3);
    }
    if ((VAR_7 = FUNC_3(VAR_6)) < 0)
 FUNC_0("Could not create temporary file %s: %s", VAR_6, FUNC_5(VAR_2));
    if (VAR_4) {
 *VAR_4 = FUNC_1(VAR_6);
    } else {
 FUNC_6(VAR_6);
    }
    return VAR_7;
}
