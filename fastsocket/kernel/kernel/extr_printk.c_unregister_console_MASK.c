
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct console {int flags; struct console* next; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 () ;
 int FUNC_1 (struct console*) ;
 struct console* VAR_2 ;
 int FUNC_2 () ;

int FUNC_3(struct console *VAR_3)
{
        struct console *VAR_4, *VAR_5;
 int VAR_6 = 1;






 FUNC_0();
 if (VAR_2 == VAR_3) {
  VAR_2=VAR_3->next;
  VAR_6 = 0;
 } else if (VAR_2) {
  for (VAR_4=VAR_2->next, VAR_5=VAR_2 ;
       VAR_4; VAR_5=VAR_4, VAR_4=VAR_5->next) {
   if (VAR_4 == VAR_3) {
    VAR_5->next = VAR_4->next;
    VAR_6 = 0;
    break;
   }
  }
 }





 if (VAR_2 != ((void*)0) && VAR_3->flags & VAR_1)
  VAR_2->flags |= VAR_1;

 FUNC_2();
 return VAR_6;
}
