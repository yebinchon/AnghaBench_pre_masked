
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef char WCHAR ;
typedef int DWORD ;


 int VAR_0 ;
 char* VAR_1 ;
 int FUNC_0 (char*,char*,int) ;
 char* VAR_2 ;
 int FUNC_1 (int ,int ,char*,int,char*,int,int *,int *) ;
 void* FUNC_2 (int) ;
 char* FUNC_3 (char*) ;
 int FUNC_4 (char*,char*) ;
 int FUNC_5 (char*,char*) ;
 size_t FUNC_6 (char*) ;

const char *FUNC_7(char *VAR_3, size_t VAR_4)
{
    char *VAR_5 = ((void*)0);
    size_t VAR_6;
    int VAR_7 = 1;
    if ((VAR_5 = FUNC_3("RANDFILE")) == ((void*)0) || *VAR_5 == '\0') {
        VAR_7 = 0;
        VAR_5 = FUNC_3("HOME");
    }






    if (VAR_5 == ((void*)0) || *VAR_5 == '\0')
        return ((void*)0);

    VAR_6 = FUNC_6(VAR_5);
    if (VAR_7) {
        if (VAR_6 + 1 >= VAR_4)
            return ((void*)0);
        FUNC_5(VAR_3, VAR_5);
    } else {
        if (VAR_6 + 1 + FUNC_6(VAR_2) + 1 >= VAR_4)
            return ((void*)0);
        FUNC_5(VAR_3, VAR_5);

        FUNC_4(VAR_3, "/");

        FUNC_4(VAR_3, VAR_2);
    }

    return VAR_3;
}
