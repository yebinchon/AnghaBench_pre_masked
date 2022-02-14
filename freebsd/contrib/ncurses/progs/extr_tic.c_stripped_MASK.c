
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (char) ;
 int FUNC_1 (char*) ;
 scalar_t__ FUNC_2 (int ) ;
 char* FUNC_3 (char*) ;
 size_t FUNC_4 (char*) ;

__attribute__((used)) static char *
FUNC_5(char *VAR_0)
{
    char *VAR_1 = 0;

    while (FUNC_2(FUNC_0(*VAR_0)))
 VAR_0++;

    if (*VAR_0 != '\0') {
 size_t VAR_2;

 if ((VAR_1 = FUNC_3(VAR_0)) == ((void*)0)) {
     FUNC_1("strdup");
 } else {
     VAR_2 = FUNC_4(VAR_1);
     while (--VAR_2 != 0 && FUNC_2(FUNC_0(VAR_1[VAR_2])))
  VAR_1[VAR_2] = '\0';
 }
    }
    return VAR_1;
}
