
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct ffec_softc {int is_detaching; int * mem_res; int * irq_res; int ** intr_cookie; int * txdesc_tag; int * txdesc_map; int * txbuf_tag; TYPE_2__* txbuf_map; int * rxdesc_tag; int * rxdesc_map; int * rxbuf_tag; TYPE_1__* rxbuf_map; int ifp; int ffec_callout; scalar_t__ is_attached; } ;
typedef int device_t ;
typedef int * bus_dmamap_t ;
struct TYPE_4__ {int * map; } ;
struct TYPE_3__ {int mbuf; int * map; } ;


 int FUNC_0 (struct ffec_softc*) ;
 int FUNC_1 (struct ffec_softc*) ;
 int FUNC_2 (struct ffec_softc*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *,int *) ;
 int FUNC_5 (int *,int *) ;
 int FUNC_6 (int ,int ,int ,int *) ;
 int FUNC_7 (int ,int ,int *) ;
 int FUNC_8 (int ,int ,int *) ;
 int FUNC_9 (int *) ;
 struct ffec_softc* FUNC_10 (int ) ;
 int FUNC_11 (int ) ;
 int FUNC_12 (struct ffec_softc*) ;
 int VAR_4 ;
 int FUNC_13 (int ) ;

__attribute__((used)) static int
FUNC_14(device_t VAR_5)
{
 struct ffec_softc *VAR_6;
 bus_dmamap_t VAR_7;
 int VAR_8, VAR_9;






 VAR_6 = FUNC_10(VAR_5);

 if (VAR_6->is_attached) {
  FUNC_0(VAR_6);
  VAR_6->is_detaching = 1;
  FUNC_12(VAR_6);
  FUNC_2(VAR_6);
  FUNC_9(&VAR_6->ffec_callout);
  FUNC_11(VAR_6->ifp);
 }




 for (VAR_8 = 0; VAR_8 < VAR_1; ++VAR_8) {
  if ((VAR_7 = VAR_6->rxbuf_map[VAR_8].map) != ((void*)0)) {
   FUNC_5(VAR_6->rxbuf_tag, VAR_7);
   FUNC_4(VAR_6->rxbuf_tag, VAR_7);
   FUNC_13(VAR_6->rxbuf_map[VAR_8].mbuf);
  }
 }
 if (VAR_6->rxbuf_tag != ((void*)0))
  FUNC_3(VAR_6->rxbuf_tag);
 if (VAR_6->rxdesc_map != ((void*)0)) {
  FUNC_5(VAR_6->rxdesc_tag, VAR_6->rxdesc_map);
  FUNC_4(VAR_6->rxdesc_tag, VAR_6->rxdesc_map);
 }
 if (VAR_6->rxdesc_tag != ((void*)0))
 FUNC_3(VAR_6->rxdesc_tag);


 for (VAR_8 = 0; VAR_8 < VAR_3; ++VAR_8) {
  if ((VAR_7 = VAR_6->txbuf_map[VAR_8].map) != ((void*)0)) {

   FUNC_4(VAR_6->txbuf_tag, VAR_7);
  }
 }
 if (VAR_6->txbuf_tag != ((void*)0))
  FUNC_3(VAR_6->txbuf_tag);
 if (VAR_6->txdesc_map != ((void*)0)) {
  FUNC_5(VAR_6->txdesc_tag, VAR_6->txdesc_map);
  FUNC_4(VAR_6->txdesc_tag, VAR_6->txdesc_map);
 }
 if (VAR_6->txdesc_tag != ((void*)0))
  FUNC_3(VAR_6->txdesc_tag);


 for (VAR_9 = 0; VAR_9 < VAR_0; ++VAR_9) {
  if (VAR_6->intr_cookie[VAR_9] != ((void*)0)) {
   FUNC_8(VAR_5, VAR_6->irq_res[VAR_9],
       VAR_6->intr_cookie[VAR_9]);
  }
 }
 FUNC_7(VAR_5, VAR_4, VAR_6->irq_res);

 if (VAR_6->mem_res != ((void*)0))
  FUNC_6(VAR_5, VAR_2, 0, VAR_6->mem_res);

 FUNC_1(VAR_6);
 return (0);
}
