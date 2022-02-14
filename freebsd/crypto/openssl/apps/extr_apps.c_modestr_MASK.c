
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (int) ;
 int FUNC_1 (int) ;

__attribute__((used)) static const char *FUNC_2(char VAR_0, int VAR_1)
{
    FUNC_0(VAR_0 == 'a' || VAR_0 == 'r' || VAR_0 == 'w');

    switch (VAR_0) {
    case 'a':
        return FUNC_1(VAR_1) ? "a" : "ab";
    case 'r':
        return FUNC_1(VAR_1) ? "r" : "rb";
    case 'w':
        return FUNC_1(VAR_1) ? "w" : "wb";
    }

    return ((void*)0);
}
