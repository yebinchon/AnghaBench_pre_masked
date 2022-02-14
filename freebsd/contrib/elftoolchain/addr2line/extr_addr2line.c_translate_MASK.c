
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uintmax_t ;
struct Func {char* name; int call_line; int call_file; int * inlined_caller; } ;
struct CU {int * srcfiles; int funclist; int nsrcfiles; void* hipc; void* lopc; int off; } ;
typedef int off ;
typedef int demangled ;
typedef int Elf ;
typedef void* Dwarf_Unsigned ;
typedef int Dwarf_Signed ;
typedef int Dwarf_Off ;
typedef int Dwarf_Line ;
typedef scalar_t__ Dwarf_Half ;
typedef int Dwarf_Error ;
typedef int * Dwarf_Die ;
typedef int Dwarf_Debug ;
typedef void* Dwarf_Addr ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;


 scalar_t__ VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_0 (int ,int ,int ,int,struct CU*) ;
 int FUNC_1 (int ,int ,int *,int,struct CU*) ;
 scalar_t__ FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 scalar_t__ VAR_9 ;
 char* FUNC_4 (char*) ;
 struct CU* FUNC_5 (int,int) ;
 int FUNC_6 (int ,int *,int *,struct CU*) ;
 int VAR_10 ;
 scalar_t__ VAR_11 ;
 int FUNC_7 (int *,int ,void**,int *) ;
 int FUNC_8 (int ,int *,int ) ;
 int FUNC_9 (int *,int *,int *) ;
 int FUNC_10 (int ) ;
 scalar_t__ FUNC_11 (int ,void**,int *) ;
 scalar_t__ FUNC_12 (int ,void**,int *) ;
 scalar_t__ FUNC_13 (int ,char**,int *) ;
 int FUNC_14 (int ,int *,int *,int *,int *,int *,int *) ;
 int FUNC_15 (int ,int *,int **,int *) ;
 scalar_t__ FUNC_16 (int *,int **,int *,int *) ;
 int FUNC_17 (int *,int **,int*,int *) ;
 int FUNC_18 (int *,scalar_t__*,int *) ;
 int FUNC_19 (int) ;
 int FUNC_20 (char const*,char*,int,int ) ;
 int FUNC_21 (int ,char*) ;
 int FUNC_22 (int ,char*,int ) ;
 scalar_t__ VAR_12 ;
 int FUNC_23 (int *) ;
 int FUNC_24 (int *,void*,void**) ;
 int VAR_13 ;
 scalar_t__ VAR_14 ;
 scalar_t__ VAR_15 ;
 scalar_t__ VAR_16 ;
 int FUNC_25 (struct CU*,int *,int ,int ) ;
 int FUNC_26 (char*,char const*,...) ;
 struct Func* FUNC_27 (struct CU*,void*) ;
 scalar_t__ VAR_17 ;
 void* FUNC_28 (char const*,int *,int) ;
 void* VAR_18 ;
 int FUNC_29 (char*,...) ;

