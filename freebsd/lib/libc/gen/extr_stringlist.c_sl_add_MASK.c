
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int sl_cur; int sl_max; char** sl_str; } ;
typedef TYPE_1__ StringList ;


 scalar_t__ VAR_0 ;
 char** FUNC_0 (char**,int) ;

int
FUNC_1(StringList *VAR_1, char *VAR_2)
{
 if (VAR_1->sl_cur == VAR_1->sl_max - 1) {
  VAR_1->sl_max += VAR_0;
  VAR_1->sl_str = FUNC_0(VAR_1->sl_str, VAR_1->sl_max * sizeof(char *));
  if (VAR_1->sl_str == ((void*)0))
   return (-1);
 }
 VAR_1->sl_str[VAR_1->sl_cur++] = VAR_2;
 return (0);
}
