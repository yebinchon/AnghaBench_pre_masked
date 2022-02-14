
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {char** ng_str; struct TYPE_2__* ng_next; } ;


 size_t VAR_0 ;
 size_t VAR_1 ;
 size_t VAR_2 ;
 TYPE_1__* VAR_3 ;

int
FUNC_0(char **VAR_4, char **VAR_5, char **VAR_6)
{
 if (VAR_3) {
  *VAR_4 = VAR_3->ng_str[VAR_1];
  *VAR_5 = VAR_3->ng_str[VAR_2];
  *VAR_6 = VAR_3->ng_str[VAR_0];
  VAR_3 = VAR_3->ng_next;
  return (1);
 }
 return (0);
}
