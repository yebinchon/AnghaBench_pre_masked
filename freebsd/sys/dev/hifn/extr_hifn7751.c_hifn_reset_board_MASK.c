
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_int32_t ;
struct hifn_softc {int sc_flags; int * sc_dma; } ;


 int FUNC_0 (int) ;
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
 int FUNC_1 (int ,char*) ;
 int FUNC_2 (struct hifn_softc*,int ) ;
 int FUNC_3 (struct hifn_softc*,int ,int) ;
 int FUNC_4 (int *,int) ;
 int FUNC_5 (struct hifn_softc*) ;
 int FUNC_6 (struct hifn_softc*) ;
 int FUNC_7 (struct hifn_softc*) ;
 int FUNC_8 (char*) ;

__attribute__((used)) static void
FUNC_9(struct hifn_softc *VAR_12, int VAR_13)
{
 u_int32_t VAR_14;





 FUNC_3(VAR_12, VAR_1, VAR_9 |
     VAR_7 | VAR_8);





 FUNC_0(1000);


 if (VAR_13) {
  FUNC_3(VAR_12, VAR_1, VAR_8);
  FUNC_0(1000);
 } else {
  FUNC_3(VAR_12, VAR_1,
      VAR_8 | VAR_9);
  FUNC_6(VAR_12);
 }

 FUNC_1(VAR_12->sc_dma != ((void*)0), ("hifn_reset_board: null DMA tag!"));
 FUNC_4(VAR_12->sc_dma, sizeof(*VAR_12->sc_dma));


 FUNC_3(VAR_12, VAR_1, VAR_9 |
     VAR_7 | VAR_8);

 FUNC_5(VAR_12);
 FUNC_7(VAR_12);

 if (VAR_12->sc_flags & VAR_10) {
  for (VAR_14 = 0; VAR_14 < 1000; VAR_14++) {
   if (FUNC_2(VAR_12, VAR_0) &
       VAR_11)
    break;
   FUNC_0(1000);
  }
  if (VAR_14 == 1000)
   FUNC_8(": cram init timeout\n");
 } else {


   FUNC_3(VAR_12, VAR_2,
        (3 << VAR_4)|
        (3 << VAR_3)|
        (2 << VAR_6)|
        (2 << VAR_5));
 }

}
