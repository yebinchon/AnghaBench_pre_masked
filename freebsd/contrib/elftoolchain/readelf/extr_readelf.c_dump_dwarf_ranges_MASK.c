
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct readelf {scalar_t__ ec; int dbg; } ;
typedef scalar_t__ Dwarf_Unsigned ;
typedef int Dwarf_Signed ;
typedef int Dwarf_Ranges ;
typedef scalar_t__ Dwarf_Half ;
typedef int Dwarf_Error ;
typedef int * Dwarf_Die ;
typedef int Dwarf_Addr ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_0 (struct readelf*,int *,int ) ;
 int FUNC_1 (int *,int ,scalar_t__*,int *) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ,int ,int **,int *,scalar_t__*,int *) ;
 int FUNC_4 (int ,int *,int *,int *,int *,int *,int *) ;
 int FUNC_5 (int ,int *,int **,int *) ;
 int FUNC_6 (int *,scalar_t__*,int *) ;
 int FUNC_7 (char*,...) ;
 int FUNC_8 (char) ;
 int FUNC_9 (char*,int ) ;

__attribute__((used)) static void
FUNC_10(struct readelf *VAR_4)
{
 Dwarf_Ranges *VAR_5;
 Dwarf_Die VAR_6;
 Dwarf_Signed VAR_7;
 Dwarf_Unsigned VAR_8;
 Dwarf_Half VAR_9;
 Dwarf_Error VAR_10;
 Dwarf_Unsigned VAR_11;
 int VAR_12;

 if (FUNC_3(VAR_4->dbg, 0, &VAR_5, &VAR_7, &VAR_8, &VAR_10) !=
     VAR_1)
  return;

 FUNC_7("Contents of the .debug_ranges section:\n\n");
 if (VAR_4->ec == VAR_3)
  FUNC_7("    %-8s %-8s %s\n", "Offset", "Begin", "End");
 else
  FUNC_7("    %-8s %-16s %s\n", "Offset", "Begin", "End");

 while ((VAR_12 = FUNC_4(VAR_4->dbg, ((void*)0), ((void*)0), ((void*)0), ((void*)0),
     ((void*)0), &VAR_10)) == VAR_1) {
  VAR_6 = ((void*)0);
  if (FUNC_5(VAR_4->dbg, VAR_6, &VAR_6, &VAR_10) != VAR_1)
   continue;
  if (FUNC_6(VAR_6, &VAR_9, &VAR_10) != VAR_1) {
   FUNC_9("dwarf_tag failed: %s", FUNC_2(VAR_10));
   continue;
  }

  VAR_11 = 0;
  if (VAR_9 == VAR_2) {
   if (FUNC_1(VAR_6, VAR_0, &VAR_11,
       &VAR_10) != VAR_1)
    VAR_11 = 0;
  }

  FUNC_0(VAR_4, VAR_6, (Dwarf_Addr) VAR_11);
 }
 FUNC_8('\n');
}
