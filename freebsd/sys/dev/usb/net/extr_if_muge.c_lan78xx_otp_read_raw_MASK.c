
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ uint8_t ;
typedef int uint32_t ;
typedef int uint16_t ;
struct muge_softc {int sc_mtx; } ;


 int FUNC_0 (struct muge_softc*) ;
 int FUNC_1 (struct muge_softc*) ;
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
 int FUNC_2 (struct muge_softc*,int ,int*) ;
 int FUNC_3 (struct muge_softc*,int ,int) ;
 int FUNC_4 (struct muge_softc*,int ,int) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (struct muge_softc*,char*) ;

__attribute__((used)) static int
FUNC_7(struct muge_softc *VAR_13, uint16_t VAR_14, uint8_t *VAR_15,
    uint16_t VAR_16)
{
 int VAR_17, VAR_18;
 uint32_t VAR_19;
 uint16_t VAR_20;
 VAR_17 = FUNC_5(&VAR_13->sc_mtx);
 if (!VAR_17)
  FUNC_0(VAR_13);

 VAR_18 = FUNC_2(VAR_13, VAR_8, &VAR_19);


 if (VAR_19 & VAR_9) {

  FUNC_4(VAR_13, VAR_8, 0);
  VAR_18 = FUNC_3(VAR_13, VAR_8, VAR_9);
  if (VAR_18 != 0) {
   FUNC_6(VAR_13, "OTP off? failed to read data\n");
   goto done;
  }
 }

 for (VAR_20 = 0; VAR_20 < VAR_16; VAR_20++) {
  VAR_18 = FUNC_4(VAR_13, VAR_0,
      ((VAR_14 + VAR_20) >> 8) & VAR_1);
  VAR_18 = FUNC_4(VAR_13, VAR_2,
      ((VAR_14 + VAR_20) & VAR_3));
  VAR_18 = FUNC_4(VAR_13, VAR_6, VAR_7);
  VAR_18 = FUNC_4(VAR_13, VAR_4, VAR_5);

  VAR_18 = FUNC_3(VAR_13, VAR_11, VAR_12);
  if (VAR_18 != 0) {
   FUNC_6(VAR_13, "OTP busy failed to read data\n");
   goto done;
  }

  if ((VAR_18 = FUNC_2(VAR_13, VAR_10, &VAR_19)) != 0)
   goto done;

  VAR_15[VAR_20] = (uint8_t)(VAR_19 & 0xff);
 }

done:
 if (!VAR_17)
  FUNC_1(VAR_13);
 return (VAR_18);
}
