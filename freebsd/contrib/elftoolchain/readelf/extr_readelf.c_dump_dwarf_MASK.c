
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct readelf {int dop; int dbg; int elf; } ;
typedef int Dwarf_Error ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int FUNC_0 (struct readelf*) ;
 int FUNC_1 (struct readelf*) ;
 int FUNC_2 (struct readelf*,int) ;
 int FUNC_3 (struct readelf*,int) ;
 int FUNC_4 (struct readelf*) ;
 int FUNC_5 (struct readelf*) ;
 int FUNC_6 (struct readelf*) ;
 int FUNC_7 (struct readelf*) ;
 int FUNC_8 (struct readelf*) ;
 int FUNC_9 (struct readelf*) ;
 int FUNC_10 (struct readelf*) ;
 scalar_t__ FUNC_11 (int ,int ,int *,int *,int *,int *) ;
 int FUNC_12 (int ) ;
 int FUNC_13 (int ) ;
 int FUNC_14 (int ,int *) ;
 int FUNC_15 (int ,char*,int ) ;

__attribute__((used)) static void
FUNC_16(struct readelf *VAR_15)
{
 Dwarf_Error VAR_16;
 int VAR_17;

 if (FUNC_11(VAR_15->elf, VAR_1, ((void*)0), ((void*)0), &VAR_15->dbg, &VAR_16)) {
  if ((VAR_17 = FUNC_13(VAR_16)) != VAR_2)
   FUNC_15(VAR_14, "dwarf_elf_init failed: %s",
       FUNC_12(VAR_16));
  return;
 }

 if (VAR_15->dop & VAR_0)
  FUNC_0(VAR_15);
 if (VAR_15->dop & VAR_6)
  FUNC_4(VAR_15);
 if (VAR_15->dop & VAR_7)
  FUNC_5(VAR_15);
 if (VAR_15->dop & VAR_5) {
  FUNC_3(VAR_15, 0);
  FUNC_3(VAR_15, 1);
 }
 if (VAR_15->dop & VAR_10)
  FUNC_8(VAR_15);
 if (VAR_15->dop & VAR_11)
  FUNC_1(VAR_15);
 if (VAR_15->dop & VAR_12)
  FUNC_9(VAR_15);
 if (VAR_15->dop & VAR_8)
  FUNC_7(VAR_15);
 if (VAR_15->dop & VAR_3)
  FUNC_2(VAR_15, 0);
 else if (VAR_15->dop & VAR_4)
  FUNC_2(VAR_15, 1);
 if (VAR_15->dop & VAR_13)
  FUNC_10(VAR_15);
 if (VAR_15->dop & VAR_9)
  FUNC_6(VAR_15);

 FUNC_14(VAR_15->dbg, &VAR_16);
}
