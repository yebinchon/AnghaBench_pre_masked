
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef void* u_char ;


 scalar_t__ FUNC_0 (int) ;

__attribute__((used)) static int
FUNC_1(char *VAR_0, int VAR_1, u_char **VAR_2, u_char *VAR_3) {
        char *VAR_4;
        int VAR_5;

        for (VAR_4 = VAR_0; *VAR_2 <= VAR_3; ) {
                VAR_5 = **VAR_2;
                if (FUNC_0(VAR_5) || VAR_5 == '\0') {
                        if (VAR_4 != VAR_0)
                                break;
                        else {
                                (*VAR_2)++;
                                continue;
                        }
                }
                (*VAR_2)++;
                if (VAR_4 >= VAR_0+VAR_1-1)
                        break;
                *VAR_4++ = (u_char)VAR_5;
        }
        *VAR_4 = '\0';
        return (VAR_4 != VAR_0);
}
