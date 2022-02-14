
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint32_t ;
struct TYPE_4__ {int len; int csum_flags; int csum_data; int rcvif; } ;
struct mbuf {int m_len; struct mbuf* m_next; TYPE_2__ m_pkthdr; int m_data; } ;
struct cgem_softc {scalar_t__ rxring_queued; size_t rxring_tl_ptr; int ** rxring_m_dmamap; int mbuf_dma_tag; struct mbuf** rxring_m; TYPE_1__* rxring; int ifp; } ;
typedef int if_t ;
struct TYPE_3__ {int addr; int ctl; } ;


 int VAR_0 ;
 int FUNC_0 (struct cgem_softc*) ;
 int FUNC_1 (struct cgem_softc*) ;
 size_t VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int FUNC_2 (struct cgem_softc*) ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 scalar_t__ VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 int FUNC_3 (int ,int *) ;
 int FUNC_4 (int ,int *,int ) ;
 int FUNC_5 (int ,int *) ;
 int FUNC_6 (struct cgem_softc*) ;
 int FUNC_7 (int ) ;
 int FUNC_8 (int ,int ,int) ;
 int FUNC_9 (int ,struct mbuf*) ;
 int FUNC_10 (struct mbuf*) ;

__attribute__((used)) static void
FUNC_11(struct cgem_softc *VAR_19)
{
 if_t VAR_20 = VAR_19->ifp;
 struct mbuf *VAR_21, *VAR_22, **VAR_23;
 uint32_t VAR_24;

 FUNC_0(VAR_19);


 VAR_22 = ((void*)0);
 VAR_23 = &VAR_22;
 while (VAR_19->rxring_queued > 0 &&
        (VAR_19->rxring[VAR_19->rxring_tl_ptr].addr & VAR_9) != 0) {

  VAR_24 = VAR_19->rxring[VAR_19->rxring_tl_ptr].ctl;


  VAR_21 = VAR_19->rxring_m[VAR_19->rxring_tl_ptr];
  VAR_19->rxring_m[VAR_19->rxring_tl_ptr] = ((void*)0);


  FUNC_4(VAR_19->mbuf_dma_tag,
    VAR_19->rxring_m_dmamap[VAR_19->rxring_tl_ptr],
    VAR_0);


  FUNC_5(VAR_19->mbuf_dma_tag,
     VAR_19->rxring_m_dmamap[VAR_19->rxring_tl_ptr]);
  FUNC_3(VAR_19->mbuf_dma_tag,
       VAR_19->rxring_m_dmamap[VAR_19->rxring_tl_ptr]);
  VAR_19->rxring_m_dmamap[VAR_19->rxring_tl_ptr] = ((void*)0);


  if (++VAR_19->rxring_tl_ptr == VAR_1)
   VAR_19->rxring_tl_ptr = 0;
  VAR_19->rxring_queued--;





  if ((VAR_24 & VAR_2) != 0 ||
      (VAR_24 & (VAR_10 | VAR_7)) !=
             (VAR_10 | VAR_7)) {

   FUNC_10(VAR_21);
   FUNC_8(VAR_20, VAR_17, 1);
   continue;
  }


  VAR_21->m_data += VAR_15;
  VAR_21->m_len = (VAR_24 & VAR_8);
  VAR_21->m_pkthdr.rcvif = VAR_20;
  VAR_21->m_pkthdr.len = VAR_21->m_len;




  if ((FUNC_7(VAR_20) & VAR_16) != 0) {

   if ((VAR_24 & VAR_4) ==
       VAR_5 ||
       (VAR_24 & VAR_4) ==
       VAR_6) {
    VAR_21->m_pkthdr.csum_flags |=
     VAR_12 | VAR_13 |
     VAR_11 | VAR_14;
    VAR_21->m_pkthdr.csum_data = 0xffff;
   } else if ((VAR_24 & VAR_4) ==
       VAR_3) {

    VAR_21->m_pkthdr.csum_flags |=
     VAR_12 | VAR_13;
    VAR_21->m_pkthdr.csum_data = 0xffff;
   }
  }


  *VAR_23 = VAR_21;
  VAR_23 = &VAR_21->m_next;
 }


 FUNC_6(VAR_19);


 FUNC_2(VAR_19);
 while (VAR_22 != ((void*)0)) {
  VAR_21 = VAR_22;
  VAR_22 = VAR_22->m_next;
  VAR_21->m_next = ((void*)0);
  FUNC_8(VAR_20, VAR_18, 1);
  FUNC_9(VAR_20, VAR_21);
 }
 FUNC_1(VAR_19);
}
