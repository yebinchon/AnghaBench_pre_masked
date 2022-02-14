
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint32_t ;
typedef int uint16_t ;
struct TYPE_4__ {size_t jcur; int jrx_desc_map; int jrx_desc_tag; struct nfe_desc32* jdesc32; struct nfe_desc64* jdesc64; struct nfe_rx_data* jdata; } ;
struct nfe_softc {int nfe_flags; TYPE_2__ jrxq; int nfe_ifp; } ;
struct nfe_rx_data {struct mbuf* m; } ;
struct nfe_desc64 {int length; int flags; int * physaddr; } ;
struct nfe_desc32 {int length; int flags; } ;
struct TYPE_3__ {int ether_vtag; int len; int csum_flags; int csum_data; int rcvif; } ;
struct mbuf {int m_len; TYPE_1__ m_pkthdr; int m_flags; } ;
typedef int if_t ;


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
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int FUNC_0 (size_t,int ) ;
 int VAR_15 ;
 int VAR_16 ;
 int FUNC_1 (struct nfe_softc*) ;
 int FUNC_2 (struct nfe_softc*) ;
 int VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;
 int VAR_20 ;
 int VAR_21 ;
 int VAR_22 ;
 int VAR_23 ;
 int VAR_24 ;
 int VAR_25 ;
 int VAR_26 ;
 int VAR_27 ;
 int FUNC_3 (struct nfe_softc*) ;
 int FUNC_4 (int ,int ,int) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (int ,int ,int) ;
 int FUNC_7 (int ,struct mbuf*) ;
 int FUNC_8 (int ) ;
 int FUNC_9 (int ) ;
 int FUNC_10 (struct nfe_softc*,size_t) ;
 scalar_t__ FUNC_11 (struct nfe_softc*,size_t) ;

__attribute__((used)) static int
FUNC_12(struct nfe_softc *VAR_28, int VAR_29, int *VAR_30)
{
 if_t VAR_31 = VAR_28->nfe_ifp;
 struct nfe_desc32 *VAR_32;
 struct nfe_desc64 *VAR_33;
 struct nfe_rx_data *VAR_34;
 struct mbuf *VAR_35;
 uint16_t VAR_36;
 int VAR_37, VAR_38, VAR_39;
 uint32_t VAR_40 = 0;

 VAR_39 = 0;
 FUNC_2(VAR_28);

 FUNC_4(VAR_28->jrxq.jrx_desc_tag, VAR_28->jrxq.jrx_desc_map,
     VAR_0);

 for (VAR_38 = 0;;FUNC_0(VAR_28->jrxq.jcur, VAR_15),
     VAR_40 = 0) {
  if (VAR_29 <= 0)
   break;
  VAR_29--;

  VAR_34 = &VAR_28->jrxq.jdata[VAR_28->jrxq.jcur];

  if (VAR_28->nfe_flags & VAR_14) {
   VAR_33 = &VAR_28->jrxq.jdesc64[VAR_28->jrxq.jcur];
   VAR_40 = FUNC_9(VAR_33->physaddr[1]);
   VAR_36 = FUNC_8(VAR_33->flags);
   VAR_37 = FUNC_8(VAR_33->length) & VAR_21;
  } else {
   VAR_32 = &VAR_28->jrxq.jdesc32[VAR_28->jrxq.jcur];
   VAR_36 = FUNC_8(VAR_32->flags);
   VAR_37 = FUNC_8(VAR_32->length) & VAR_21;
  }

  if (VAR_36 & VAR_22)
   break;
  VAR_38++;
  if ((VAR_28->nfe_flags & (VAR_16 | VAR_14)) == 0) {
   if (!(VAR_36 & VAR_25)) {
    FUNC_6(VAR_31, VAR_10, 1);
    FUNC_10(VAR_28, VAR_28->jrxq.jcur);
    continue;
   }
   if ((VAR_36 & VAR_18) == VAR_18) {
    VAR_36 &= ~VAR_17;
    VAR_37--;
   }
  } else {
   if (!(VAR_36 & VAR_26)) {
    FUNC_6(VAR_31, VAR_10, 1);
    FUNC_10(VAR_28, VAR_28->jrxq.jcur);
    continue;
   }

   if ((VAR_36 & VAR_19) == VAR_19) {
    VAR_36 &= ~VAR_17;
    VAR_37--;
   }
  }

  if (VAR_36 & VAR_17) {
   FUNC_6(VAR_31, VAR_10, 1);
   FUNC_10(VAR_28, VAR_28->jrxq.jcur);
   continue;
  }

  VAR_35 = VAR_34->m;
  if (FUNC_11(VAR_28, VAR_28->jrxq.jcur) != 0) {
   FUNC_6(VAR_31, VAR_12, 1);
   FUNC_10(VAR_28, VAR_28->jrxq.jcur);
   continue;
  }

  if ((VAR_40 & VAR_27) != 0 &&
      (FUNC_5(VAR_31) & VAR_9) != 0) {
   VAR_35->m_pkthdr.ether_vtag = VAR_40 & 0xffff;
   VAR_35->m_flags |= VAR_13;
  }

  VAR_35->m_pkthdr.len = VAR_35->m_len = VAR_37;
  VAR_35->m_pkthdr.rcvif = VAR_31;

  if ((FUNC_5(VAR_31) & VAR_8) != 0) {
   if ((VAR_36 & VAR_20) != 0) {
    VAR_35->m_pkthdr.csum_flags |= VAR_4;
    VAR_35->m_pkthdr.csum_flags |= VAR_5;
    if ((VAR_36 & VAR_23) != 0 ||
        (VAR_36 & VAR_24) != 0) {
     VAR_35->m_pkthdr.csum_flags |=
         VAR_3 | VAR_6;
     VAR_35->m_pkthdr.csum_data = 0xffff;
    }
   }
  }

  FUNC_6(VAR_31, VAR_11, 1);

  FUNC_3(VAR_28);
  FUNC_7(VAR_31, VAR_35);
  FUNC_1(VAR_28);
  VAR_39++;
 }

 if (VAR_38 > 0)
  FUNC_4(VAR_28->jrxq.jrx_desc_tag, VAR_28->jrxq.jrx_desc_map,
      VAR_1 | VAR_2);

 if (VAR_30 != ((void*)0))
  *VAR_30 = VAR_39;
 return (VAR_29 > 0 ? 0 : VAR_7);
}