__attribute__((used)) static void
FUNC_30(Dwarf_Debug VAR_19, Elf *VAR_20, const char* VAR_21)
{
 Dwarf_Die VAR_22, VAR_23;
 Dwarf_Line *VAR_24;
 Dwarf_Error VAR_25;
 Dwarf_Half VAR_26;
 Dwarf_Unsigned VAR_27, VAR_28, VAR_29, VAR_30, VAR_31;
 Dwarf_Signed VAR_32;
 Dwarf_Addr VAR_33, VAR_34;
 Dwarf_Off VAR_35;
 struct CU *VAR_36;
 struct Func *VAR_37;
 const char *VAR_38;
 char *VAR_39, *VAR_40, *VAR_41;
 char VAR_42[1024];
 int VAR_43, VAR_44, VAR_45;

 VAR_29 = FUNC_28(VAR_21, ((void*)0), 16);
 VAR_29 += VAR_17;
 VAR_30 = 0;
 VAR_39 = VAR_18;
 VAR_36 = ((void*)0);
 VAR_22 = ((void*)0);

 while ((VAR_45 = FUNC_14(VAR_19, ((void*)0), ((void*)0), ((void*)0), ((void*)0), ((void*)0),
     &VAR_25)) == 128) {
  VAR_22 = ((void*)0);
  while (FUNC_15(VAR_19, VAR_22, &VAR_23, &VAR_25) == 128) {
   if (VAR_22 != ((void*)0))
    FUNC_8(VAR_19, VAR_22, VAR_2);
   VAR_22 = VAR_23;
   if (FUNC_18(VAR_22, &VAR_26, &VAR_25) != 128) {
    FUNC_29("dwarf_tag failed: %s",
        FUNC_10(VAR_25));
    goto next_cu;
   }


   if (VAR_26 == VAR_4)
    break;
  }
  if (VAR_23 == ((void*)0)) {
   FUNC_29("could not find DW_TAG_compile_unit die");
   goto next_cu;
  }
  if (FUNC_7(VAR_22, VAR_1, &VAR_27, &VAR_25) ==
      128) {
   if (FUNC_7(VAR_22, VAR_0, &VAR_28,
      &VAR_25) == 128) {




    if (FUNC_24(VAR_22, VAR_27, &VAR_28) !=
        128)
     goto out;
   } else {

    VAR_28 = ~0ULL;
   }





   if (FUNC_9(VAR_22, &VAR_35, &VAR_25) != 128) {
    FUNC_29("dwarf_dieoffset failed: %s",
        FUNC_10(VAR_25));
    goto out;
   }
   FUNC_1(VAR_13, VAR_10, &VAR_35, sizeof(VAR_35), VAR_36);
   if (VAR_36 == ((void*)0)) {
    if ((VAR_36 = FUNC_5(1, sizeof(*VAR_36))) == ((void*)0))
     FUNC_21(VAR_8, "calloc");
    VAR_36->off = VAR_35;
    VAR_36->lopc = VAR_27;
    VAR_36->hipc = VAR_28;
    FUNC_3(&VAR_36->funclist);
    FUNC_0(VAR_13, VAR_10, VAR_35, sizeof(VAR_35), VAR_36);
   }

   if (VAR_29 >= VAR_27 && VAR_29 < VAR_28)
    break;
  }

 next_cu:
  if (VAR_22 != ((void*)0)) {
   FUNC_8(VAR_19, VAR_22, VAR_2);
   VAR_22 = ((void*)0);
  }
 }

 if (VAR_45 != 128 || VAR_22 == ((void*)0))
  goto out;

 switch (FUNC_17(VAR_22, &VAR_24, &VAR_32, &VAR_25)) {
 case 128:
  break;
 case 129:

  goto out;
 default:
  FUNC_29("dwarf_srclines: %s", FUNC_10(VAR_25));
  goto out;
 }

 VAR_34 = ~0ULL;
 VAR_31 = 0;
 VAR_41 = VAR_18;
 for (VAR_44 = 0; VAR_44 < VAR_32; VAR_44++) {
  if (FUNC_11(VAR_24[VAR_44], &VAR_33, &VAR_25)) {
   FUNC_29("dwarf_lineaddr: %s", FUNC_10(VAR_25));
   goto out;
  }
  if (FUNC_12(VAR_24[VAR_44], &VAR_30, &VAR_25)) {
   FUNC_29("dwarf_lineno: %s", FUNC_10(VAR_25));
   goto out;
  }
  if (FUNC_13(VAR_24[VAR_44], &VAR_40, &VAR_25)) {
   FUNC_29("dwarf_linesrc: %s", FUNC_10(VAR_25));
  } else
   VAR_39 = VAR_40;
  if (VAR_29 == VAR_33)
   goto out;
  else if (VAR_29 < VAR_33 && VAR_29 > VAR_34) {
   VAR_30 = VAR_31;
   VAR_39 = VAR_41;
   goto out;
  }
  VAR_34 = VAR_33;
  VAR_31 = VAR_30;
  VAR_41 = VAR_39;
 }

out:
 VAR_37 = ((void*)0);
 VAR_38 = ((void*)0);
 if (VAR_45 == 128 && (VAR_12 || VAR_14) && VAR_36 != ((void*)0)) {
  if (VAR_36->srcfiles == ((void*)0))
   if (FUNC_16(VAR_22, &VAR_36->srcfiles, &VAR_36->nsrcfiles,
       &VAR_25))
    FUNC_29("dwarf_srcfiles: %s", FUNC_10(VAR_25));
  if (FUNC_2(&VAR_36->funclist)) {
   FUNC_6(VAR_19, VAR_22, ((void*)0), VAR_36);
   VAR_22 = ((void*)0);
  }
  VAR_37 = FUNC_27(VAR_36, VAR_29);
  if (VAR_37 != ((void*)0))
   VAR_38 = VAR_37->name;
 }

 if (VAR_16) {
  if ((VAR_43 = FUNC_23(VAR_20)) == VAR_7) {
   FUNC_29("gelf_getclass failed: %s", FUNC_19(-1));
   VAR_43 = VAR_6;
  }
  if (VAR_43 == VAR_5) {
   if (VAR_15)
    FUNC_26("0x%08jx: ", (uintmax_t) VAR_29);
   else
    FUNC_26("0x%08jx\n", (uintmax_t) VAR_29);
  } else {
   if (VAR_15)
    FUNC_26("0x%016jx: ", (uintmax_t) VAR_29);
   else
    FUNC_26("0x%016jx\n", (uintmax_t) VAR_29);
  }
 }

 if (VAR_12) {
  if (VAR_38 == ((void*)0))
   VAR_38 = VAR_18;
  if (VAR_11 && !FUNC_20(VAR_38, VAR_42,
      sizeof(VAR_42), 0)) {
   if (VAR_15)
    FUNC_26("%s at ", VAR_42);
   else
    FUNC_26("%s\n", VAR_42);
  } else {
   if (VAR_15)
    FUNC_26("%s at ", VAR_38);
   else
    FUNC_26("%s\n", VAR_38);
  }
 }

 (void) FUNC_26("%s:%ju\n", VAR_9 ? FUNC_4(VAR_39) : VAR_39,
     (uintmax_t) VAR_30);

 if (VAR_45 == 128 && VAR_14 && VAR_36 != ((void*)0) &&
     VAR_36->srcfiles != ((void*)0) && VAR_37 != ((void*)0) && VAR_37->inlined_caller != ((void*)0))
  FUNC_25(VAR_36, VAR_37->inlined_caller, VAR_37->call_file,
      VAR_37->call_line);

 if (VAR_22 != ((void*)0))
  FUNC_8(VAR_19, VAR_22, VAR_2);





 while (VAR_45 != 129) {
  if (VAR_45 == VAR_3)
   FUNC_22(VAR_8, "dwarf_next_cu_header: %s",
       FUNC_10(VAR_25));
  VAR_45 = FUNC_14(VAR_19, ((void*)0), ((void*)0), ((void*)0), ((void*)0), ((void*)0),
      &VAR_25);
 }
}
