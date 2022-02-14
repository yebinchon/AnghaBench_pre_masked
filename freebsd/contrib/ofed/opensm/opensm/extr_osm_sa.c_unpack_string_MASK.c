
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef char uint8_t ;



__attribute__((used)) static int FUNC_0(char *VAR_0, uint8_t * VAR_1, unsigned VAR_2)
{
 char *VAR_3 = VAR_0;
 char VAR_4 = ' ';

 if (*VAR_3 == '\'' || *VAR_3 == '\"')
  VAR_4 = *VAR_3++;
 while (--VAR_2 && *VAR_3 && *VAR_3 != VAR_4)
  *VAR_1++ = *VAR_3++;
 *VAR_1 = '\0';
 if (*VAR_3 == VAR_4 && VAR_4 != ' ')
  VAR_3++;
 return (int)(VAR_3 - VAR_0);
}
