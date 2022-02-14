
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_2__ ;
typedef struct TYPE_11__ TYPE_1__ ;


typedef int isc_symvalue_t ;
struct TYPE_11__ {scalar_t__ count; scalar_t__ maxload; int * table; int mctx; int undefine_arg; int (* undefine_action ) (int ,unsigned int,int ,int ) ;} ;
typedef TYPE_1__ isc_symtab_t ;
typedef scalar_t__ isc_symexists_t ;
typedef int isc_result_t ;
struct TYPE_12__ {unsigned int type; int value; int key; } ;
typedef TYPE_2__ elt_t ;


 int FUNC_0 (char const*,int ) ;
 int FUNC_1 (TYPE_1__*,char const*,unsigned int,unsigned int,TYPE_2__*) ;
 int FUNC_2 (int) ;
 int FUNC_3 (TYPE_2__*,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_4 (int ,TYPE_2__*,int ) ;
 int FUNC_5 (int) ;
 int FUNC_6 (int ,TYPE_2__*,int ) ;
 int FUNC_7 (TYPE_1__*) ;
 int FUNC_8 (TYPE_1__*) ;
 scalar_t__ FUNC_9 (int ,int) ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 int VAR_6 ;
 int FUNC_10 (int ,unsigned int,int ,int ) ;

isc_result_t
FUNC_11(isc_symtab_t *VAR_7, const char *VAR_8, unsigned int VAR_9,
    isc_symvalue_t VAR_10, isc_symexists_t VAR_11)
{
 unsigned int VAR_12;
 elt_t *VAR_13;

 FUNC_5(FUNC_7(VAR_7));
 FUNC_5(VAR_8 != ((void*)0));
 FUNC_5(VAR_9 != 0);

 FUNC_1(VAR_7, VAR_8, VAR_9, VAR_12, VAR_13);

 if (VAR_11 != VAR_3 && VAR_13 != ((void*)0)) {
  if (VAR_11 == VAR_4)
   return (VAR_0);
  FUNC_2(VAR_11 == VAR_5);
  FUNC_6(VAR_7->table[VAR_12], VAR_13, VAR_6);
  if (VAR_7->undefine_action != ((void*)0))
   (VAR_7->undefine_action)(VAR_13->key, VAR_13->type,
        VAR_13->value,
        VAR_7->undefine_arg);
 } else {
  VAR_13 = (elt_t *)FUNC_9(VAR_7->mctx, sizeof(*VAR_13));
  if (VAR_13 == ((void*)0))
   return (VAR_1);
  FUNC_3(VAR_13, VAR_6);
  VAR_7->count++;
 }
 FUNC_0(VAR_8, VAR_13->key);
 VAR_13->type = VAR_9;
 VAR_13->value = VAR_10;




 FUNC_4(VAR_7->table[VAR_12], VAR_13, VAR_6);

 if (VAR_7->count > VAR_7->maxload)
  FUNC_8(VAR_7);

 return (VAR_2);
}
