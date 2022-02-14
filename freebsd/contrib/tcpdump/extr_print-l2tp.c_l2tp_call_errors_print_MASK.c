
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint16_t ;
typedef int u_int ;
typedef int u_char ;
typedef int netdissect_options ;


 int FUNC_0 (int const*) ;
 int FUNC_1 (int *) ;

__attribute__((used)) static void
FUNC_2(netdissect_options *VAR_0, const u_char *VAR_1, u_int VAR_2)
{
 const uint16_t *VAR_3 = (const uint16_t *)VAR_1;
 uint16_t VAR_4, VAR_5;

 if (VAR_2 < 2) {
  FUNC_1((VAR_0, "AVP too short"));
  return;
 }
 VAR_3++;
 VAR_2 -= 2;

 if (VAR_2 < 4) {
  FUNC_1((VAR_0, "AVP too short"));
  return;
 }
 VAR_4 = FUNC_0(VAR_3); VAR_3++; VAR_2 -= 2;
 VAR_5 = FUNC_0(VAR_3); VAR_3++; VAR_2 -= 2;
 FUNC_1((VAR_0, "CRCErr=%u ", (VAR_4<<16) + VAR_5));

 if (VAR_2 < 4) {
  FUNC_1((VAR_0, "AVP too short"));
  return;
 }
 VAR_4 = FUNC_0(VAR_3); VAR_3++; VAR_2 -= 2;
 VAR_5 = FUNC_0(VAR_3); VAR_3++; VAR_2 -= 2;
 FUNC_1((VAR_0, "FrameErr=%u ", (VAR_4<<16) + VAR_5));

 if (VAR_2 < 4) {
  FUNC_1((VAR_0, "AVP too short"));
  return;
 }
 VAR_4 = FUNC_0(VAR_3); VAR_3++; VAR_2 -= 2;
 VAR_5 = FUNC_0(VAR_3); VAR_3++; VAR_2 -= 2;
 FUNC_1((VAR_0, "HardOver=%u ", (VAR_4<<16) + VAR_5));

 if (VAR_2 < 4) {
  FUNC_1((VAR_0, "AVP too short"));
  return;
 }
 VAR_4 = FUNC_0(VAR_3); VAR_3++; VAR_2 -= 2;
 VAR_5 = FUNC_0(VAR_3); VAR_3++; VAR_2 -= 2;
 FUNC_1((VAR_0, "BufOver=%u ", (VAR_4<<16) + VAR_5));

 if (VAR_2 < 4) {
  FUNC_1((VAR_0, "AVP too short"));
  return;
 }
 VAR_4 = FUNC_0(VAR_3); VAR_3++; VAR_2 -= 2;
 VAR_5 = FUNC_0(VAR_3); VAR_3++; VAR_2 -= 2;
 FUNC_1((VAR_0, "Timeout=%u ", (VAR_4<<16) + VAR_5));

 if (VAR_2 < 4) {
  FUNC_1((VAR_0, "AVP too short"));
  return;
 }
 VAR_4 = FUNC_0(VAR_3); VAR_3++;
 VAR_5 = FUNC_0(VAR_3); VAR_3++;
 FUNC_1((VAR_0, "AlignErr=%u ", (VAR_4<<16) + VAR_5));
}
