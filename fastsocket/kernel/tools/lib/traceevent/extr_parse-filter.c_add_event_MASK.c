
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct event_list {struct event_format* event; struct event_list* next; } ;
struct event_format {int dummy; } ;


 struct event_list* FUNC_0 (int) ;

__attribute__((used)) static void FUNC_1(struct event_list **VAR_0,
        struct event_format *VAR_1)
{
 struct event_list *VAR_2;

 VAR_2 = FUNC_0(sizeof(*VAR_2));
 VAR_2->next = *VAR_0;
 *VAR_0 = VAR_2;
 VAR_2->event = VAR_1;
}
