
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct get_entry_data {int table; struct field_info* chead; } ;
struct field_info {TYPE_1__* ff; struct field_info* next; } ;
typedef int kadm5_principal_ent_t ;
typedef int buf ;
struct TYPE_2__ {int fieldvalue; int subvalue; } ;


 int FUNC_0 (int ,int ,int ,char*,int,int) ;
 int FUNC_1 (int ,int ,char*) ;

__attribute__((used)) static void
FUNC_2(struct get_entry_data *VAR_0, kadm5_principal_ent_t VAR_1)
{
    char VAR_2[1024];
    struct field_info *VAR_3;

    for(VAR_3 = VAR_0->chead; VAR_3 != ((void*)0); VAR_3 = VAR_3->next) {
 FUNC_0(VAR_1, VAR_3->ff->fieldvalue, VAR_3->ff->subvalue, VAR_2, sizeof(VAR_2), 1);
 FUNC_1(VAR_0->table, VAR_3->ff->fieldvalue, VAR_2);
    }
}
