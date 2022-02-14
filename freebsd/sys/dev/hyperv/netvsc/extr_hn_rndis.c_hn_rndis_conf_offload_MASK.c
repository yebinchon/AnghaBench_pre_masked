
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int uint32_t ;
struct TYPE_4__ {size_t ndis_size; int ndis_rev; int ndis_type; } ;
struct ndis_offload_params {scalar_t__ ndis_ip4csum; scalar_t__ ndis_tcp4csum; scalar_t__ ndis_udp4csum; scalar_t__ ndis_tcp6csum; scalar_t__ ndis_udp6csum; void* ndis_lsov2_ip6; void* ndis_lsov2_ip4; TYPE_1__ ndis_hdr; } ;
struct TYPE_6__ {int ndis_ip4_txcsum; int ndis_ip4_rxcsum; int ndis_ip6_txcsum; int ndis_ip6_rxcsum; } ;
struct TYPE_5__ {int ndis_ip4_encap; int ndis_ip4_maxsz; int ndis_ip4_minsg; int ndis_ip6_encap; int ndis_ip6_opts; int ndis_ip6_maxsz; int ndis_ip6_minsg; } ;
struct ndis_offload {TYPE_3__ ndis_csum; TYPE_2__ ndis_lsov2; } ;
struct hn_softc {scalar_t__ hn_ndis_ver; int hn_ndis_tso_szmax; int hn_ndis_tso_sgmin; int hn_caps; int hn_ifp; } ;
typedef int params ;


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
 int VAR_11 ;
 scalar_t__ VAR_12 ;
 int VAR_13 ;
 int FUNC_0 (int,char*) ;
 int VAR_14 ;
 int VAR_15 ;
 void* VAR_16 ;
 void* VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;
 size_t VAR_20 ;
 size_t VAR_21 ;
 void* VAR_22 ;
 scalar_t__ VAR_23 ;
 void* VAR_24 ;
 int VAR_25 ;
 int VAR_26 ;
 int VAR_27 ;
 int VAR_28 ;
 int VAR_29 ;
 int VAR_30 ;
 int VAR_31 ;
 scalar_t__ VAR_32 ;
 int FUNC_1 (struct hn_softc*,struct ndis_offload*) ;
 int FUNC_2 (struct hn_softc*,int ,struct ndis_offload_params*,size_t) ;
 int FUNC_3 (int ,char*,...) ;
 int FUNC_4 (struct ndis_offload_params*,int ,int) ;

