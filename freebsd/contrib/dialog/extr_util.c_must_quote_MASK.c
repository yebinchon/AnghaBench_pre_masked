
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 char* VAR_1 ;
 int VAR_2 ;
 char* FUNC_0 () ;
 size_t FUNC_1 (char*,char*) ;
 size_t FUNC_2 (char*) ;

__attribute__((used)) static bool
FUNC_3(char *VAR_3)
{
    bool VAR_4 = VAR_0;

    if (*VAR_3 != '\0') {
 size_t VAR_5 = FUNC_2(VAR_3);
 if (FUNC_1(VAR_3, FUNC_0()) != VAR_5)
     VAR_4 = VAR_2;
 else if (FUNC_1(VAR_3, "\n\t ") != VAR_5)
     VAR_4 = VAR_2;
 else
     VAR_4 = (FUNC_1(VAR_3, VAR_1) != VAR_5);
    } else {
 VAR_4 = VAR_2;
    }

    return VAR_4;
}
