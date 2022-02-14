
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct _Dwarf_Arange {int dummy; } ;
struct TYPE_10__ {void* ar_eoff; scalar_t__ ar_esymndx; scalar_t__ ar_symndx; scalar_t__ ar_range; void* ar_address; TYPE_2__* ar_as; } ;
struct TYPE_9__ {int as_arlist; } ;
struct TYPE_8__ {int dbgp_flags; TYPE_2__* dbgp_as; } ;
typedef scalar_t__ Dwarf_Unsigned ;
typedef TYPE_1__* Dwarf_P_Debug ;
typedef int Dwarf_Error ;
typedef TYPE_2__* Dwarf_ArangeSet ;
typedef TYPE_3__* Dwarf_Arange ;
typedef void* Dwarf_Addr ;


 int FUNC_0 (TYPE_1__*,int *,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (int *,TYPE_3__*,int ) ;
 int VAR_3 ;
 TYPE_3__* FUNC_2 (int,int) ;

Dwarf_Unsigned
FUNC_3(Dwarf_P_Debug VAR_4, Dwarf_Addr VAR_5, Dwarf_Unsigned VAR_6,
    Dwarf_Unsigned VAR_7, Dwarf_Unsigned VAR_8,
    Dwarf_Addr VAR_9, Dwarf_Error *VAR_10)
{
 Dwarf_ArangeSet VAR_11;
 Dwarf_Arange VAR_12;

 if (VAR_4 == ((void*)0)) {
  FUNC_0(VAR_4, VAR_10, VAR_1);
  return (0);
 }
 VAR_11 = VAR_4->dbgp_as;

 if (VAR_8 > 0 &&
     (VAR_4->dbgp_flags & VAR_0) == 0) {
  FUNC_0(VAR_4, VAR_10, VAR_1);
  return (0);
 }

 if ((VAR_12 = FUNC_2(1, sizeof(struct _Dwarf_Arange))) == ((void*)0)) {
  FUNC_0(VAR_4, VAR_10, VAR_2);
  return (0);
 }
 VAR_12->ar_as = VAR_11;
 VAR_12->ar_address = VAR_5;
 VAR_12->ar_range = VAR_6;
 VAR_12->ar_symndx = VAR_7;
 VAR_12->ar_esymndx = VAR_8;
 VAR_12->ar_eoff = VAR_9;
 FUNC_1(&VAR_11->as_arlist, VAR_12, VAR_3);

 return (1);
}
