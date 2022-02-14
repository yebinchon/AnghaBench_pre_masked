
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 char* FUNC_0 (char*) ;
 char* FUNC_1 (char*,char) ;
 int FUNC_2 (char*,char*,int) ;
 int FUNC_3 (char*,char*,int) ;
 char* FUNC_4 (char*,char*) ;

__attribute__((used)) static char *FUNC_5(char *VAR_1)
{
       char VAR_2[VAR_0 + 1];
       char VAR_3[VAR_0 + 1];
       char *VAR_4;
       char *VAR_5;

       for (VAR_4 = ((void*)0); (VAR_4 = FUNC_4(VAR_1, "${")); ) {
               VAR_5 = FUNC_1(VAR_4, '}');
               if (VAR_4 < VAR_5) {
                       *VAR_3 = *VAR_2 = '\0';
                       FUNC_2(VAR_3, VAR_4 + 2, VAR_5 - VAR_4 - 2);
                       FUNC_2(VAR_2, VAR_1, VAR_4 - VAR_1);
                       FUNC_2(VAR_2, FUNC_0(VAR_3), VAR_0);
                       FUNC_2(VAR_2, VAR_5 + 1, VAR_0);
                       FUNC_3(VAR_1, VAR_2, VAR_0);
               } else
                       break;
       }

       return VAR_1;
}
