
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
struct glxsb_softc {int sc_dev; int sc_sr; } ;


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
 int FUNC_0 (int ,int ) ;
 int FUNC_1 (int ,int ,int) ;
 int FUNC_2 (int ,int ,void*,int) ;
 int FUNC_3 (int ,char*,...) ;

__attribute__((used)) static int
FUNC_4(struct glxsb_softc *VAR_14, uint32_t VAR_15, uint32_t VAR_16,
    uint32_t VAR_17, void *VAR_18, int VAR_19, void *VAR_20)
{
 uint32_t VAR_21;
 int VAR_22;

 if (VAR_19 & 0xF) {
  FUNC_3(VAR_14->sc_dev,
      "len must be a multiple of 16 (not %d)\n", VAR_19);
  return (VAR_0);
 }


 FUNC_1(VAR_14->sc_sr, VAR_12, VAR_16);


 FUNC_1(VAR_14->sc_sr, VAR_10, VAR_17);


 FUNC_1(VAR_14->sc_sr, VAR_11, VAR_19);


 if (VAR_20 != ((void*)0)) {
  FUNC_2(VAR_14->sc_sr, VAR_3, VAR_20, 4);
  VAR_15 |= VAR_5;
 }


 FUNC_2(VAR_14->sc_sr, VAR_13, VAR_18, 4);


 FUNC_1(VAR_14->sc_sr, VAR_4,
     VAR_15 | VAR_9 | VAR_6 | VAR_7 | VAR_8);
 for (VAR_22 = 0; VAR_22 < VAR_2 * 10; VAR_22++) {
  VAR_21 = FUNC_0(VAR_14->sc_sr, VAR_4);
  if ((VAR_21 & VAR_8) == 0)
   return (0);
 }

 FUNC_3(VAR_14->sc_dev, "operation failed to complete\n");
 return (VAR_1);
}
