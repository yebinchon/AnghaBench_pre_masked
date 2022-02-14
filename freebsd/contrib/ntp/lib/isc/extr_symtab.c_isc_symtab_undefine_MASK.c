
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct TYPE_9__ {int count; int mctx; int * table; int undefine_arg; int (* undefine_action ) (int ,int ,int ,int ) ;} ;
typedef TYPE_1__ isc_symtab_t ;
typedef int isc_result_t ;
struct TYPE_10__ {int value; int type; int key; } ;
typedef TYPE_2__ elt_t ;


 int FUNC_0 (TYPE_1__*,char const*,unsigned int,unsigned int,TYPE_2__*) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ,TYPE_2__*,int ) ;
 int FUNC_3 (TYPE_1__*) ;
 int FUNC_4 (int ,TYPE_2__*,int) ;
 int VAR_2 ;
 int FUNC_5 (int ,int ,int ,int ) ;

isc_result_t
FUNC_6(isc_symtab_t *VAR_3, const char *VAR_4, unsigned int VAR_5) {
 unsigned int VAR_6;
 elt_t *VAR_7;

 FUNC_1(FUNC_3(VAR_3));
 FUNC_1(VAR_4 != ((void*)0));

 FUNC_0(VAR_3, VAR_4, VAR_5, VAR_6, VAR_7);

 if (VAR_7 == ((void*)0))
  return (VAR_0);

 if (VAR_3->undefine_action != ((void*)0))
  (VAR_3->undefine_action)(VAR_7->key, VAR_7->type,
       VAR_7->value, VAR_3->undefine_arg);
 FUNC_2(VAR_3->table[VAR_6], VAR_7, VAR_2);
 FUNC_4(VAR_3->mctx, VAR_7, sizeof(*VAR_7));
 VAR_3->count--;

 return (VAR_1);
}
