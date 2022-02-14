
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct scroll_tab_list {int * element; struct scroll_tab_list* next; } ;
struct Strbuf {scalar_t__ len; } ;
typedef int Char ;


 int FUNC_0 (struct Strbuf*,int *) ;
 int FUNC_1 (struct Strbuf*) ;
 int FUNC_2 (int **,int ) ;
 int FUNC_3 (int **) ;
 size_t VAR_0 ;
 int VAR_1 ;
 int FUNC_4 (int **,int,int,int ) ;
 struct scroll_tab_list* VAR_2 ;
 int VAR_3 ;
 int ** FUNC_5 (int) ;

__attribute__((used)) static void
FUNC_6(struct Strbuf *VAR_4, int VAR_5)
{
    struct scroll_tab_list *VAR_6;
    int VAR_7 = VAR_5;
    Char **VAR_8;

    VAR_8 = FUNC_5(sizeof(Char *) * VAR_5);
    FUNC_2(VAR_8, VAR_3);

    for(VAR_6 = VAR_2; VAR_6 && (VAR_7 >= 0); VAR_6 = VAR_6->next)
 VAR_8[--VAR_7] = VAR_6->element;

    FUNC_4(VAR_8, VAR_5, sizeof(Char *), VAR_1);

    VAR_4->len = 0;
    FUNC_0(VAR_4, VAR_8[VAR_0]);
    FUNC_1(VAR_4);
    FUNC_3(VAR_8);
}
