
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef char* uintmax_t ;
struct readelf {int dbg; } ;
typedef int Dwarf_Unsigned ;
typedef int Dwarf_Signed ;
typedef int Dwarf_Line ;
typedef int Dwarf_Error ;
typedef int Dwarf_Die ;
typedef scalar_t__ Dwarf_Addr ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 char* FUNC_0 (char*) ;
 int FUNC_1 (int ,int ,char const**,int *) ;
 int FUNC_2 (int ,int*,int *) ;
 int FUNC_3 (int ,scalar_t__*,int *) ;
 int FUNC_4 (int ,int*,int *) ;
 int FUNC_5 (int ,int *,int *,int *,int *,int *,int *) ;
 int FUNC_6 (int ,int *,int *,int *) ;
 int FUNC_7 (int ,char***,int*,int *) ;
 int FUNC_8 (int ,int **,int*,int *) ;
 int FUNC_9 (char*,...) ;
 int FUNC_10 (char) ;

__attribute__((used)) static void
FUNC_11(struct readelf *VAR_3)
{
 Dwarf_Die VAR_4;
 Dwarf_Line *VAR_5, VAR_6;
 Dwarf_Addr VAR_7;
 Dwarf_Signed VAR_8, VAR_9;
 Dwarf_Unsigned VAR_10, VAR_11;
 Dwarf_Error VAR_12;
 const char *VAR_13, *VAR_14;
 char **VAR_15;
 int VAR_16, VAR_17;

 FUNC_9("Decoded dump of debug contents of section .debug_line:\n\n");
 while ((VAR_17 = FUNC_5(VAR_3->dbg, ((void*)0), ((void*)0), ((void*)0), ((void*)0),
     ((void*)0), &VAR_12)) == VAR_2) {
  if (FUNC_6(VAR_3->dbg, ((void*)0), &VAR_4, &VAR_12) != VAR_2)
   continue;
  if (FUNC_1(VAR_4, VAR_1, &VAR_14, &VAR_12) !=
      VAR_2)
   VAR_14 = ((void*)0);
  if (FUNC_1(VAR_4, VAR_0, &VAR_13, &VAR_12) !=
      VAR_2)
   VAR_13 = ((void*)0);
  FUNC_9("CU: ");
  if (VAR_13 && VAR_14 && VAR_14[0] != '/')
   FUNC_9("%s/", VAR_13);
  if (VAR_14)
   FUNC_9("%s", VAR_14);
  FUNC_10('\n');
  FUNC_9("%-37s %11s   %s\n", "Filename", "Line Number",
      "Starting Address");
  if (FUNC_8(VAR_4, &VAR_5, &VAR_8, &VAR_12) != VAR_2)
   continue;
  if (FUNC_7(VAR_4, &VAR_15, &VAR_9, &VAR_12) != VAR_2)
   continue;
  for (VAR_16 = 0; VAR_16 < VAR_8; VAR_16++) {
   VAR_6 = VAR_5[VAR_16];
   if (FUNC_2(VAR_6, &VAR_11, &VAR_12) != VAR_2)
    continue;
   if (FUNC_4(VAR_6, &VAR_10, &VAR_12) != VAR_2)
    continue;
   if (FUNC_3(VAR_6, &VAR_7, &VAR_12) != VAR_2)
    continue;
   FUNC_9("%-37s %11ju %#18jx\n",
       FUNC_0(VAR_15[VAR_11 - 1]), (uintmax_t) VAR_10,
       (uintmax_t) VAR_7);
  }
  FUNC_10('\n');
 }
}
