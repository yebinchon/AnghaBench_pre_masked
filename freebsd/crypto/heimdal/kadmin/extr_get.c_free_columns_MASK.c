
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct get_entry_data {struct field_info* chead; struct field_info** ctail; } ;
struct field_info {struct field_info* next; struct field_info* header; } ;


 int FUNC_0 (struct field_info*) ;

__attribute__((used)) static void
FUNC_1(struct get_entry_data *VAR_0)
{
    struct field_info *VAR_1, *VAR_2;
    for(VAR_1 = VAR_0->chead; VAR_1 != ((void*)0); VAR_1 = VAR_2) {
 FUNC_0(VAR_1->header);
 VAR_2 = VAR_1->next;
 FUNC_0(VAR_1);
    }
    VAR_0->chead = ((void*)0);
    VAR_0->ctail = &VAR_0->chead;
}
