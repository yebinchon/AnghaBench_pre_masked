
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (char*,char const*,size_t) ;
 int FUNC_1 (char*) ;
 int FUNC_2 (char const*) ;
 char* FUNC_3 (char*,size_t) ;

char *
FUNC_4(const char *VAR_0)
{
    static char *VAR_1 = ((void*)0);
    static size_t VAR_2 = 0;
    size_t VAR_3;

    if (VAR_0 == ((void*)0))
      return ((void*)0);
    VAR_3 = FUNC_2(VAR_0) + 1;
    if (VAR_2 < VAR_3) {
 VAR_1 = FUNC_3(VAR_1, VAR_3);
 VAR_2 = VAR_3;
    }
    FUNC_0(VAR_1, VAR_0, VAR_3);
    FUNC_1(VAR_1);
    return VAR_1;
}
