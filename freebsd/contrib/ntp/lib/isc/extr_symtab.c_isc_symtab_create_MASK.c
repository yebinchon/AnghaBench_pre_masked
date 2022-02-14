
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int isc_symtabaction_t ;
struct TYPE_4__ {unsigned int size; unsigned int maxload; int magic; int case_sensitive; void* undefine_arg; int undefine_action; scalar_t__ count; int * mctx; int * table; } ;
typedef TYPE_1__ isc_symtab_t ;
typedef int isc_result_t ;
typedef int isc_mem_t ;
typedef int isc_boolean_t ;
typedef int eltlist_t ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int) ;
 int VAR_2 ;
 scalar_t__ FUNC_2 (int *,unsigned int) ;
 int FUNC_3 (int *,TYPE_1__*,int) ;

isc_result_t
FUNC_4(isc_mem_t *VAR_3, unsigned int VAR_4,
    isc_symtabaction_t VAR_5,
    void *VAR_6,
    isc_boolean_t VAR_7,
    isc_symtab_t **VAR_8)
{
 isc_symtab_t *VAR_9;
 unsigned int VAR_10;

 FUNC_1(VAR_3 != ((void*)0));
 FUNC_1(VAR_8 != ((void*)0) && *VAR_8 == ((void*)0));
 FUNC_1(VAR_4 > 0);

 VAR_9 = (isc_symtab_t *)FUNC_2(VAR_3, sizeof(*VAR_9));
 if (VAR_9 == ((void*)0))
  return (VAR_0);
 VAR_9->table = (eltlist_t *)FUNC_2(VAR_3,
       VAR_4 * sizeof(eltlist_t));
 if (VAR_9->table == ((void*)0)) {
  FUNC_3(VAR_3, VAR_9, sizeof(*VAR_9));
  return (VAR_0);
 }
 for (VAR_10 = 0; VAR_10 < VAR_4; VAR_10++)
  FUNC_0(VAR_9->table[VAR_10]);
 VAR_9->mctx = VAR_3;
 VAR_9->size = VAR_4;
 VAR_9->count = 0;
 VAR_9->maxload = VAR_4 * 3 / 4;
 VAR_9->undefine_action = VAR_5;
 VAR_9->undefine_arg = VAR_6;
 VAR_9->case_sensitive = VAR_7;
 VAR_9->magic = VAR_2;

 *VAR_8 = VAR_9;

 return (VAR_1);
}
