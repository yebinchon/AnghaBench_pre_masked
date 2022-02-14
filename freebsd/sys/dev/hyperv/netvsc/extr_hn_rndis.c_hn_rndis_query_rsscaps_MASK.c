
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint32_t ;
struct TYPE_2__ {scalar_t__ ndis_type; scalar_t__ ndis_rev; size_t ndis_size; } ;
struct ndis_rss_caps {int ndis_nrxr; int ndis_nind; int ndis_caps; TYPE_1__ ndis_hdr; } ;
struct hn_softc {scalar_t__ hn_ndis_ver; int hn_rss_ind_size; int hn_rss_hcap; int hn_caps; int hn_ifp; } ;
typedef int in ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 scalar_t__ VAR_12 ;
 scalar_t__ VAR_13 ;
 scalar_t__ VAR_14 ;
 void* VAR_15 ;
 size_t VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;
 int VAR_20 ;
 int VAR_21 ;
 scalar_t__ VAR_22 ;
 int FUNC_0 (int) ;
 int FUNC_1 (struct hn_softc*,int ,struct ndis_rss_caps*,void*,struct ndis_rss_caps*,size_t*,size_t) ;
 int FUNC_2 (int ,char*,...) ;
 int FUNC_3 (struct ndis_rss_caps*,int ,int) ;
 int FUNC_4 (int) ;

int
FUNC_5(struct hn_softc *VAR_23, int *VAR_24)
{
 struct ndis_rss_caps VAR_25, VAR_26;
 size_t VAR_27;
 int VAR_28, VAR_29, VAR_30, VAR_31;
 uint32_t VAR_32 = 0, VAR_33 = 0;

 *VAR_24 = 0;

 if (VAR_23->hn_ndis_ver < VAR_3)
  return (VAR_1);

 FUNC_3(&VAR_25, 0, sizeof(VAR_25));
 VAR_25.ndis_hdr.ndis_type = VAR_12;
 VAR_25.ndis_hdr.ndis_rev = VAR_14;
 VAR_25.ndis_hdr.ndis_size = VAR_15;

 VAR_27 = VAR_15;
 VAR_28 = FUNC_1(VAR_23, VAR_21,
     &VAR_25, VAR_15, &VAR_26, &VAR_27, VAR_16);
 if (VAR_28)
  return (VAR_28);




 if (VAR_26.ndis_hdr.ndis_type != VAR_12) {
  FUNC_2(VAR_23->hn_ifp, "invalid NDIS objtype 0x%02x\n",
      VAR_26.ndis_hdr.ndis_type);
  return (VAR_0);
 }
 if (VAR_26.ndis_hdr.ndis_rev < VAR_13) {
  FUNC_2(VAR_23->hn_ifp, "invalid NDIS objrev 0x%02x\n",
      VAR_26.ndis_hdr.ndis_rev);
  return (VAR_0);
 }
 if (VAR_26.ndis_hdr.ndis_size > VAR_27) {
  FUNC_2(VAR_23->hn_ifp, "invalid NDIS objsize %u, "
      "data size %zu\n", VAR_26.ndis_hdr.ndis_size, VAR_27);
  return (VAR_0);
 } else if (VAR_26.ndis_hdr.ndis_size < VAR_16) {
  FUNC_2(VAR_23->hn_ifp, "invalid NDIS objsize %u\n",
      VAR_26.ndis_hdr.ndis_size);
  return (VAR_0);
 }




 if (VAR_26.ndis_nrxr == 0) {
  FUNC_2(VAR_23->hn_ifp, "0 RX rings!?\n");
  return (VAR_0);
 }
 if (VAR_22)
  FUNC_2(VAR_23->hn_ifp, "%u RX rings\n", VAR_26.ndis_nrxr);
 VAR_30 = VAR_26.ndis_nrxr;

 if (VAR_26.ndis_hdr.ndis_size == VAR_15 &&
     VAR_26.ndis_hdr.ndis_rev >= VAR_14) {
  if (VAR_26.ndis_nind > VAR_4) {
   FUNC_2(VAR_23->hn_ifp,
       "too many RSS indirect table entries %u\n",
       VAR_26.ndis_nind);
   return (VAR_1);
  }
  if (!FUNC_4(VAR_26.ndis_nind)) {
   FUNC_2(VAR_23->hn_ifp, "RSS indirect table size is not "
       "power-of-2 %u\n", VAR_26.ndis_nind);
  }

  if (VAR_22) {
   FUNC_2(VAR_23->hn_ifp, "RSS indirect table size %u\n",
       VAR_26.ndis_nind);
  }
  VAR_29 = VAR_26.ndis_nind;
 } else {
  VAR_29 = VAR_4;
 }
 if (VAR_29 < VAR_30) {
  FUNC_2(VAR_23->hn_ifp, "# of RX rings (%d) > "
      "RSS indirect table size %d\n", VAR_30, VAR_29);
  VAR_30 = VAR_29;
 }






 VAR_31 = FUNC_0(VAR_26.ndis_caps & VAR_17);
 if (VAR_31 == 0) {
  FUNC_2(VAR_23->hn_ifp, "no hash functions, caps 0x%08x\n",
      VAR_26.ndis_caps);
  return (VAR_1);
 }
 VAR_32 = 1 << (VAR_31 - 1);

 if (VAR_26.ndis_caps & VAR_18)
  VAR_33 |= VAR_5 | VAR_8;
 if (VAR_26.ndis_caps & VAR_19)
  VAR_33 |= VAR_6 | VAR_9;
 if (VAR_26.ndis_caps & VAR_20)
  VAR_33 |= VAR_7 | VAR_10;
 if (VAR_33 == 0) {
  FUNC_2(VAR_23->hn_ifp, "no hash types, caps 0x%08x\n",
      VAR_26.ndis_caps);
  return (VAR_1);
 }
 if (VAR_22)
  FUNC_2(VAR_23->hn_ifp, "RSS caps %#x\n", VAR_26.ndis_caps);


 VAR_23->hn_rss_ind_size = VAR_29;
 VAR_23->hn_rss_hcap = VAR_32 | VAR_33;
 if (VAR_23->hn_caps & VAR_2) {

  VAR_23->hn_rss_hcap |= VAR_11;
 }
 *VAR_24 = VAR_30;
 return (0);
}
