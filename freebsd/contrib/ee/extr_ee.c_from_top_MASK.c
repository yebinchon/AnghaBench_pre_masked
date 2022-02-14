
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct text {struct text* next_line; } ;


 int VAR_0 ;
 struct text* VAR_1 ;
 struct text* VAR_2 ;

void
FUNC_0()
{
 struct text *VAR_3 = VAR_2;
 int VAR_4 = 1;

 while ((VAR_3 != ((void*)0)) && (VAR_3 != VAR_1))
 {
  VAR_4++;
  VAR_3 = VAR_3->next_line;
 }
 VAR_0 = VAR_4;
}
