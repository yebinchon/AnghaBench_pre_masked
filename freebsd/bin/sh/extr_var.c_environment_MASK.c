
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct var {int flags; int text; struct var* next; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 char** FUNC_0 (int) ;
 struct var** VAR_3 ;

char **
FUNC_1(void)
{
 int VAR_4;
 struct var **VAR_5;
 struct var *VAR_6;
 char **VAR_7, **VAR_8;

 VAR_4 = 0;
 for (VAR_5 = VAR_3 ; VAR_5 < VAR_3 + VAR_1 ; VAR_5++) {
  for (VAR_6 = *VAR_5 ; VAR_6 ; VAR_6 = VAR_6->next)
   if ((VAR_6->flags & (VAR_0|VAR_2)) == VAR_0)
    VAR_4++;
 }
 VAR_8 = VAR_7 = FUNC_0((VAR_4 + 1) * sizeof *VAR_7);
 for (VAR_5 = VAR_3 ; VAR_5 < VAR_3 + VAR_1 ; VAR_5++) {
  for (VAR_6 = *VAR_5 ; VAR_6 ; VAR_6 = VAR_6->next)
   if ((VAR_6->flags & (VAR_0|VAR_2)) == VAR_0)
    *VAR_8++ = VAR_6->text;
 }
 *VAR_8 = ((void*)0);
 return VAR_7;
}
