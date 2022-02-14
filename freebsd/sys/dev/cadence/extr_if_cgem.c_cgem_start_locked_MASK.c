
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int uint32_t ;
struct mbuf {int dummy; } ;
struct cgem_softc {int txring_queued; size_t txring_hd_ptr; int net_ctl_shadow; struct mbuf** txring_m; TYPE_1__* txring; int ** txring_m_dmamap; int mbuf_dma_tag; int txdmamapfails; int txdefrags; int txdefragfails; int txfull; } ;
typedef int if_t ;
struct TYPE_5__ {int ds_len; int ds_addr; } ;
typedef TYPE_2__ bus_dma_segment_t ;
struct TYPE_4__ {int ctl; int addr; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct cgem_softc*) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_1 (int ,struct mbuf*) ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int FUNC_2 (struct cgem_softc*,int ,int) ;
 scalar_t__ FUNC_3 (int ,int ,int **) ;
 int FUNC_4 (int ,int *) ;
 int FUNC_5 (int ,int *,struct mbuf*,TYPE_2__*,int*,int ) ;
 int FUNC_6 (int ,int *,int ) ;
 int FUNC_7 (struct cgem_softc*) ;
 struct mbuf* FUNC_8 (int ) ;
 int FUNC_9 (int ) ;
 scalar_t__ FUNC_10 (int ) ;
 int FUNC_11 (int ,int,int ) ;
 struct mbuf* FUNC_12 (struct mbuf*,int ) ;
 int FUNC_13 (struct mbuf*) ;

__attribute__((used)) static void
FUNC_14(if_t VAR_11)
{
 struct cgem_softc *VAR_12 = (struct cgem_softc *) FUNC_10(VAR_11);
 struct mbuf *VAR_13;
 bus_dma_segment_t VAR_14[VAR_10];
 uint32_t VAR_15;
 int VAR_16, VAR_17, VAR_18, VAR_19;

 FUNC_0(VAR_12);

 if ((FUNC_9(VAR_11) & VAR_8) != 0)
  return;

 for (;;) {

  if (VAR_12->txring_queued >=
      VAR_4 - VAR_10 * 2) {


   FUNC_7(VAR_12);


   if (VAR_12->txring_queued >=
       VAR_4 - VAR_10 * 2) {
    FUNC_11(VAR_11, VAR_8, 0);
    VAR_12->txfull++;
    break;
   }
  }


  VAR_13 = FUNC_8(VAR_11);
  if (VAR_13 == ((void*)0))
   break;


  if (FUNC_3(VAR_12->mbuf_dma_tag, 0,
         &VAR_12->txring_m_dmamap[VAR_12->txring_hd_ptr])) {
   FUNC_13(VAR_13);
   VAR_12->txdmamapfails++;
   continue;
  }
  VAR_19 = FUNC_5(VAR_12->mbuf_dma_tag,
          VAR_12->txring_m_dmamap[VAR_12->txring_hd_ptr],
          VAR_13, VAR_14, &VAR_17, VAR_1);
  if (VAR_19 == VAR_7) {

   struct mbuf *VAR_20 = FUNC_12(VAR_13, VAR_9);

   if (VAR_20 == ((void*)0)) {
    VAR_12->txdefragfails++;
    FUNC_13(VAR_13);
    FUNC_4(VAR_12->mbuf_dma_tag,
       VAR_12->txring_m_dmamap[VAR_12->txring_hd_ptr]);
    VAR_12->txring_m_dmamap[VAR_12->txring_hd_ptr] = ((void*)0);
    continue;
   }
   VAR_13 = VAR_20;
   VAR_19 = FUNC_5(VAR_12->mbuf_dma_tag,
          VAR_12->txring_m_dmamap[VAR_12->txring_hd_ptr],
          VAR_13, VAR_14, &VAR_17, VAR_1);
   VAR_12->txdefrags++;
  }
  if (VAR_19) {

   FUNC_13(VAR_13);
   FUNC_4(VAR_12->mbuf_dma_tag,
       VAR_12->txring_m_dmamap[VAR_12->txring_hd_ptr]);
   VAR_12->txring_m_dmamap[VAR_12->txring_hd_ptr] = ((void*)0);
   VAR_12->txdmamapfails++;
   continue;
  }
  VAR_12->txring_m[VAR_12->txring_hd_ptr] = VAR_13;


  FUNC_6(VAR_12->mbuf_dma_tag,
    VAR_12->txring_m_dmamap[VAR_12->txring_hd_ptr],
    VAR_0);


  VAR_18 = VAR_12->txring_hd_ptr + VAR_17 + VAR_10 >=
   VAR_4;




  for (VAR_16 = VAR_17 - 1; VAR_16 >= 0; VAR_16--) {

   VAR_12->txring[VAR_12->txring_hd_ptr + VAR_16].addr =
    VAR_14[VAR_16].ds_addr;


   VAR_15 = VAR_14[VAR_16].ds_len;
   if (VAR_16 == VAR_17 - 1) {
    VAR_15 |= VAR_5;
    if (VAR_18)
     VAR_15 |= VAR_6;
   }
   VAR_12->txring[VAR_12->txring_hd_ptr + VAR_16].ctl = VAR_15;

   if (VAR_16 != 0)
    VAR_12->txring_m[VAR_12->txring_hd_ptr + VAR_16] = ((void*)0);
  }

  if (VAR_18)
   VAR_12->txring_hd_ptr = 0;
  else
   VAR_12->txring_hd_ptr += VAR_17;
  VAR_12->txring_queued += VAR_17;


  FUNC_2(VAR_12, VAR_2, VAR_12->net_ctl_shadow |
      VAR_3);


  FUNC_1(VAR_11, VAR_13);
 }
}
