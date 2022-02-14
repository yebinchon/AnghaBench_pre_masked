
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ uint8_t ;
typedef int uint32_t ;
typedef scalar_t__ uint16_t ;
typedef int u_char ;
typedef int netdissect_options ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (int const*) ;
 int FUNC_1 (int const*) ;
 scalar_t__ VAR_3 ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int const,int) ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
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
 int FUNC_4 (int *,int const*) ;
 int FUNC_5 (int *,int const*) ;
 int VAR_19 ;
 int FUNC_6 (int const) ;
 int FUNC_7 (int ,char*,scalar_t__) ;
 int VAR_20 ;
 int FUNC_8 (scalar_t__) ;

__attribute__((used)) static const u_char *
FUNC_9(netdissect_options *VAR_21,
                 const char *VAR_22, const u_char *VAR_23, const u_char *VAR_24)
{
 uint32_t VAR_25;
 uint16_t VAR_26;
 uint8_t VAR_27;
 u_char VAR_28;
 const char *VAR_29;


 FUNC_3(*VAR_23, 4);
 VAR_25 = FUNC_1(VAR_23);
 if (VAR_25 & VAR_18)
  FUNC_2((VAR_21, "%swildcards 0x%08x (bogus)", VAR_22, VAR_25));
 VAR_23 += 4;

 FUNC_3(*VAR_23, 2);
 if (! (VAR_25 & VAR_9))
  FUNC_2((VAR_21, "%smatch in_port %s", VAR_22, FUNC_7(VAR_19, "%u", FUNC_0(VAR_23))));
 VAR_23 += 2;

 FUNC_3(*VAR_23, VAR_2);
 if (! (VAR_25 & VAR_5))
  FUNC_2((VAR_21, "%smatch dl_src %s", VAR_22, FUNC_4(VAR_21, VAR_23)));
 VAR_23 += VAR_2;

 FUNC_3(*VAR_23, VAR_2);
 if (! (VAR_25 & VAR_4))
  FUNC_2((VAR_21, "%smatch dl_dst %s", VAR_22, FUNC_4(VAR_21, VAR_23)));
 VAR_23 += VAR_2;

 FUNC_3(*VAR_23, 2);
 if (! (VAR_25 & VAR_7))
  FUNC_2((VAR_21, "%smatch dl_vlan %s", VAR_22, FUNC_8(FUNC_0(VAR_23))));
 VAR_23 += 2;

 FUNC_3(*VAR_23, 1);
 if (! (VAR_25 & VAR_8))
  FUNC_2((VAR_21, "%smatch dl_vlan_pcp %s", VAR_22, FUNC_6(*VAR_23)));
 VAR_23 += 1;

 FUNC_3(*VAR_23, 1);
 VAR_23 += 1;

 FUNC_3(*VAR_23, 2);
 VAR_26 = FUNC_0(VAR_23);
 VAR_23 += 2;
 if (! (VAR_25 & VAR_6))
  FUNC_2((VAR_21, "%smatch dl_type 0x%04x", VAR_22, VAR_26));

 FUNC_3(*VAR_23, 1);
 if (! (VAR_25 & VAR_15))
  FUNC_2((VAR_21, "%smatch nw_tos 0x%02x", VAR_22, *VAR_23));
 VAR_23 += 1;

 FUNC_3(*VAR_23, 1);
 VAR_27 = *VAR_23;
 VAR_23 += 1;
 if (! (VAR_25 & VAR_12)) {
  VAR_29 = ! (VAR_25 & VAR_6) && VAR_26 == VAR_0
    ? "arp_opcode" : "nw_proto";
  FUNC_2((VAR_21, "%smatch %s %u", VAR_22, VAR_29, VAR_27));
 }

 FUNC_3(*VAR_23, 2);
 VAR_23 += 2;

 FUNC_3(*VAR_23, 4);
 VAR_28 = (VAR_25 & VAR_13) >> VAR_14;
 if (VAR_28 < 32)
  FUNC_2((VAR_21, "%smatch nw_src %s/%u", VAR_22, FUNC_5(VAR_21, VAR_23), 32 - VAR_28));
 VAR_23 += 4;

 FUNC_3(*VAR_23, 4);
 VAR_28 = (VAR_25 & VAR_10) >> VAR_11;
 if (VAR_28 < 32)
  FUNC_2((VAR_21, "%smatch nw_dst %s/%u", VAR_22, FUNC_5(VAR_21, VAR_23), 32 - VAR_28));
 VAR_23 += 4;

 FUNC_3(*VAR_23, 2);
 if (! (VAR_25 & VAR_17)) {
  VAR_29 = ! (VAR_25 & VAR_6) && VAR_26 == VAR_1
    && ! (VAR_25 & VAR_12) && VAR_27 == VAR_3
    ? "icmp_type" : "tp_src";
  FUNC_2((VAR_21, "%smatch %s %u", VAR_22, VAR_29, FUNC_0(VAR_23)));
 }
 VAR_23 += 2;

 FUNC_3(*VAR_23, 2);
 if (! (VAR_25 & VAR_16)) {
  VAR_29 = ! (VAR_25 & VAR_6) && VAR_26 == VAR_1
    && ! (VAR_25 & VAR_12) && VAR_27 == VAR_3
    ? "icmp_code" : "tp_dst";
  FUNC_2((VAR_21, "%smatch %s %u", VAR_22, VAR_29, FUNC_0(VAR_23)));
 }
 return VAR_23 + 2;

trunc:
 FUNC_2((VAR_21, "%s", VAR_20));
 return VAR_24;
}
