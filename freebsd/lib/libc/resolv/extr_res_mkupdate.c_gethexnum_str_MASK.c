
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_char ;


 int FUNC_0 (int**,int*) ;
 scalar_t__ FUNC_1 (int) ;
 scalar_t__ FUNC_2 (int) ;
 int FUNC_3 (int) ;
 scalar_t__ FUNC_4 (char*,char*,int) ;
 char FUNC_5 (int) ;

__attribute__((used)) static int
FUNC_6(u_char **VAR_0, u_char *VAR_1) {
        int VAR_2, VAR_3;
        int VAR_4 = 0;
        int VAR_5 = 0;

 if (*VAR_0 + 2 >= VAR_1 || FUNC_4((char *)*VAR_0, "0x", 2) != 0)
  return FUNC_0(VAR_0, VAR_1);
 (*VAR_0)+=2;
        for (VAR_3 = 0; *VAR_0 <= VAR_1; ) {
                VAR_2 = **VAR_0;
                if (FUNC_2(VAR_2) || VAR_2 == '\0') {
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
                if (!FUNC_3(VAR_2)) {
                        if (VAR_2 == ')' && VAR_4) {
                                (*VAR_0)--;
                                break;
                        }
   return (-1);
                }
                (*VAR_0)++;
  if (FUNC_1(VAR_2))
                 VAR_3 = VAR_3 * 16 + (VAR_2 - '0');
  else
   VAR_3 = VAR_3 * 16 + (FUNC_5(VAR_2) - 'a' + 10);
                VAR_4 = 1;
        }
        return (VAR_3 + VAR_5);
}
