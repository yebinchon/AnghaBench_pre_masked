
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct readelf {int dbg; int cu_ver; int cu_osize; int cu_psize; } ;
struct loc_at {int la_cu_ver; int la_cu_osize; int la_cu_psize; void* la_lowpc; void* la_off; int la_at; } ;
typedef void* Dwarf_Unsigned ;
typedef int Dwarf_Signed ;
typedef void* Dwarf_Off ;
typedef scalar_t__ Dwarf_Half ;
typedef int Dwarf_Error ;
typedef int Dwarf_Die ;
typedef int Dwarf_Bool ;
typedef int Dwarf_Attribute ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 scalar_t__ VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 scalar_t__ VAR_11 ;
 scalar_t__ VAR_12 ;
 scalar_t__ VAR_13 ;
 int VAR_14 ;
 int FUNC_0 (int ,int **,int*,int *) ;
 int FUNC_1 (int ,int *,int *) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ,void**,int *) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int ,void**,int *) ;
 int FUNC_6 (int ,int ,int *,int ,int *) ;
 int FUNC_7 (int ,scalar_t__*,int *) ;
 int FUNC_8 (int ,scalar_t__*,int *) ;
 int FUNC_9 (int ,char*) ;
 struct loc_at* FUNC_10 (struct loc_at*,size_t) ;
 int FUNC_11 (char*,int ) ;

__attribute__((used)) static void
FUNC_12(struct readelf *VAR_15, Dwarf_Die VAR_16, Dwarf_Unsigned VAR_17,
    struct loc_at **VAR_18, size_t *VAR_19, size_t *VAR_20)
{
 struct loc_at *VAR_21;
 Dwarf_Attribute *VAR_22;
 Dwarf_Die VAR_23;
 Dwarf_Unsigned VAR_24;
 Dwarf_Off VAR_25;
 Dwarf_Signed VAR_26;
 Dwarf_Half VAR_27, VAR_28;
 Dwarf_Bool VAR_29;
 Dwarf_Error VAR_30;
 int VAR_31, VAR_32;

 VAR_29 = FUNC_4(VAR_16);

 if ((VAR_32 = FUNC_0(VAR_16, &VAR_22, &VAR_26, &VAR_30)) !=
     VAR_10) {
  if (VAR_32 == VAR_9)
   FUNC_11("dwarf_attrlist failed: %s", FUNC_2(VAR_30));
  goto cont_search;
 }
 for (VAR_31 = 0; VAR_31 < VAR_26; VAR_31++) {
  if (FUNC_7(VAR_22[VAR_31], &VAR_27, &VAR_30) != VAR_10) {
   FUNC_11("dwarf_whatattr failed: %s", FUNC_2(VAR_30));
   continue;
  }
  if (VAR_27 != VAR_2 &&
      VAR_27 != VAR_6 &&
      VAR_27 != VAR_3 &&
      VAR_27 != VAR_0 &&
      VAR_27 != VAR_1 &&
      VAR_27 != VAR_4 &&
      VAR_27 != VAR_5 &&
      VAR_27 != VAR_7 &&
      VAR_27 != VAR_8)
   continue;
  if (FUNC_8(VAR_22[VAR_31], &VAR_28, &VAR_30) != VAR_10) {
   FUNC_11("dwarf_whatform failed: %s", FUNC_2(VAR_30));
   continue;
  }
  if (VAR_28 == VAR_11 || VAR_28 == VAR_12) {
   if (FUNC_3(VAR_22[VAR_31], &VAR_24, &VAR_30) !=
       VAR_10) {
    FUNC_11("dwarf_formudata failed: %s",
        FUNC_2(VAR_30));
    continue;
   }
  } else if (VAR_28 == VAR_13) {
   if (FUNC_5(VAR_22[VAR_31], &VAR_25, &VAR_30) !=
       VAR_10) {
    FUNC_11("dwarf_global_formref failed: %s",
        FUNC_2(VAR_30));
    continue;
   }
   VAR_24 = VAR_25;
  } else
   continue;

  if (*VAR_20 == *VAR_19) {
   *VAR_18 = FUNC_10(*VAR_18,
       *VAR_20 * 2 * sizeof(**VAR_18));
   if (VAR_18 == ((void*)0))
    FUNC_9(VAR_14, "realloc failed");
   *VAR_20 *= 2;
  }
  VAR_21 = &((*VAR_18)[*VAR_19]);
  VAR_21->la_at = VAR_22[VAR_31];
  VAR_21->la_off = VAR_24;
  VAR_21->la_lowpc = VAR_17;
  VAR_21->la_cu_psize = VAR_15->cu_psize;
  VAR_21->la_cu_osize = VAR_15->cu_osize;
  VAR_21->la_cu_ver = VAR_15->cu_ver;
  (*VAR_19)++;
 }

cont_search:

 VAR_32 = FUNC_1(VAR_16, &VAR_23, &VAR_30);
 if (VAR_32 == VAR_9)
  FUNC_11("dwarf_child: %s", FUNC_2(VAR_30));
 else if (VAR_32 == VAR_10)
  FUNC_12(VAR_15, VAR_23, VAR_17, VAR_18,
      VAR_19, VAR_20);


 VAR_32 = FUNC_6(VAR_15->dbg, VAR_16, &VAR_23, VAR_29, &VAR_30);
 if (VAR_32 == VAR_9)
  FUNC_11("dwarf_siblingof: %s", FUNC_2(VAR_30));
 else if (VAR_32 == VAR_10)
  FUNC_12(VAR_15, VAR_23, VAR_17, VAR_18,
      VAR_19, VAR_20);
}
