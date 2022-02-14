
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
struct zy7_devcfg_softc {int dma_map; int dma_tag; int sc_mtx; } ;
struct uio {scalar_t__ uio_offset; int uio_resid; } ;
struct cdev {struct zy7_devcfg_softc* si_drv1; } ;
typedef scalar_t__ bus_addr_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct zy7_devcfg_softc*) ;
 int FUNC_1 (struct zy7_devcfg_softc*) ;
 int VAR_3 ;
 int FUNC_2 (int ,int) ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_3 (struct zy7_devcfg_softc*,int ) ;
 int FUNC_4 (struct zy7_devcfg_softc*,int ,int) ;
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
 int FUNC_5 (int ,int ,void*,int ,int ,scalar_t__*,int ) ;
 int FUNC_6 (int ,int ,int ) ;
 int FUNC_7 (int ,int ) ;
 int FUNC_8 (int ,void**,int ,int *) ;
 int FUNC_9 (int ,void*,int ) ;
 int VAR_17 ;
 int FUNC_10 (int ,int *,int ,char*,int ) ;
 int FUNC_11 (void*,int,struct uio*) ;
 int FUNC_12 (struct zy7_devcfg_softc*) ;
 int FUNC_13 (struct zy7_devcfg_softc*) ;
 int VAR_18 ;
 int VAR_19 ;
 int FUNC_14 (int ) ;
 int FUNC_15 () ;

__attribute__((used)) static int
FUNC_16(struct cdev *VAR_20, struct uio *VAR_21, int VAR_22)
{
 struct zy7_devcfg_softc *VAR_23 = VAR_20->si_drv1;
 void *VAR_24;
 bus_addr_t VAR_25;
 int VAR_26, VAR_27;

 FUNC_0(VAR_23);


 if (VAR_21->uio_offset == 0 && VAR_21->uio_resid > 0) {
  FUNC_12(VAR_23);
  FUNC_15();
  VAR_27 = FUNC_13(VAR_23);
  if (VAR_27 != 0) {
   FUNC_1(VAR_23);
   return (VAR_27);
  }
 }


 VAR_27 = FUNC_8(VAR_23->dma_tag, &VAR_24, VAR_2,
          &VAR_23->dma_map);
 if (VAR_27 != 0) {
  FUNC_1(VAR_23);
  return (VAR_27);
 }
 VAR_27 = FUNC_5(VAR_23->dma_tag, VAR_23->dma_map, VAR_24, VAR_4,
         VAR_18, &VAR_25, 0);
 if (VAR_27 != 0) {
  FUNC_9(VAR_23->dma_tag, VAR_24, VAR_23->dma_map);
  FUNC_1(VAR_23);
  return (VAR_27);
 }

 while (VAR_21->uio_resid > 0) {

  if ((FUNC_3(VAR_23, VAR_16) &
       VAR_15) != 0) {
   VAR_27 = VAR_3;
   break;
  }


  VAR_26 = FUNC_2(VAR_4, VAR_21->uio_resid);
  FUNC_1(VAR_23);
  VAR_27 = FUNC_11(VAR_24, VAR_26, VAR_21);
  FUNC_0(VAR_23);
  if (VAR_27 != 0)
   break;


  FUNC_6(VAR_23->dma_tag, VAR_23->dma_map,
    VAR_1);




  if (VAR_21->uio_resid > VAR_26)
   FUNC_4(VAR_23, VAR_10,
       (uint32_t) VAR_25);
  else
   FUNC_4(VAR_23, VAR_10,
       (uint32_t) VAR_25 |
       VAR_7);
  FUNC_4(VAR_23, VAR_8, VAR_6);
  FUNC_4(VAR_23, VAR_11, (VAR_26+3)/4);
  FUNC_4(VAR_23, VAR_9, 0);


  FUNC_4(VAR_23, VAR_16, VAR_12);
  FUNC_4(VAR_23, VAR_14, ~VAR_13);


  VAR_27 = FUNC_10(VAR_23->dma_map, &VAR_23->sc_mtx, VAR_5,
    "zy7dma", VAR_17);
  if (VAR_27 != 0)
   break;

  FUNC_6(VAR_23->dma_tag, VAR_23->dma_map,
    VAR_0);


  if ((FUNC_3(VAR_23, VAR_16) &
       VAR_15) != 0)
   FUNC_14(VAR_19);
 }

 FUNC_7(VAR_23->dma_tag, VAR_23->dma_map);
 FUNC_9(VAR_23->dma_tag, VAR_24, VAR_23->dma_map);
 FUNC_1(VAR_23);
 return (VAR_27);
}
