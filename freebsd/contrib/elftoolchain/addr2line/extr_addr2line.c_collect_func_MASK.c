
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct Func {void* call_file; void* call_line; struct Func* inlined_caller; void* hipc; void* lopc; scalar_t__ ranges_cnt; int * ranges; int * name; } ;
struct CU {int funclist; } ;
typedef void* Dwarf_Unsigned ;
typedef scalar_t__ Dwarf_Signed ;
typedef int Dwarf_Ranges ;
typedef int Dwarf_Off ;
typedef scalar_t__ Dwarf_Half ;
typedef int Dwarf_Error ;
typedef int * Dwarf_Die ;
typedef int Dwarf_Debug ;
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
 int VAR_14 ;
 int FUNC_0 (int *,struct Func*,int ) ;
 struct Func* FUNC_1 (int,int) ;
 int FUNC_2 (int *,int ,int *,int *) ;
 int FUNC_3 (int *,int ,char const**,int *) ;
 int FUNC_4 (int *,int ,void**,int *) ;
 int FUNC_5 (int *,int **,int *) ;
 int FUNC_6 (int ,int *,int ) ;
 int FUNC_7 (int ) ;
 int FUNC_8 (int ,int ,int **,scalar_t__*,int *,int *) ;
 int FUNC_9 (int ,int *,int *) ;
 int FUNC_10 (int ,int ,int **,int *) ;
 int FUNC_11 (int ,int *,int **,int *) ;
 scalar_t__ FUNC_12 (int *,scalar_t__*,int *) ;
 int FUNC_13 (int ,char*) ;
 int FUNC_14 (int *,void*,void**) ;
 int VAR_15 ;
 int * FUNC_15 (char const*) ;
 int FUNC_16 (char*,int ) ;

__attribute__((used)) static void
FUNC_17(Dwarf_Debug VAR_16, Dwarf_Die VAR_17, struct Func *VAR_18, struct CU *VAR_19)
{
 Dwarf_Die VAR_20, VAR_21, VAR_22;
 Dwarf_Error VAR_23;
 Dwarf_Half VAR_24;
 Dwarf_Unsigned VAR_25, VAR_26, VAR_27;
 Dwarf_Signed VAR_28;
 Dwarf_Off VAR_29;
 Dwarf_Attribute VAR_30, VAR_31;
 Dwarf_Ranges *VAR_32;
 const char *VAR_33;
 struct Func *VAR_34;
 int VAR_35, VAR_36;

 VAR_34 = ((void*)0);
 VAR_21 = VAR_22 = ((void*)0);

 if (FUNC_12(VAR_17, &VAR_24, &VAR_23)) {
  FUNC_16("dwarf_tag: %s", FUNC_7(VAR_23));
  goto cont_search;
 }
 if (VAR_24 == VAR_13 || VAR_24 == VAR_11 ||
     VAR_24 == VAR_12) {





  VAR_32 = ((void*)0);
  VAR_28 = 0;
  VAR_35 = 0;
  if (FUNC_4(VAR_17, VAR_6, &VAR_27,
      &VAR_23) == VAR_10 &&
      FUNC_8(VAR_16, (Dwarf_Off) VAR_27, &VAR_32,
      &VAR_28, ((void*)0), &VAR_23) == VAR_10) {
   if (VAR_32 != ((void*)0) && VAR_28 > 0) {
    VAR_35 = 1;
    goto get_func_name;
   }
  }





  if (FUNC_4(VAR_17, VAR_4, &VAR_25, &VAR_23) ||
      FUNC_4(VAR_17, VAR_3, &VAR_26, &VAR_23))
   goto cont_search;
  if (FUNC_14(VAR_17, VAR_25, &VAR_26) != VAR_10)
   goto cont_search;

 get_func_name:




  if (FUNC_3(VAR_17, VAR_5, &VAR_33, &VAR_23) ==
      VAR_10)
   goto add_func;





  if (FUNC_2(VAR_17, VAR_0, &VAR_30, &VAR_23) ==
      VAR_10 &&
      FUNC_9(VAR_30, &VAR_29, &VAR_23) == VAR_10 &&
      FUNC_10(VAR_16, VAR_29, &VAR_21, &VAR_23) == VAR_10 &&
      FUNC_3(VAR_21, VAR_5, &VAR_33,
      &VAR_23) == VAR_10)
   goto add_func;






  if (FUNC_2(VAR_17, VAR_7, &VAR_31, &VAR_23) ==
      VAR_10 &&
      FUNC_9(VAR_31, &VAR_29, &VAR_23) == VAR_10 &&
      FUNC_10(VAR_16, VAR_29, &VAR_22, &VAR_23) == VAR_10 &&
      FUNC_3(VAR_22, VAR_5, &VAR_33,
      &VAR_23) == VAR_10)
   goto add_func;


  goto cont_search;

 add_func:
  if ((VAR_34 = FUNC_1(1, sizeof(*VAR_34))) == ((void*)0))
   FUNC_13(VAR_14, "calloc");
  if ((VAR_34->name = FUNC_15(VAR_33)) == ((void*)0))
   FUNC_13(VAR_14, "strdup");
  if (VAR_35) {
   VAR_34->ranges = VAR_32;
   VAR_34->ranges_cnt = VAR_28;
  } else {
   VAR_34->lopc = VAR_25;
   VAR_34->hipc = VAR_26;
  }
  if (VAR_24 == VAR_12) {
   VAR_34->inlined_caller = VAR_18;
   FUNC_4(VAR_17, VAR_1,
       &VAR_34->call_file, &VAR_23);
   FUNC_4(VAR_17, VAR_2,
       &VAR_34->call_line, &VAR_23);
  }
  FUNC_0(&VAR_19->funclist, VAR_34, VAR_15);
 }

cont_search:


 VAR_36 = FUNC_5(VAR_17, &VAR_20, &VAR_23);
 if (VAR_36 == VAR_9)
  FUNC_16("dwarf_child: %s", FUNC_7(VAR_23));
 else if (VAR_36 == VAR_10) {
  if (VAR_34 != ((void*)0))
   FUNC_17(VAR_16, VAR_20, VAR_34, VAR_19);
  else
   FUNC_17(VAR_16, VAR_20, VAR_18, VAR_19);
 }


 VAR_36 = FUNC_11(VAR_16, VAR_17, &VAR_20, &VAR_23);
 if (VAR_36 == VAR_9)
  FUNC_16("dwarf_siblingof: %s", FUNC_7(VAR_23));
 else if (VAR_36 == VAR_10)
  FUNC_17(VAR_16, VAR_20, VAR_18, VAR_19);


 FUNC_6(VAR_16, VAR_17, VAR_8);

 if (VAR_21 != ((void*)0))
  FUNC_6(VAR_16, VAR_21, VAR_8);

 if (VAR_22 != ((void*)0))
  FUNC_6(VAR_16, VAR_22, VAR_8);
}
