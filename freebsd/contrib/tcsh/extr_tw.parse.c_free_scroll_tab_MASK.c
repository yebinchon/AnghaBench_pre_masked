
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct scroll_tab_list {struct scroll_tab_list* element; struct scroll_tab_list* next; } ;


 struct scroll_tab_list* VAR_0 ;
 int FUNC_0 (struct scroll_tab_list*) ;

__attribute__((used)) static void
FUNC_1(void)
{
    struct scroll_tab_list *VAR_1;

    while(VAR_0) {
 VAR_1 = VAR_0;
 VAR_0 = VAR_0->next;
 FUNC_0(VAR_1->element);
 FUNC_0(VAR_1);
    }
}
