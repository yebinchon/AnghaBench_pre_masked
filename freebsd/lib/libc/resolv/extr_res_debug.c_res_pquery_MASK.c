
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef size_t u_int ;
typedef int u_char ;
typedef TYPE_1__* res_state ;
typedef int ns_msg ;
struct TYPE_4__ {int pfcode; } ;
typedef int FILE ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 char** VAR_7 ;
 int FUNC_0 (TYPE_1__* const,int *,int ,int ,int *) ;
 int VAR_8 ;
 int FUNC_1 (int *,char*,...) ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 scalar_t__ FUNC_2 (int const*,int,int *) ;
 int FUNC_3 (int ,int ) ;
 size_t FUNC_4 (int ,int ) ;
 size_t FUNC_5 (int ) ;
 int VAR_19 ;
 int VAR_20 ;
 int VAR_21 ;
 int VAR_22 ;
 char* FUNC_6 (size_t) ;
 char* FUNC_7 (int ,size_t) ;
 int FUNC_8 (char,int *) ;
 char* FUNC_9 (int ) ;

void
FUNC_10(const res_state VAR_23, const u_char *VAR_24, int VAR_25, FILE *VAR_26) {
 ns_msg VAR_27;
 int VAR_28, VAR_29, VAR_30, VAR_31;
 u_int VAR_32, VAR_33, VAR_34;

 if (FUNC_2(VAR_24, VAR_25, &VAR_27) < 0) {
  FUNC_1(VAR_26, ";; ns_initparse: %s\n", FUNC_9(VAR_8));
  return;
 }
 VAR_32 = FUNC_4(VAR_27, VAR_12);
 VAR_33 = FUNC_4(VAR_27, VAR_15);
 VAR_34 = FUNC_5(VAR_27);
 VAR_28 = FUNC_3(VAR_27, VAR_22);
 VAR_29 = FUNC_3(VAR_27, VAR_19);
 VAR_30 = FUNC_3(VAR_27, VAR_21);
 VAR_31 = FUNC_3(VAR_27, VAR_20);




 if ((!VAR_23->pfcode) || (VAR_23->pfcode & VAR_5) || VAR_33)
  FUNC_1(VAR_26,
   ";; ->>HEADER<<- opcode: %s, status: %s, id: %d\n",
   VAR_7[VAR_32], FUNC_6(VAR_33), VAR_34);
 if ((!VAR_23->pfcode) || (VAR_23->pfcode & VAR_5))
  FUNC_8(';', VAR_26);
 if ((!VAR_23->pfcode) || (VAR_23->pfcode & VAR_4)) {
  FUNC_1(VAR_26, "; flags:");
  if (FUNC_4(VAR_27, VAR_13))
   FUNC_1(VAR_26, " qr");
  if (FUNC_4(VAR_27, VAR_9))
   FUNC_1(VAR_26, " aa");
  if (FUNC_4(VAR_27, VAR_17))
   FUNC_1(VAR_26, " tc");
  if (FUNC_4(VAR_27, VAR_16))
   FUNC_1(VAR_26, " rd");
  if (FUNC_4(VAR_27, VAR_14))
   FUNC_1(VAR_26, " ra");
  if (FUNC_4(VAR_27, VAR_18))
   FUNC_1(VAR_26, " ??");
  if (FUNC_4(VAR_27, VAR_10))
   FUNC_1(VAR_26, " ad");
  if (FUNC_4(VAR_27, VAR_11))
   FUNC_1(VAR_26, " cd");
 }
 if ((!VAR_23->pfcode) || (VAR_23->pfcode & VAR_3)) {
  FUNC_1(VAR_26, "; %s: %d",
   FUNC_7(VAR_22, VAR_32), VAR_28);
  FUNC_1(VAR_26, ", %s: %d",
   FUNC_7(VAR_19, VAR_32), VAR_29);
  FUNC_1(VAR_26, ", %s: %d",
   FUNC_7(VAR_21, VAR_32), VAR_30);
  FUNC_1(VAR_26, ", %s: %d",
   FUNC_7(VAR_20, VAR_32), VAR_31);
 }
 if ((!VAR_23->pfcode) || (VAR_23->pfcode &
  (VAR_5 | VAR_4 | VAR_3))) {
  FUNC_8('\n',VAR_26);
 }



 FUNC_0(VAR_23, &VAR_27, VAR_22, VAR_6, VAR_26);
 FUNC_0(VAR_23, &VAR_27, VAR_19, VAR_1, VAR_26);
 FUNC_0(VAR_23, &VAR_27, VAR_21, VAR_2, VAR_26);
 FUNC_0(VAR_23, &VAR_27, VAR_20, VAR_0, VAR_26);
 if (VAR_28 == 0 && VAR_29 == 0 &&
     VAR_30 == 0 && VAR_31 == 0)
  FUNC_8('\n', VAR_26);
}