__attribute__((used)) static int
FUNC_5(struct hn_softc *VAR_33, int VAR_34)
{
 struct ndis_offload VAR_35;
 struct ndis_offload_params VAR_36;
 uint32_t VAR_37 = 0;
 size_t VAR_38;
 int VAR_39, VAR_40, VAR_41;

 VAR_39 = FUNC_1(VAR_33, &VAR_35);
 if (VAR_39) {
  FUNC_3(VAR_33->hn_ifp, "hwcaps query failed: %d\n", VAR_39);
  return (VAR_39);
 }


 FUNC_4(&VAR_36, 0, sizeof(VAR_36));

 VAR_36.ndis_hdr.ndis_type = VAR_14;
 if (VAR_33->hn_ndis_ver < VAR_12) {
  VAR_36.ndis_hdr.ndis_rev = VAR_18;
  VAR_38 = VAR_21;
 } else {
  VAR_36.ndis_hdr.ndis_rev = VAR_19;
  VAR_38 = VAR_20;
 }
 VAR_36.ndis_hdr.ndis_size = VAR_38;




 VAR_40 = VAR_13;
 VAR_41 = 2;
 if (VAR_35.ndis_lsov2.ndis_ip4_encap & VAR_15) {
  VAR_37 |= VAR_3;
  VAR_36.ndis_lsov2_ip4 = VAR_17;

  if (VAR_35.ndis_lsov2.ndis_ip4_maxsz < VAR_40)
   VAR_40 = VAR_35.ndis_lsov2.ndis_ip4_maxsz;
  if (VAR_35.ndis_lsov2.ndis_ip4_minsg > VAR_41)
   VAR_41 = VAR_35.ndis_lsov2.ndis_ip4_minsg;
 }
 if ((VAR_35.ndis_lsov2.ndis_ip6_encap & VAR_15) &&
     (VAR_35.ndis_lsov2.ndis_ip6_opts & VAR_7) ==
     VAR_7) {
  VAR_37 |= VAR_4;
  VAR_36.ndis_lsov2_ip6 = VAR_17;

  if (VAR_35.ndis_lsov2.ndis_ip6_maxsz < VAR_40)
   VAR_40 = VAR_35.ndis_lsov2.ndis_ip6_maxsz;
  if (VAR_35.ndis_lsov2.ndis_ip6_minsg > VAR_41)
   VAR_41 = VAR_35.ndis_lsov2.ndis_ip6_minsg;
 }
 VAR_33->hn_ndis_tso_szmax = 0;
 VAR_33->hn_ndis_tso_sgmin = 0;
 if (VAR_37 & (VAR_3 | VAR_4)) {
  FUNC_0(VAR_40 <= VAR_13,
      ("invalid NDIS TSO maxsz %d", VAR_40));
  FUNC_0(VAR_41 >= 2,
      ("invalid NDIS TSO minsg %d", VAR_41));
  if (VAR_40 < VAR_41 * VAR_34) {
   FUNC_3(VAR_33->hn_ifp, "invalid NDIS TSO config: "
       "maxsz %d, minsg %d, mtu %d; "
       "disable TSO4 and TSO6\n",
       VAR_40, VAR_41, VAR_34);
   VAR_37 &= ~(VAR_3 | VAR_4);
   VAR_36.ndis_lsov2_ip4 = VAR_16;
   VAR_36.ndis_lsov2_ip6 = VAR_16;
  } else {
   VAR_33->hn_ndis_tso_szmax = VAR_40;
   VAR_33->hn_ndis_tso_sgmin = VAR_41;
   if (VAR_32) {
    FUNC_3(VAR_33->hn_ifp, "NDIS TSO "
        "szmax %d sgmin %d\n",
        VAR_33->hn_ndis_tso_szmax,
        VAR_33->hn_ndis_tso_sgmin);
   }
  }
 }


 if ((VAR_35.ndis_csum.ndis_ip4_txcsum & VAR_8) ==
     VAR_8) {
  VAR_37 |= VAR_0;
  VAR_36.ndis_ip4csum = VAR_23;
 }
 if (VAR_35.ndis_csum.ndis_ip4_rxcsum & VAR_25) {
  if (VAR_36.ndis_ip4csum == VAR_23)
   VAR_36.ndis_ip4csum = VAR_24;
  else
   VAR_36.ndis_ip4csum = VAR_22;
 }


 if ((VAR_35.ndis_csum.ndis_ip4_txcsum & VAR_9) ==
     VAR_9) {
  VAR_37 |= VAR_1;
  VAR_36.ndis_tcp4csum = VAR_23;
 }
 if (VAR_35.ndis_csum.ndis_ip4_rxcsum & VAR_26) {
  if (VAR_36.ndis_tcp4csum == VAR_23)
   VAR_36.ndis_tcp4csum = VAR_24;
  else
   VAR_36.ndis_tcp4csum = VAR_22;
 }


 if (VAR_35.ndis_csum.ndis_ip4_txcsum & VAR_30) {
  VAR_37 |= VAR_5;
  VAR_36.ndis_udp4csum = VAR_23;
 }
 if (VAR_35.ndis_csum.ndis_ip4_rxcsum & VAR_28) {
  if (VAR_36.ndis_udp4csum == VAR_23)
   VAR_36.ndis_udp4csum = VAR_24;
  else
   VAR_36.ndis_udp4csum = VAR_22;
 }


 if ((VAR_35.ndis_csum.ndis_ip6_txcsum & VAR_10) ==
     VAR_10) {
  VAR_37 |= VAR_2;
  VAR_36.ndis_tcp6csum = VAR_23;
 }
 if (VAR_35.ndis_csum.ndis_ip6_rxcsum & VAR_27) {
  if (VAR_36.ndis_tcp6csum == VAR_23)
   VAR_36.ndis_tcp6csum = VAR_24;
  else
   VAR_36.ndis_tcp6csum = VAR_22;
 }


 if ((VAR_35.ndis_csum.ndis_ip6_txcsum & VAR_11) ==
     VAR_11) {
  VAR_37 |= VAR_6;
  VAR_36.ndis_udp6csum = VAR_23;
 }
 if (VAR_35.ndis_csum.ndis_ip6_rxcsum & VAR_29) {
  if (VAR_36.ndis_udp6csum == VAR_23)
   VAR_36.ndis_udp6csum = VAR_24;
  else
   VAR_36.ndis_udp6csum = VAR_22;
 }

 if (VAR_32) {
  FUNC_3(VAR_33->hn_ifp, "offload csum: "
      "ip4 %u, tcp4 %u, udp4 %u, tcp6 %u, udp6 %u\n",
      VAR_36.ndis_ip4csum,
      VAR_36.ndis_tcp4csum,
      VAR_36.ndis_udp4csum,
      VAR_36.ndis_tcp6csum,
      VAR_36.ndis_udp6csum);
  FUNC_3(VAR_33->hn_ifp, "offload lsov2: ip4 %u, ip6 %u\n",
      VAR_36.ndis_lsov2_ip4,
      VAR_36.ndis_lsov2_ip6);
 }

 VAR_39 = FUNC_2(VAR_33, VAR_31, &VAR_36, VAR_38);
 if (VAR_39) {
  FUNC_3(VAR_33->hn_ifp, "offload config failed: %d\n", VAR_39);
  return (VAR_39);
 }

 if (VAR_32)
  FUNC_3(VAR_33->hn_ifp, "offload config done\n");
 VAR_33->hn_caps |= VAR_37;
 return (0);
}
