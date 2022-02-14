
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct scroll_tab_list {struct scroll_tab_list* next; int element; } ;
typedef int Char ;


 int FUNC_0 (int *) ;
 struct scroll_tab_list* VAR_0 ;
 struct scroll_tab_list* FUNC_1 (int) ;

__attribute__((used)) static void
FUNC_2(Char *VAR_1)
{
    struct scroll_tab_list *VAR_2;

    VAR_2 = FUNC_1(sizeof(struct scroll_tab_list));
    VAR_2->element = FUNC_0(VAR_1);
    VAR_2->next = VAR_0;
    VAR_0 = VAR_2;
}
