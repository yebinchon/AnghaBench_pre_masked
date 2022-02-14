
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint32_t ;
struct mbuf {int dummy; } ;
struct cgem_softc {scalar_t__ txring_queued; size_t txring_tl_ptr; int ifp; TYPE_1__* txring; int dev; struct mbuf** txring_m; int ** txring_m_dmamap; int mbuf_dma_tag; } ;
struct TYPE_2__ {int ctl; int addr; } ;


 int VAR_0 ;
 int FUNC_0 (struct cgem_softc*) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_1 (int ,int *) ;
 int FUNC_2 (int ,int *,int ) ;
 int FUNC_3 (int ,int *) ;
 int FUNC_4 (int ,char*,int ) ;
 int FUNC_5 (int ,int ,int) ;
 int FUNC_6 (int ,int ,int ) ;
 int FUNC_7 (struct mbuf*) ;

__attribute__((used)) static void
FUNC_8(struct cgem_softc *VAR_10)
{
 struct mbuf *VAR_11;
 uint32_t VAR_12;

 FUNC_0(VAR_10);


 while (VAR_10->txring_queued > 0 &&
        ((VAR_12 = VAR_10->txring[VAR_10->txring_tl_ptr].ctl) &
  VAR_5) != 0) {


  FUNC_2(VAR_10->mbuf_dma_tag,
    VAR_10->txring_m_dmamap[VAR_10->txring_tl_ptr],
    VAR_0);


  FUNC_3(VAR_10->mbuf_dma_tag,
      VAR_10->txring_m_dmamap[VAR_10->txring_tl_ptr]);
  FUNC_1(VAR_10->mbuf_dma_tag,
       VAR_10->txring_m_dmamap[VAR_10->txring_tl_ptr]);
  VAR_10->txring_m_dmamap[VAR_10->txring_tl_ptr] = ((void*)0);


  VAR_11 = VAR_10->txring_m[VAR_10->txring_tl_ptr];
  VAR_10->txring_m[VAR_10->txring_tl_ptr] = ((void*)0);
  FUNC_7(VAR_11);


  if ((VAR_12 & VAR_1) != 0) {

   FUNC_4(VAR_10->dev, "cgem_clean_tx: Whoa! "
       "AHB error, addr=0x%x\n",
       VAR_10->txring[VAR_10->txring_tl_ptr].addr);
  } else if ((VAR_12 & (VAR_4 |
       VAR_3)) != 0) {
   FUNC_5(VAR_10->ifp, VAR_7, 1);
  } else
   FUNC_5(VAR_10->ifp, VAR_8, 1);





  while ((VAR_12 & VAR_2) == 0) {
   if ((VAR_12 & VAR_6) != 0)
    VAR_10->txring_tl_ptr = 0;
   else
    VAR_10->txring_tl_ptr++;
   VAR_10->txring_queued--;

   VAR_12 = VAR_10->txring[VAR_10->txring_tl_ptr].ctl;

   VAR_10->txring[VAR_10->txring_tl_ptr].ctl =
    VAR_12 | VAR_5;
  }


  if ((VAR_12 & VAR_6) != 0)
   VAR_10->txring_tl_ptr = 0;
  else
   VAR_10->txring_tl_ptr++;
  VAR_10->txring_queued--;

  FUNC_6(VAR_10->ifp, 0, VAR_9);
 }
}
