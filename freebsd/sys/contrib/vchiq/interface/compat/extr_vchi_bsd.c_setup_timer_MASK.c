
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct timer_list {void (* function ) (unsigned long) ;unsigned long data; } ;


 int FUNC_0 (struct timer_list*) ;

void
FUNC_1(struct timer_list *VAR_0, void (*VAR_1)(unsigned long), unsigned long VAR_2)
{
 VAR_0->function = VAR_1;
 VAR_0->data = VAR_2;
 FUNC_0(VAR_0);
}
