
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_char ;


 int FUNC_0 (int) ;
 scalar_t__ FUNC_1 (int) ;

__attribute__((used)) static int
FUNC_2(u_char **VAR_0, u_char *VAR_1) {
        int VAR_2, VAR_3;
        int VAR_4 = 0;
        int VAR_5 = 0;

        for (VAR_3 = 0; *VAR_0 <= VAR_1; ) {
                VAR_2 = **VAR_0;
                if (FUNC_1(VAR_2) || VAR_2 == '\0') {
                        if (VAR_4)
                                break;
                        else {
                                (*VAR_0)++;
                                continue;
                        }
                }
                if (VAR_2 == ';') {
                        while ((*VAR_0 <= VAR_1) &&
          ((VAR_2 = **VAR_0) != '\n'))
     (*VAR_0)++;
                        if (VAR_4)
                                break;
                        continue;
                }
                if (!FUNC_0(VAR_2)) {
                        if (VAR_2 == ')' && VAR_4) {
                                (*VAR_0)--;
                                break;
                        }
   return (-1);
                }
                (*VAR_0)++;
                VAR_3 = VAR_3 * 10 + (VAR_2 - '0');
                VAR_4 = 1;
        }
        return (VAR_3 + VAR_5);
}
