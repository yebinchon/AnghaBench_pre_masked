
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 char* VAR_0 ;
 int FUNC_0 (char*,char*,int) ;

void FUNC_1(char *VAR_1, char *VAR_2)
{
    char *VAR_3 = VAR_0;

    if (!VAR_1)
 VAR_1 = "";
    while (*VAR_1) {
 switch (*VAR_1) {

 case '#':
     if (*VAR_2)
  VAR_2++;
     break;

 case '@':
     if (*VAR_2)
  *VAR_3++ = *VAR_2++;
     break;

 default:
     *VAR_3++ = *VAR_1;
     break;
 }
 if (VAR_3 == &VAR_0[sizeof VAR_0 - 1]) {
     *VAR_3 = '\0';
     return;
 }
 VAR_1++;
    }
    if (*VAR_2)
 FUNC_0 (VAR_3, VAR_2,
    sizeof VAR_0 - (VAR_3 - VAR_0));
    else
 *VAR_3 = '\0';
    VAR_0[sizeof VAR_0 - 1] = '\0';
}
