
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ Boolean ;


 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_0 (char) ;
 scalar_t__ VAR_1 ;
 scalar_t__ FUNC_1 (char*,char*,int) ;

Boolean
FUNC_2(char *VAR_2)
{
    Boolean VAR_3 = VAR_0;
    char VAR_4;
    int VAR_5 = 0;






    for (;(*VAR_2 == ' ') || (*VAR_2 == '\t'); VAR_2++)
 continue;


    while ((VAR_4 = *VAR_2++) != 0) {
 if (VAR_4 == '(' || VAR_4 == '{') {
     VAR_5++;
     continue;
 }
 if (VAR_4 == ')' || VAR_4 == '}') {
     VAR_5--;
     continue;
 }
 if (VAR_5 != 0)
     continue;
 while (VAR_4 == ' ' || VAR_4 == '\t') {
     VAR_4 = *VAR_2++;
     VAR_3 = VAR_1;
 }






 if (VAR_4 == '=')
     return VAR_1;
 if (*VAR_2 == '=' && (((VAR_4) == '+') || ((VAR_4) == ':') || ((VAR_4) == '?') || ((VAR_4) == '!')))
     return VAR_1;
 if (VAR_3)
     return VAR_0;
    }

    return VAR_0;
}
