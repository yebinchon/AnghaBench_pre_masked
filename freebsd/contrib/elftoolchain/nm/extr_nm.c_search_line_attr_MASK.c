
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef scalar_t__ uint8_t ;
struct var_info_head {int dummy; } ;
struct var_info_entry {int line; int lowpc; int highpc; struct var_info_entry* file; int * name; int addr; } ;
typedef struct var_info_head func_info_head ;
struct func_info_entry {int line; int lowpc; int highpc; struct func_info_entry* file; int * name; int addr; } ;
struct TYPE_4__ {scalar_t__ bl_data; } ;
typedef int Dwarf_Unsigned ;
typedef scalar_t__ Dwarf_Signed ;
typedef scalar_t__ Dwarf_Half ;
typedef int Dwarf_Error ;
typedef int Dwarf_Die ;
typedef int Dwarf_Debug ;
typedef scalar_t__ Dwarf_Bool ;
typedef TYPE_1__ Dwarf_Block ;
typedef int Dwarf_Attribute ;


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
 scalar_t__ VAR_11 ;
 scalar_t__ VAR_12 ;
 scalar_t__ VAR_13 ;
 scalar_t__ VAR_14 ;
 scalar_t__ VAR_15 ;
 int FUNC_0 (struct var_info_head*,struct var_info_entry*,int ) ;
 struct var_info_entry* FUNC_1 (int,int) ;
 int FUNC_2 (int ,int ,int *,int *) ;
 int FUNC_3 (int ,int ,scalar_t__*,int *) ;
 int FUNC_4 (int ,int ,int*,int *) ;
 int FUNC_5 (int ,int *,int *) ;
 int FUNC_6 (int ,int ,int ) ;
 int FUNC_7 (int ) ;
 int FUNC_8 (int ,TYPE_1__**,int *) ;
 int FUNC_9 (int ,int ,int *,int *) ;
 int FUNC_10 (int ,scalar_t__*,int *) ;
 int VAR_16 ;
 void* FUNC_11 (int ,int ) ;
 int FUNC_12 (struct var_info_entry*) ;
 int FUNC_13 (int ,TYPE_1__*) ;
 void* FUNC_14 (char*) ;
 int FUNC_15 (char*) ;
 int FUNC_16 (char*,int ) ;

