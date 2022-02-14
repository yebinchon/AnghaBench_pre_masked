
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int PARSE_LINE ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (char) ;
 scalar_t__ FUNC_1 (int ) ;
 int FUNC_2 (char*,int) ;
 scalar_t__ FUNC_3 (char*) ;

__attribute__((used)) static PARSE_LINE
FUNC_4(char *VAR_3, char **VAR_4, char **VAR_5)
{
    int VAR_6 = 0;


    VAR_6 = FUNC_2(VAR_3, VAR_6);

    if (VAR_3[VAR_6] == '\0')
 return VAR_0;
    else if (VAR_3[VAR_6] == '#')
 return VAR_0;
    else if (VAR_3[VAR_6] == '=')
 return VAR_2;


    *VAR_4 = VAR_3 + VAR_6++;


    while (!FUNC_1(FUNC_0(VAR_3[VAR_6])) && VAR_3[VAR_6] != '=' && VAR_3[VAR_6] != '\0')
 VAR_6++;

    if (VAR_3[VAR_6] == '\0')
 return VAR_2;
    else if (VAR_3[VAR_6] == '=')
 VAR_3[VAR_6++] = '\0';
    else {
 VAR_3[VAR_6++] = '\0';


 VAR_6 = FUNC_2(VAR_3, VAR_6);

 if (VAR_3[VAR_6] != '=')
     return VAR_2;
 else
     VAR_6++;
    }


    VAR_6 = FUNC_2(VAR_3, VAR_6);

    if (VAR_3[VAR_6] == '\0')
 return VAR_2;
    else
 *VAR_5 = VAR_3 + VAR_6;


    VAR_6 = (int) FUNC_3(*VAR_5) - 1;
    while (FUNC_1(FUNC_0((*VAR_5)[VAR_6])) && VAR_6 > 0)
 VAR_6--;
    (*VAR_5)[VAR_6 + 1] = '\0';

    return VAR_1;
}
