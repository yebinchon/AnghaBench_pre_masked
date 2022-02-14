
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int uintmax_t ;
struct readelf {scalar_t__ ec; int dbg; } ;
struct TYPE_3__ {scalar_t__ dwr_type; scalar_t__ dwr_addr2; scalar_t__ dwr_addr1; } ;
typedef scalar_t__ Dwarf_Unsigned ;
typedef int Dwarf_Signed ;
typedef TYPE_1__ Dwarf_Ranges ;
typedef int Dwarf_Off ;
typedef scalar_t__ Dwarf_Half ;
typedef int Dwarf_Error ;
typedef int Dwarf_Die ;
typedef int Dwarf_Attribute ;
typedef scalar_t__ Dwarf_Addr ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 int FUNC_0 (int ,int **,int*,int *) ;
 int FUNC_1 (int ,int *,int *) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ,scalar_t__*,int *) ;
 int FUNC_4 (int ,int ,TYPE_1__**,int*,scalar_t__*,int *) ;
 int FUNC_5 (int ,int ,int *,int *) ;
 int FUNC_6 (int ,scalar_t__*,int *) ;
 int FUNC_7 (char*,char*,...) ;
 int FUNC_8 (char*,int ) ;

__attribute__((used)) static void
FUNC_9(struct readelf *VAR_6, Dwarf_Die VAR_7, Dwarf_Addr VAR_8)
{
 Dwarf_Attribute *VAR_9;
 Dwarf_Ranges *VAR_10;
 Dwarf_Die VAR_11;
 Dwarf_Error VAR_12;
 Dwarf_Addr VAR_13;
 Dwarf_Half VAR_14;
 Dwarf_Signed VAR_15, VAR_16;
 Dwarf_Unsigned VAR_17, VAR_18;
 int VAR_19, VAR_20, VAR_21;

 if ((VAR_21 = FUNC_0(VAR_7, &VAR_9, &VAR_15, &VAR_12)) !=
     VAR_2) {
  if (VAR_21 == VAR_1)
   FUNC_8("dwarf_attrlist failed: %s", FUNC_2(VAR_12));
  goto cont_search;
 }

 for (VAR_19 = 0; VAR_19 < VAR_15; VAR_19++) {
  if (FUNC_6(VAR_9[VAR_19], &VAR_14, &VAR_12) != VAR_2) {
   FUNC_8("dwarf_whatattr failed: %s", FUNC_2(VAR_12));
   continue;
  }
  if (VAR_14 != VAR_0)
   continue;
  if (FUNC_3(VAR_9[VAR_19], &VAR_17, &VAR_12) != VAR_2) {
   FUNC_8("dwarf_formudata failed: %s", FUNC_2(VAR_12));
   continue;
  }
  if (FUNC_4(VAR_6->dbg, (Dwarf_Off) VAR_17, &VAR_10, &VAR_16,
      &VAR_18, &VAR_12) != VAR_2)
   continue;
  VAR_13 = VAR_8;
  for (VAR_20 = 0; VAR_20 < VAR_16; VAR_20++) {
   FUNC_7("    %08jx ", (uintmax_t) VAR_17);
   if (VAR_10[VAR_20].dwr_type == VAR_4) {
    FUNC_7("%s\n", "<End of list>");
    continue;
   } else if (VAR_10[VAR_20].dwr_type ==
       VAR_3) {
    VAR_13 = VAR_10[VAR_20].dwr_addr2;
    continue;
   }
   if (VAR_6->ec == VAR_5)
    FUNC_7("%08jx %08jx\n",
        (uintmax_t) (VAR_10[VAR_20].dwr_addr1 + VAR_13),
        (uintmax_t) (VAR_10[VAR_20].dwr_addr2 + VAR_13));
   else
    FUNC_7("%016jx %016jx\n",
        (uintmax_t) (VAR_10[VAR_20].dwr_addr1 + VAR_13),
        (uintmax_t) (VAR_10[VAR_20].dwr_addr2 + VAR_13));
  }
 }

cont_search:

 VAR_21 = FUNC_1(VAR_7, &VAR_11, &VAR_12);
 if (VAR_21 == VAR_1)
  FUNC_8("dwarf_child: %s", FUNC_2(VAR_12));
 else if (VAR_21 == VAR_2)
  FUNC_9(VAR_6, VAR_11, VAR_8);


 VAR_21 = FUNC_5(VAR_6->dbg, VAR_7, &VAR_11, &VAR_12);
 if (VAR_21 == VAR_1)
  FUNC_8("dwarf_siblingof: %s", FUNC_2(VAR_12));
 else if (VAR_21 == VAR_2)
  FUNC_9(VAR_6, VAR_11, VAR_8);
}
