
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct TYPE_9__ {int size; unsigned int maxload; int * table; int mctx; int case_sensitive; } ;
typedef TYPE_1__ isc_symtab_t ;
typedef int eltlist_t ;
struct TYPE_10__ {int key; } ;
typedef TYPE_2__ elt_t ;


 int FUNC_0 (int ,TYPE_2__*,int ) ;
 TYPE_2__* FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int) ;
 TYPE_2__* FUNC_4 (TYPE_2__*,int ) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (int ,TYPE_2__*,int ) ;
 unsigned int FUNC_7 (int ,int ) ;
 int * FUNC_8 (int ,unsigned int) ;
 int FUNC_9 (int ,int *,int) ;
 int VAR_0 ;

__attribute__((used)) static void
FUNC_10(isc_symtab_t *VAR_1) {
 eltlist_t *VAR_2;
 unsigned int VAR_3, VAR_4, VAR_5;

 FUNC_5(VAR_1 != ((void*)0));

 VAR_4 = VAR_1->size * 2;
 VAR_5 = VAR_4 * 3 / 4;
 FUNC_3(VAR_4 > 0U && VAR_5 > 0U);

 VAR_2 = FUNC_8(VAR_1->mctx, VAR_4 * sizeof(eltlist_t));
 if (VAR_2 == ((void*)0))
  return;

 for (VAR_3 = 0; VAR_3 < VAR_4; VAR_3++)
  FUNC_2(VAR_2[VAR_3]);

 for (VAR_3 = 0; VAR_3 < VAR_1->size; VAR_3++) {
  elt_t *VAR_6, *VAR_7;

  for (VAR_6 = FUNC_1(VAR_1->table[VAR_3]); VAR_6 != ((void*)0); VAR_6 = VAR_7) {
   unsigned int VAR_8;

   VAR_7 = FUNC_4(VAR_6, VAR_0);

   FUNC_6(VAR_1->table[VAR_3], VAR_6, VAR_0);
   VAR_8 = FUNC_7(VAR_6->key, VAR_1->case_sensitive);
   FUNC_0(VAR_2[VAR_8 % VAR_4], VAR_6, VAR_0);
  }
 }

 FUNC_9(VAR_1->mctx, VAR_1->table,
      VAR_1->size * sizeof(eltlist_t));

 VAR_1->table = VAR_2;
 VAR_1->size = VAR_4;
 VAR_1->maxload = VAR_5;
}
