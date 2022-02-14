
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 char* VAR_0 ;
 char* VAR_1 ;
 char* VAR_2 ;
 int FUNC_0 (char**) ;
 scalar_t__ FUNC_1 (char) ;

__attribute__((used)) static void FUNC_2(char * VAR_3, char * VAR_4)
{
 char *VAR_5[200];
        int VAR_6, VAR_7 = 0;
        int VAR_8 = 1;
 VAR_5[VAR_7++] = VAR_2;
 VAR_5[VAR_7++] = VAR_0;


        for (VAR_6=0; VAR_4[VAR_6]; VAR_6++) {
                if (FUNC_1(VAR_4[VAR_6])) {
                        VAR_4[VAR_6] = '\0';
                        VAR_8 = 1;
                        continue;
                }
                if (VAR_8) {
                        VAR_8 = 0;
                        VAR_5[VAR_7++] = VAR_1;
                        VAR_5[VAR_7++] = &VAR_4[VAR_6];
                }
        }
 VAR_5[VAR_7++] = VAR_3;
 VAR_5[VAR_7] = ((void*)0);
 FUNC_0(VAR_5);
}
