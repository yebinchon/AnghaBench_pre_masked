
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int FUNC_0 (int ,int ) ;
 size_t VAR_1 ;
 int VAR_2 ;
 size_t VAR_3 ;
 char* FUNC_1 (size_t) ;
 char* FUNC_2 (char*,size_t) ;
 int FUNC_3 (char*,char*,size_t) ;
 int FUNC_4 (int) ;

__attribute__((used)) static int
FUNC_5(char **VAR_4,
            char **VAR_5, size_t *VAR_6, size_t *VAR_7, int VAR_8)
{

    if (!FUNC_4(*VAR_4 != ((void*)0) || VAR_5 != ((void*)0)))
        return 0;


    if (!FUNC_4(*VAR_6 <= *VAR_7))
        return 0;

    if (VAR_5 && *VAR_6 == *VAR_7) {
        if (*VAR_7 > VAR_3 - VAR_1)
            return 0;

        *VAR_7 += VAR_1;
        if (*VAR_5 == ((void*)0)) {
            if ((*VAR_5 = FUNC_1(*VAR_7)) == ((void*)0)) {
                FUNC_0(VAR_0, VAR_2);
                return 0;
            }
            if (*VAR_6 > 0) {
                if (!FUNC_4(*VAR_4 != ((void*)0)))
                    return 0;
                FUNC_3(*VAR_5, *VAR_4, *VAR_6);
            }
            *VAR_4 = ((void*)0);
        } else {
            char *VAR_9;
            VAR_9 = FUNC_2(*VAR_5, *VAR_7);
            if (VAR_9 == ((void*)0))
                return 0;
            *VAR_5 = VAR_9;
        }
    }

    if (*VAR_6 < *VAR_7) {
        if (*VAR_4)
            (*VAR_4)[(*VAR_6)++] = (char)VAR_8;
        else
            (*VAR_5)[(*VAR_6)++] = (char)VAR_8;
    }

    return 1;
}
