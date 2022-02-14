
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int ldns_status ;
typedef int ldns_pkt ;
struct TYPE_3__ {scalar_t__ name; } ;
typedef TYPE_1__ ldns_lookup_table ;
typedef int ldns_buffer ;


 int FUNC_0 (int *,char*,...) ;
 int FUNC_1 (int *) ;
 TYPE_1__* FUNC_2 (int ,int) ;
 int VAR_0 ;
 scalar_t__ FUNC_3 (int const*) ;
 scalar_t__ FUNC_4 (int const*) ;
 scalar_t__ FUNC_5 (int const*) ;
 scalar_t__ FUNC_6 (int const*) ;
 scalar_t__ FUNC_7 (int const*) ;
 scalar_t__ FUNC_8 (int const*) ;
 scalar_t__ FUNC_9 (int const*) ;
 scalar_t__ FUNC_10 (int const*) ;
 scalar_t__ FUNC_11 (int const*) ;
 scalar_t__ FUNC_12 (int const*) ;
 scalar_t__ FUNC_13 (int const*) ;
 scalar_t__ FUNC_14 (int const*) ;
 scalar_t__ FUNC_15 (int const*) ;
 scalar_t__ FUNC_16 (int const*) ;
 int VAR_1 ;

ldns_status
FUNC_17(ldns_buffer *VAR_2, const ldns_pkt *VAR_3)
{
 ldns_lookup_table *VAR_4 = FUNC_2(VAR_0,
                       (int) FUNC_8(VAR_3));
 ldns_lookup_table *VAR_5 = FUNC_2(VAR_1,
                       (int) FUNC_9(VAR_3));

 FUNC_0(VAR_2, ";; ->>HEADER<<- ");
 if (VAR_4) {
  FUNC_0(VAR_2, "opcode: %s, ", VAR_4->name);
 } else {
  FUNC_0(VAR_2, "opcode: ?? (%u), ",
    FUNC_8(VAR_3));
 }
 if (VAR_5) {
  FUNC_0(VAR_2, "rcode: %s, ", VAR_5->name);
 } else {
  FUNC_0(VAR_2, "rcode: ?? (%u), ", FUNC_9(VAR_3));
 }
 FUNC_0(VAR_2, "id: %d\n", FUNC_10(VAR_3));
 FUNC_0(VAR_2, ";; flags: ");

 if (FUNC_13(VAR_3)) {
  FUNC_0(VAR_2, "qr ");
 }
 if (FUNC_3(VAR_3)) {
  FUNC_0(VAR_2, "aa ");
 }
 if (FUNC_16(VAR_3)) {
  FUNC_0(VAR_2, "tc ");
 }
 if (FUNC_15(VAR_3)) {
  FUNC_0(VAR_2, "rd ");
 }
 if (FUNC_7(VAR_3)) {
  FUNC_0(VAR_2, "cd ");
 }
 if (FUNC_14(VAR_3)) {
  FUNC_0(VAR_2, "ra ");
 }
 if (FUNC_4(VAR_3)) {
  FUNC_0(VAR_2, "ad ");
 }
 FUNC_0(VAR_2, "; ");
 FUNC_0(VAR_2, "QUERY: %u, ", FUNC_12(VAR_3));
 FUNC_0(VAR_2, "ANSWER: %u, ", FUNC_5(VAR_3));
 FUNC_0(VAR_2, "AUTHORITY: %u, ", FUNC_11(VAR_3));
 FUNC_0(VAR_2, "ADDITIONAL: %u ", FUNC_6(VAR_3));
 return FUNC_1(VAR_2);
}