__attribute__((used)) static void
FUNC_17(Dwarf_Debug VAR_17, struct func_info_head *VAR_18,
    struct var_info_head *VAR_19, Dwarf_Die VAR_20, char **VAR_21,
    Dwarf_Signed VAR_22)
{
 Dwarf_Attribute VAR_23;
 Dwarf_Unsigned VAR_24;
 Dwarf_Half VAR_25;
 Dwarf_Block *VAR_26;
 Dwarf_Bool VAR_27;
 Dwarf_Die VAR_28;
 Dwarf_Error VAR_29;
 struct func_info_entry *VAR_30;
 struct var_info_entry *VAR_31;
 int VAR_32;

 if (FUNC_10(VAR_20, &VAR_25, &VAR_29) != VAR_10) {
  FUNC_16("dwarf_tag failed: %s", FUNC_7(VAR_29));
  goto cont_search;
 }


 if (VAR_25 != VAR_14 && VAR_25 != VAR_12 &&
     VAR_25 != VAR_13 && VAR_25 != VAR_15)
  goto cont_search;

 if (VAR_25 == VAR_15) {


  if (FUNC_3(VAR_20, VAR_0, &VAR_27, &VAR_29) ==
      VAR_10 && VAR_27)
   goto cont_search;


  if (FUNC_3(VAR_20, VAR_3, &VAR_27, &VAR_29) ==
      VAR_10 && VAR_27)
   goto cont_search;


  if (FUNC_3(VAR_20, VAR_4, &VAR_27, &VAR_29) !=
      VAR_10 || !VAR_27)
   goto cont_search;

  if ((VAR_31 = FUNC_1(1, sizeof(*VAR_31))) == ((void*)0)) {
   FUNC_15("calloc failed");
   goto cont_search;
  }

  if (FUNC_4(VAR_20, VAR_1, &VAR_24,
      &VAR_29) == VAR_10 && VAR_24 > 0 &&
      (Dwarf_Signed) (VAR_24 - 1) < VAR_22) {
   VAR_31->file = FUNC_14(VAR_21[VAR_24 - 1]);
   if (VAR_31->file == ((void*)0)) {
    FUNC_15("strdup");
    FUNC_12(VAR_31);
    goto cont_search;
   }
  }

  if (FUNC_4(VAR_20, VAR_2, &VAR_24, &VAR_29) ==
      VAR_10)
   VAR_31->line = VAR_24;

  VAR_31->name = FUNC_11(VAR_17, VAR_20);
  if (VAR_31->name == ((void*)0)) {
   if (VAR_31->file)
    FUNC_12(VAR_31->file);
   FUNC_12(VAR_31);
   goto cont_search;
  }

  if (FUNC_2(VAR_20, VAR_6, &VAR_23, &VAR_29) == VAR_10 &&
      FUNC_8(VAR_23, &VAR_26, &VAR_29) == VAR_10) {





   if (*((uint8_t *)VAR_26->bl_data) == VAR_11)
    VAR_31->addr = FUNC_13(VAR_17, VAR_26);
  }

  FUNC_0(VAR_19, VAR_31, VAR_16);

 } else {

  if ((VAR_30 = FUNC_1(1, sizeof(*VAR_30))) == ((void*)0)) {
   FUNC_15("calloc failed");
   goto cont_search;
  }






  if (FUNC_4(VAR_20, VAR_1, &VAR_24,
      &VAR_29) == VAR_10 && VAR_24 > 0 &&
      (Dwarf_Signed) (VAR_24 - 1) < VAR_22) {
   VAR_30->file = FUNC_14(VAR_21[VAR_24 - 1]);
   if (VAR_30->file == ((void*)0)) {
    FUNC_15("strdup");
    FUNC_12(VAR_30);
    goto cont_search;
   }
  }

  if (FUNC_4(VAR_20, VAR_2, &VAR_24, &VAR_29) ==
      VAR_10)
   VAR_30->line = VAR_24;

  VAR_30->name = FUNC_11(VAR_17, VAR_20);
  if (VAR_30->name == ((void*)0)) {
   if (VAR_30->file)
    FUNC_12(VAR_30->file);
   FUNC_12(VAR_30);
   goto cont_search;
  }

  if (FUNC_4(VAR_20, VAR_7, &VAR_24, &VAR_29) ==
      VAR_10)
   VAR_30->lowpc = VAR_24;
  if (FUNC_4(VAR_20, VAR_5, &VAR_24, &VAR_29) ==
      VAR_10)
   VAR_30->highpc = VAR_24;

  FUNC_0(VAR_18, VAR_30, VAR_16);
 }

cont_search:


 VAR_32 = FUNC_5(VAR_20, &VAR_28, &VAR_29);
 if (VAR_32 == VAR_9)
  FUNC_16("dwarf_child: %s", FUNC_7(VAR_29));
 else if (VAR_32 == VAR_10)
  FUNC_17(VAR_17, VAR_18, VAR_19, VAR_28, VAR_21,
      VAR_22);


 VAR_32 = FUNC_9(VAR_17, VAR_20, &VAR_28, &VAR_29);
 if (VAR_32 == VAR_9)
  FUNC_16("dwarf_siblingof: %s", FUNC_7(VAR_29));
 else if (VAR_32 == VAR_10)
  FUNC_17(VAR_17, VAR_18, VAR_19, VAR_28, VAR_21,
      VAR_22);

 FUNC_6(VAR_17, VAR_20, VAR_8);
}
