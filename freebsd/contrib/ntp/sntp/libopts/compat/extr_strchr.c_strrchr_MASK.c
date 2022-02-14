
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (char const*) ;

__attribute__((used)) static char *
FUNC_1(char const *VAR_0, int VAR_1)
{
    char const *VAR_2 = VAR_0 + FUNC_0(VAR_0);

    for (;;) {
        if (--VAR_2 < VAR_0)
            break;

        if ((unsigned char)*VAR_2 == (unsigned char)VAR_1)
            return VAR_2;
    }
    return ((void*)0);
}
