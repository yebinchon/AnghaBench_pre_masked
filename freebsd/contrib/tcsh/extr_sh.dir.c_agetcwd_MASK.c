
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int Char ;


 int VAR_0 ;
 size_t VAR_1 ;
 int * FUNC_0 (char*) ;
 int VAR_2 ;
 int * FUNC_1 (char*,size_t) ;
 int FUNC_2 (char*) ;
 char* FUNC_3 (size_t) ;
 char* FUNC_4 (char*,size_t) ;

__attribute__((used)) static Char *
FUNC_5(void)
{
    char *VAR_3;
    Char *VAR_4;
    size_t VAR_5;

    VAR_5 = VAR_1;
    VAR_3 = FUNC_3(VAR_5);
    while (FUNC_1(VAR_3, VAR_5) == ((void*)0)) {
 int VAR_6;

 VAR_6 = VAR_2;
 if (VAR_6 != VAR_0) {
     FUNC_2(VAR_3);
     VAR_2 = VAR_6;
     return ((void*)0);
 }
 VAR_5 *= 2;
 VAR_3 = FUNC_4(VAR_3, VAR_5);
    }
    if (*VAR_3 == '\0') {
 FUNC_2(VAR_3);
 return ((void*)0);
    }
    VAR_4 = FUNC_0(VAR_3);
    FUNC_2(VAR_3);
    return VAR_4;
}
