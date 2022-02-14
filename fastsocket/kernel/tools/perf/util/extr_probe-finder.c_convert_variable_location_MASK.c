
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct probe_trace_arg {int * ref; int * value; } ;
struct TYPE_4__ {scalar_t__ atom; unsigned int number; unsigned int number2; } ;
typedef unsigned int Dwarf_Word ;
typedef TYPE_1__ Dwarf_Op ;
typedef int Dwarf_Die ;
typedef int Dwarf_Attribute ;
typedef int Dwarf_Addr ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 scalar_t__ VAR_8 ;
 scalar_t__ VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 void* FUNC_0 (long) ;
 int * FUNC_1 (int *,int ,int *) ;
 char* FUNC_2 (int *) ;
 scalar_t__ FUNC_3 (int *,int ,TYPE_1__**,size_t*,int) ;
 char* FUNC_4 (unsigned int) ;
 int FUNC_5 (char*,scalar_t__) ;
 int FUNC_6 (char*,unsigned int) ;
 int FUNC_7 (int *,int,char*,char*) ;
 int * FUNC_8 (char const*) ;
 int FUNC_9 (char*) ;
 int * FUNC_10 (int) ;

__attribute__((used)) static int FUNC_11(Dwarf_Die *VAR_14, Dwarf_Addr VAR_15,
         Dwarf_Op *VAR_16,
         struct probe_trace_arg *VAR_17)
{
 Dwarf_Attribute VAR_18;
 Dwarf_Op *VAR_19;
 size_t VAR_20;
 unsigned int VAR_21;
 Dwarf_Word VAR_22 = 0;
 bool VAR_23 = 0;
 const char *VAR_24;
 int VAR_25;

 if (FUNC_1(VAR_14, VAR_0, &VAR_18) != ((void*)0))
  goto static_var;


 if (FUNC_1(VAR_14, VAR_1, &VAR_18) == ((void*)0) ||
     FUNC_3(&VAR_18, VAR_15, &VAR_19, &VAR_20, 1) <= 0 ||
     VAR_20 == 0) {

  return -VAR_10;
 }

 if (VAR_19->atom == VAR_2) {
static_var:
  if (!VAR_17)
   return 0;

  VAR_25 = FUNC_9(FUNC_2(VAR_14));
  VAR_17->value = FUNC_10(VAR_25 + 2);
  if (VAR_17->value == ((void*)0))
   return -VAR_11;
  FUNC_7(VAR_17->value, VAR_25 + 2, "@%s", FUNC_2(VAR_14));
  VAR_17->ref = FUNC_0((long)VAR_22);
  if (VAR_17->ref == ((void*)0))
   return -VAR_11;
  return 0;
 }


 if (VAR_19->atom == VAR_6) {
  if (VAR_16 == ((void*)0))
   return -VAR_12;
  VAR_23 = 1;
  VAR_22 = VAR_19->number;
  VAR_19 = &VAR_16[0];
 }

 if (VAR_19->atom >= VAR_3 && VAR_19->atom <= VAR_4) {
  VAR_21 = VAR_19->atom - VAR_3;
  VAR_22 += VAR_19->number;
  VAR_23 = 1;
 } else if (VAR_19->atom >= VAR_7 && VAR_19->atom <= VAR_8) {
  VAR_21 = VAR_19->atom - VAR_7;
 } else if (VAR_19->atom == VAR_5) {
  VAR_21 = VAR_19->number;
  VAR_22 += VAR_19->number2;
  VAR_23 = 1;
 } else if (VAR_19->atom == VAR_9) {
  VAR_21 = VAR_19->number;
 } else {
  FUNC_5("DW_OP %x is not supported.\n", VAR_19->atom);
  return -VAR_12;
 }

 if (!VAR_17)
  return 0;

 VAR_24 = FUNC_4(VAR_21);
 if (!VAR_24) {

  FUNC_6("Mapping for the register number %u "
      "missing on this architecture.\n", VAR_21);
  return -VAR_13;
 }

 VAR_17->value = FUNC_8(VAR_24);
 if (VAR_17->value == ((void*)0))
  return -VAR_11;

 if (VAR_23) {
  VAR_17->ref = FUNC_0((long)VAR_22);
  if (VAR_17->ref == ((void*)0))
   return -VAR_11;
 }
 return 0;
}
