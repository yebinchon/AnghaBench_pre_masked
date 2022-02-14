
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct get_entry_data {int * table; int extra_mask; int mask; struct field_info** ctail; } ;
struct field_name {char const* default_header; int flags; int fieldvalue; int extra_mask; } ;
struct field_info {struct field_info* next; int * header; struct field_name* ff; } ;


 int VAR_0 ;
 struct field_info* FUNC_0 (int) ;
 int FUNC_1 (int *,int ,char const*,int ) ;
 int * FUNC_2 (char const*) ;

__attribute__((used)) static int
FUNC_3(struct get_entry_data *VAR_1, struct field_name *VAR_2, const char *VAR_3)
{
    struct field_info *VAR_4 = FUNC_0(sizeof(*VAR_4));
    if (VAR_4 == ((void*)0))
 return VAR_0;
    VAR_4->ff = VAR_2;
    if(VAR_3)
 VAR_4->header = FUNC_2(VAR_3);
    else
 VAR_4->header = ((void*)0);
    VAR_4->next = ((void*)0);
    *VAR_1->ctail = VAR_4;
    VAR_1->ctail = &VAR_4->next;
    VAR_1->mask |= VAR_2->fieldvalue;
    VAR_1->extra_mask |= VAR_2->extra_mask;
    if(VAR_1->table != ((void*)0))
 FUNC_1(VAR_1->table, VAR_2->fieldvalue,
         VAR_3 ? VAR_3 : VAR_2->default_header, VAR_2->flags);
    return 0;
}
