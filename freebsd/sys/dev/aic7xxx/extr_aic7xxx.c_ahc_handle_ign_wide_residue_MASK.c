
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
typedef int u_int ;
struct scb {struct ahc_dma_seg* sg_list; } ;
struct ahc_softc {int dummy; } ;
struct ahc_dma_seg {int addr; int len; } ;
struct ahc_devinfo {int dummy; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
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
 int FUNC_0 (struct ahc_softc*,int ) ;
 int FUNC_1 (struct ahc_softc*,int ) ;
 struct scb* FUNC_2 (struct ahc_softc*,int) ;
 int FUNC_3 (struct ahc_softc*,int ,int) ;
 int FUNC_4 (struct ahc_softc*,int ,int) ;
 struct ahc_dma_seg* FUNC_5 (struct scb*,int) ;
 int FUNC_6 (struct scb*,struct ahc_dma_seg*) ;
 scalar_t__ FUNC_7 (struct scb*) ;
 int FUNC_8 (int ) ;

__attribute__((used)) static void
FUNC_9(struct ahc_softc *VAR_12, struct ahc_devinfo *VAR_13)
{
 u_int VAR_14;
 struct scb *VAR_15;

 VAR_14 = FUNC_0(VAR_12, VAR_6);
 VAR_15 = FUNC_2(VAR_12, VAR_14);




 if ((FUNC_0(VAR_12, VAR_8) & VAR_2) == 0
  || FUNC_7(VAR_15) != VAR_1) {




 } else {







  uint32_t VAR_16;

  VAR_16 = FUNC_0(VAR_12, VAR_5);
  if ((VAR_16 & VAR_9) != 0
   && (FUNC_0(VAR_12, VAR_3) & VAR_7) != 0) {






  } else {
   struct ahc_dma_seg *VAR_17;
   uint32_t VAR_18;
   uint32_t VAR_19;
   uint32_t VAR_20;


   VAR_16 = FUNC_1(VAR_12, VAR_5);
   VAR_18 = FUNC_1(VAR_12, VAR_4);

   if ((VAR_16 & VAR_9) != 0) {





    VAR_18 &= ~VAR_0;
   }

   VAR_19 = FUNC_1(VAR_12, VAR_11);

   VAR_18 += 1;
   VAR_19 -= 1;
   VAR_16 &= VAR_10;

   VAR_17 = FUNC_5(VAR_15, VAR_16);





   VAR_17--;
   VAR_20 = FUNC_8(VAR_17->len) & VAR_0;
   if (VAR_17 != VAR_15->sg_list
    && VAR_20 < (VAR_18 & VAR_0)) {

    VAR_17--;
    VAR_20 = FUNC_8(VAR_17->len);




    VAR_18 = 1 | (VAR_20 & (~VAR_0));
    VAR_19 = FUNC_8(VAR_17->addr)
       + (VAR_20 & VAR_0) - 1;





    VAR_17++;
    VAR_16 = FUNC_6(VAR_15, VAR_17);
   }
   FUNC_4(VAR_12, VAR_5, VAR_16);
   FUNC_4(VAR_12, VAR_4, VAR_18);






   FUNC_3(VAR_12, VAR_3,
     FUNC_0(VAR_12, VAR_3) ^ VAR_7);
  }
 }
}
