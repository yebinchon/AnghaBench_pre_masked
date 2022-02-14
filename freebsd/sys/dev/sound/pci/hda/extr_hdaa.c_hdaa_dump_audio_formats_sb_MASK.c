
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ uint32_t ;
struct sbuf {int dummy; } ;


 scalar_t__ FUNC_0 (scalar_t__) ;
 scalar_t__ FUNC_1 (scalar_t__) ;
 scalar_t__ FUNC_2 (scalar_t__) ;
 scalar_t__ FUNC_3 (scalar_t__) ;
 scalar_t__ FUNC_4 (scalar_t__) ;
 scalar_t__ FUNC_5 (scalar_t__) ;
 scalar_t__ FUNC_6 (scalar_t__) ;
 scalar_t__ FUNC_7 (scalar_t__) ;
 scalar_t__ FUNC_8 (scalar_t__) ;
 scalar_t__ FUNC_9 (scalar_t__) ;
 scalar_t__ FUNC_10 (scalar_t__) ;
 scalar_t__ FUNC_11 (scalar_t__) ;
 scalar_t__ FUNC_12 (scalar_t__) ;
 scalar_t__ FUNC_13 (scalar_t__) ;
 scalar_t__ FUNC_14 (scalar_t__) ;
 scalar_t__ FUNC_15 (scalar_t__) ;
 scalar_t__ FUNC_16 (scalar_t__) ;
 scalar_t__ FUNC_17 (scalar_t__) ;
 int FUNC_18 (struct sbuf*,char*,...) ;

__attribute__((used)) static void
FUNC_19(struct sbuf *VAR_0, uint32_t VAR_1, uint32_t VAR_2)
{
 uint32_t VAR_3;

 VAR_3 = VAR_1;
 if (VAR_3 != 0) {
  FUNC_18(VAR_0, "     Stream cap: 0x%08x", VAR_3);
  if (FUNC_15(VAR_3))
   FUNC_18(VAR_0, " AC3");
  if (FUNC_16(VAR_3))
   FUNC_18(VAR_0, " FLOAT32");
  if (FUNC_17(VAR_3))
   FUNC_18(VAR_0, " PCM");
  FUNC_18(VAR_0, "\n");
 }
 VAR_3 = VAR_2;
 if (VAR_3 != 0) {
  FUNC_18(VAR_0, "        PCM cap: 0x%08x", VAR_3);
  if (FUNC_12(VAR_3))
   FUNC_18(VAR_0, " 8");
  if (FUNC_1(VAR_3))
   FUNC_18(VAR_0, " 16");
  if (FUNC_5(VAR_3))
   FUNC_18(VAR_0, " 20");
  if (FUNC_7(VAR_3))
   FUNC_18(VAR_0, " 24");
  if (FUNC_8(VAR_3))
   FUNC_18(VAR_0, " 32");
  FUNC_18(VAR_0, " bits,");
  if (FUNC_13(VAR_3))
   FUNC_18(VAR_0, " 8");
  if (FUNC_0(VAR_3))
   FUNC_18(VAR_0, " 11");
  if (FUNC_2(VAR_3))
   FUNC_18(VAR_0, " 16");
  if (FUNC_6(VAR_3))
   FUNC_18(VAR_0, " 22");
  if (FUNC_9(VAR_3))
   FUNC_18(VAR_0, " 32");
  if (FUNC_10(VAR_3))
   FUNC_18(VAR_0, " 44");
  FUNC_18(VAR_0, " 48");
  if (FUNC_11(VAR_3))
   FUNC_18(VAR_0, " 88");
  if (FUNC_14(VAR_3))
   FUNC_18(VAR_0, " 96");
  if (FUNC_3(VAR_3))
   FUNC_18(VAR_0, " 176");
  if (FUNC_4(VAR_3))
   FUNC_18(VAR_0, " 192");
  FUNC_18(VAR_0, " KHz\n");
 }
}
