
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ uint32_t ;
struct ndis_rssprm_toeplitz {scalar_t__* rss_ind; int rss_key; } ;
struct hn_softc {int hn_flags; scalar_t__ hn_caps; int hn_rx_ring_cnt; int hn_xvf_flags; int hn_prichan; scalar_t__ hn_rss_hcap; scalar_t__ hn_rss_hash; int hn_ifp; int hn_dev; scalar_t__ hn_rss_ind_size; struct ndis_rssprm_toeplitz hn_rss; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_0 (int,char*) ;
 int VAR_8 ;
 int VAR_9 ;
 scalar_t__ VAR_10 ;
 scalar_t__ FUNC_1 (int ) ;
 int FUNC_2 (struct hn_softc*) ;
 int FUNC_3 (struct hn_softc*,int ) ;
 int FUNC_4 (struct hn_softc*,int ) ;
 int FUNC_5 (struct hn_softc*,int) ;
 int FUNC_6 (struct hn_softc*) ;
 int FUNC_7 (struct hn_softc*,int,int*) ;
 int FUNC_8 (struct hn_softc*,int ) ;
 int FUNC_9 (struct hn_softc*) ;
 int FUNC_10 (struct hn_softc*,int) ;
 int FUNC_11 (struct hn_softc*) ;
 int VAR_11 ;
 int FUNC_12 (struct hn_softc*,int) ;
 int FUNC_13 (struct hn_softc*) ;
 int FUNC_14 (struct hn_softc*,int*) ;
 int FUNC_15 (struct hn_softc*) ;
 int FUNC_16 (struct hn_softc*) ;
 int FUNC_17 (struct hn_softc*,int) ;
 int FUNC_18 (int ,char*,...) ;
 int FUNC_19 (int ,int ,int) ;
 scalar_t__ FUNC_20 (int) ;
 int FUNC_21 (int ) ;

__attribute__((used)) static int
FUNC_22(struct hn_softc *VAR_12, int VAR_13)
{



 struct ndis_rssprm_toeplitz *VAR_14 = &VAR_12->hn_rss;
 int VAR_15, VAR_16, VAR_17 = 1, VAR_18, VAR_19;
 uint32_t VAR_20, VAR_21 = 0;

 FUNC_0((VAR_12->hn_flags & VAR_6) == 0,
     ("synthetic parts were attached"));

 if (!FUNC_15(VAR_12))
  return (VAR_2);


 VAR_20 = VAR_12->hn_caps;
 VAR_12->hn_caps = 0;


 VAR_12->hn_rss_ind_size = 0;
 VAR_12->hn_rss_hash = 0;
 VAR_12->hn_rss_hcap = 0;




 VAR_15 = FUNC_3(VAR_12, VAR_12->hn_prichan);
 if (VAR_15)
  goto failed;




 VAR_15 = FUNC_5(VAR_12, VAR_13);
 if (VAR_15)
  goto failed;
 VAR_21 |= 0x0002;




 VAR_15 = FUNC_7(VAR_12, VAR_13, &VAR_19);
 if (VAR_19)
  VAR_21 |= 0x0004;
 if (VAR_15)
  goto failed;




 if (FUNC_1(VAR_12->hn_dev) && VAR_20 != VAR_12->hn_caps) {
  FUNC_18(VAR_12->hn_ifp, "caps mismatch old 0x%08x, new 0x%08x\n",
      VAR_20, VAR_12->hn_caps);
  VAR_15 = VAR_2;
  goto failed;
 }
 VAR_16 = VAR_12->hn_rx_ring_cnt - 1;
 VAR_15 = FUNC_14(VAR_12, &VAR_16);
 if (VAR_15)
  goto failed;

 VAR_12->hn_flags |= VAR_6;





 VAR_17 = VAR_16 + 1;
 FUNC_12(VAR_12, VAR_17);
 if (VAR_17 == 1) {

  goto back;
 }






 VAR_15 = FUNC_2(VAR_12);
 if (VAR_15)
  goto failed;





 if ((VAR_12->hn_flags & VAR_4) == 0) {



  if (VAR_10)
   FUNC_18(VAR_12->hn_ifp, "setup default RSS key\n");



  FUNC_19(VAR_14->rss_key, VAR_11, sizeof(VAR_14->rss_key));

  VAR_12->hn_flags |= VAR_4;
 }

 if ((VAR_12->hn_flags & VAR_3) == 0) {




  if (VAR_10) {
   FUNC_18(VAR_12->hn_ifp, "setup default RSS indirect "
       "table\n");
  }
  for (VAR_18 = 0; VAR_18 < VAR_8; ++VAR_18) {
   uint32_t VAR_22;




   VAR_22 = VAR_18;

   VAR_14->rss_ind[VAR_18] = VAR_22 % VAR_17;
  }
  VAR_12->hn_flags |= VAR_3;
 } else {







  FUNC_11(VAR_12);
 }

 VAR_12->hn_rss_hash = VAR_12->hn_rss_hcap;
 if ((VAR_12->hn_flags & VAR_5) ||
     (VAR_12->hn_xvf_flags & VAR_7)) {

  FUNC_17(VAR_12, 0);
 }
 VAR_15 = FUNC_8(VAR_12, VAR_9);
 if (VAR_15)
  goto failed;
back:



 FUNC_13(VAR_12);
 FUNC_10(VAR_12, VAR_17);
 return (0);

failed:
 if (VAR_12->hn_flags & VAR_6) {
  FUNC_10(VAR_12, VAR_17);
  FUNC_16(VAR_12);
 } else {
  if (VAR_21 & 0x0004) {
   FUNC_10(VAR_12, VAR_17);
   FUNC_9(VAR_12);
  }
  if (VAR_21 & 0x0002)
   FUNC_6(VAR_12);
  FUNC_4(VAR_12, VAR_12->hn_prichan);

  VAR_12->hn_caps = VAR_20;
 }
 return (VAR_15);



}
