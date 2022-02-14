
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int * FUNC_0 (char const*,char const*) ;
 char* FUNC_1 (char const*,char) ;

__attribute__((used)) static int
FUNC_2(const char *VAR_0, const char *VAR_1)
{
        if (VAR_0 == ((void*)0) || VAR_1 == ((void*)0) || *VAR_1 == '\0')
                return 1;
        while (*VAR_1 != '\0') {
                if (FUNC_0(VAR_1, VAR_0) != ((void*)0))
                        return 1;
                VAR_1 = FUNC_1(VAR_1, '\0') + 1;
        }
        return 0;
}
