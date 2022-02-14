
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint16_t ;
typedef int u_int ;
typedef int u_char ;
typedef int netdissect_options ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (int ) ;
 scalar_t__ FUNC_3 (int ) ;
 int FUNC_4 (int ) ;
 scalar_t__ FUNC_5 (int ) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *,int ) ;

__attribute__((used)) static void
FUNC_8(netdissect_options *VAR_4, uint16_t VAR_5, const u_char *VAR_6)
{
 u_int VAR_7 = FUNC_4(VAR_5);

 if (FUNC_0(VAR_7) || FUNC_1(VAR_7) ||
     FUNC_2(VAR_7)) {
  FUNC_6((VAR_4, "CF "));
  if (FUNC_0(VAR_7)) {
   if (FUNC_1(VAR_7))
    FUNC_6((VAR_4, "Ack/Poll"));
   else
    FUNC_6((VAR_4, "Ack"));
  } else {
   if (FUNC_1(VAR_7))
    FUNC_6((VAR_4, "Poll"));
  }
  if (FUNC_2(VAR_7))
   FUNC_6((VAR_4, "+QoS"));
  FUNC_6((VAR_4, " "));
 }






 if (!FUNC_5(VAR_5) && !FUNC_3(VAR_5)) {
  FUNC_6((VAR_4, "DA:%s SA:%s BSSID:%s ",
      FUNC_7(VAR_4, (VAR_6 + 4)), FUNC_7(VAR_4, (VAR_6 + 10)),
      FUNC_7(VAR_4, (VAR_6 + 16))));
 } else if (!FUNC_5(VAR_5) && FUNC_3(VAR_5)) {
  FUNC_6((VAR_4, "DA:%s BSSID:%s SA:%s ",
      FUNC_7(VAR_4, (VAR_6 + 4)), FUNC_7(VAR_4, (VAR_6 + 10)),
      FUNC_7(VAR_4, (VAR_6 + 16))));
 } else if (FUNC_5(VAR_5) && !FUNC_3(VAR_5)) {
  FUNC_6((VAR_4, "BSSID:%s SA:%s DA:%s ",
      FUNC_7(VAR_4, (VAR_6 + 4)), FUNC_7(VAR_4, (VAR_6 + 10)),
      FUNC_7(VAR_4, (VAR_6 + 16))));
 } else if (FUNC_5(VAR_5) && FUNC_3(VAR_5)) {
  FUNC_6((VAR_4, "RA:%s TA:%s DA:%s SA:%s ",
      FUNC_7(VAR_4, (VAR_6 + 4)), FUNC_7(VAR_4, (VAR_6 + 10)),
      FUNC_7(VAR_4, (VAR_6 + 16)), FUNC_7(VAR_4, (VAR_6 + 24))));
 }





}
