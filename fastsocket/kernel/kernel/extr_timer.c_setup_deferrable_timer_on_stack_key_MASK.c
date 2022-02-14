
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct timer_list {void (* function ) (unsigned long) ;unsigned long data; } ;
struct lock_class_key {int dummy; } ;


 int FUNC_0 (struct timer_list*,char const*,struct lock_class_key*) ;
 int FUNC_1 (struct timer_list*) ;

void FUNC_2(struct timer_list *VAR_0,
      const char *VAR_1,
      struct lock_class_key *VAR_2,
      void (*VAR_3)(unsigned long),
      unsigned long VAR_4)
{
 VAR_0->function = VAR_3;
 VAR_0->data = VAR_4;
 FUNC_0(VAR_0, VAR_1, VAR_2);
 FUNC_1(VAR_0);
}
