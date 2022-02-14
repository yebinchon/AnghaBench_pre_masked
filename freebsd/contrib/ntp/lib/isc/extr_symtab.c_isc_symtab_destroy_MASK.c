
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_1__ ;


struct TYPE_10__ {unsigned int size; int mctx; scalar_t__ magic; struct TYPE_10__* table; int undefine_arg; int value; int type; int key; int (* undefine_action ) (int ,int ,int ,int ) ;} ;
typedef TYPE_1__ isc_symtab_t ;
typedef int eltlist_t ;
typedef TYPE_1__ elt_t ;


 TYPE_1__* FUNC_0 (TYPE_1__) ;
 TYPE_1__* FUNC_1 (TYPE_1__*,int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (TYPE_1__*) ;
 int FUNC_4 (int ,TYPE_1__*,int) ;
 int VAR_0 ;
 int FUNC_5 (int ,int ,int ,int ) ;

void
FUNC_6(isc_symtab_t **VAR_1) {
 isc_symtab_t *VAR_2;
 unsigned int VAR_3;
 elt_t *VAR_4, *VAR_5;

 FUNC_2(VAR_1 != ((void*)0));
 VAR_2 = *VAR_1;
 FUNC_2(FUNC_3(VAR_2));

 for (VAR_3 = 0; VAR_3 < VAR_2->size; VAR_3++) {
  for (VAR_4 = FUNC_0(VAR_2->table[VAR_3]); VAR_4 != ((void*)0); VAR_4 = VAR_5) {
   VAR_5 = FUNC_1(VAR_4, VAR_0);
   if (VAR_2->undefine_action != ((void*)0))
          (VAR_2->undefine_action)(VAR_4->key,
        VAR_4->type,
        VAR_4->value,
        VAR_2->undefine_arg);
   FUNC_4(VAR_2->mctx, VAR_4, sizeof(*VAR_4));
  }
 }
 FUNC_4(VAR_2->mctx, VAR_2->table,
      VAR_2->size * sizeof(eltlist_t));
 VAR_2->magic = 0;
 FUNC_4(VAR_2->mctx, VAR_2, sizeof(*VAR_2));

 *VAR_1 = ((void*)0);
}
