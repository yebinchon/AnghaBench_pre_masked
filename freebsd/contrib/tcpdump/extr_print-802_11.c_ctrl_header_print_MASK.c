
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint16_t ;
typedef int u_char ;
struct ctrl_rts_hdr_t {int ta; int ra; } ;
struct ctrl_ps_poll_hdr_t {int ta; int bssid; } ;
struct ctrl_end_hdr_t {int bssid; int ra; } ;
struct ctrl_end_ack_hdr_t {int bssid; int ra; } ;
struct ctrl_cts_hdr_t {int ra; } ;
struct ctrl_bar_hdr_t {int seq; int ctl; int ta; int ra; } ;
struct ctrl_ba_hdr_t {int ra; } ;
struct ctrl_ack_hdr_t {int ra; } ;
typedef int netdissect_options ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *,int ) ;

__attribute__((used)) static void
FUNC_4(netdissect_options *VAR_0, uint16_t VAR_1, const u_char *VAR_2)
{
 switch (FUNC_1(VAR_1)) {
 case 133:
  FUNC_2((VAR_0, " RA:%s TA:%s CTL(%x) SEQ(%u) ",
      FUNC_3(VAR_0, ((const struct ctrl_bar_hdr_t *)VAR_2)->ra),
      FUNC_3(VAR_0, ((const struct ctrl_bar_hdr_t *)VAR_2)->ta),
      FUNC_0(&(((const struct ctrl_bar_hdr_t *)VAR_2)->ctl)),
      FUNC_0(&(((const struct ctrl_bar_hdr_t *)VAR_2)->seq))));
  break;
 case 134:
  FUNC_2((VAR_0, "RA:%s ",
      FUNC_3(VAR_0, ((const struct ctrl_ba_hdr_t *)VAR_2)->ra)));
  break;
 case 129:
  FUNC_2((VAR_0, "BSSID:%s TA:%s ",
      FUNC_3(VAR_0, ((const struct ctrl_ps_poll_hdr_t *)VAR_2)->bssid),
      FUNC_3(VAR_0, ((const struct ctrl_ps_poll_hdr_t *)VAR_2)->ta)));
  break;
 case 128:
  FUNC_2((VAR_0, "RA:%s TA:%s ",
      FUNC_3(VAR_0, ((const struct ctrl_rts_hdr_t *)VAR_2)->ra),
      FUNC_3(VAR_0, ((const struct ctrl_rts_hdr_t *)VAR_2)->ta)));
  break;
 case 131:
  FUNC_2((VAR_0, "RA:%s ",
      FUNC_3(VAR_0, ((const struct ctrl_cts_hdr_t *)VAR_2)->ra)));
  break;
 case 135:
  FUNC_2((VAR_0, "RA:%s ",
      FUNC_3(VAR_0, ((const struct ctrl_ack_hdr_t *)VAR_2)->ra)));
  break;
 case 132:
  FUNC_2((VAR_0, "RA:%s BSSID:%s ",
      FUNC_3(VAR_0, ((const struct ctrl_end_hdr_t *)VAR_2)->ra),
      FUNC_3(VAR_0, ((const struct ctrl_end_hdr_t *)VAR_2)->bssid)));
  break;
 case 130:
  FUNC_2((VAR_0, "RA:%s BSSID:%s ",
      FUNC_3(VAR_0, ((const struct ctrl_end_ack_hdr_t *)VAR_2)->ra),
      FUNC_3(VAR_0, ((const struct ctrl_end_ack_hdr_t *)VAR_2)->bssid)));
  break;
 default:

  break;
 }
}
