
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_3__ ;
typedef struct TYPE_12__ TYPE_2__ ;
typedef struct TYPE_11__ TYPE_1__ ;


struct TYPE_13__ {TYPE_1__* u; int at_form; int at_attrib; TYPE_2__* at_die; } ;
struct TYPE_12__ {int die_attr; int * die_dbg; } ;
struct TYPE_11__ {scalar_t__ u64; scalar_t__ s; } ;
typedef TYPE_2__* Dwarf_P_Die ;
typedef TYPE_3__* Dwarf_P_Attribute ;
typedef int Dwarf_Half ;
typedef int Dwarf_Error ;
typedef int * Dwarf_Debug ;
typedef TYPE_3__* Dwarf_Attribute ;


 int FUNC_0 (int *,int *,int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (int *,TYPE_3__*,int ) ;
 int FUNC_2 (TYPE_2__*,TYPE_3__**,int *) ;
 int FUNC_3 (int *,char*,scalar_t__*,int *) ;
 scalar_t__ FUNC_4 (int *) ;
 int FUNC_5 (int ) ;
 int VAR_3 ;
 int FUNC_6 (TYPE_3__*) ;

int
FUNC_7(Dwarf_P_Die VAR_4, Dwarf_P_Attribute *VAR_5, Dwarf_Half VAR_6,
    char *VAR_7, Dwarf_Error *VAR_8)
{
 Dwarf_Attribute VAR_9;
 Dwarf_Debug VAR_10;
 int VAR_11;

 VAR_10 = VAR_4 != ((void*)0) ? VAR_4->die_dbg : ((void*)0);

 FUNC_5(VAR_5 != ((void*)0));

 if (VAR_4 == ((void*)0) || VAR_7 == ((void*)0)) {
  FUNC_0(VAR_10, VAR_8, VAR_0);
  return (VAR_0);
 }

 if ((VAR_11 = FUNC_2(VAR_4, &VAR_9, VAR_8)) != VAR_1)
  return (VAR_11);

 VAR_9->at_die = VAR_4;
 VAR_9->at_attrib = VAR_6;
 VAR_9->at_form = VAR_2;
 if ((VAR_11 = FUNC_3(VAR_10, VAR_7, &VAR_9->u[0].u64,
     VAR_8)) != VAR_1) {
  FUNC_6(VAR_9);
  return (VAR_11);
 }
 VAR_9->u[1].s = FUNC_4(VAR_10) + VAR_9->u[0].u64;

 *VAR_5 = VAR_9;

 FUNC_1(&VAR_4->die_attr, VAR_9, VAR_3);

 return (VAR_1);
}
