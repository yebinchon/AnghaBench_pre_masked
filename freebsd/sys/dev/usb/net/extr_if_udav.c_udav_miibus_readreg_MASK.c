
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
typedef int uint16_t ;
struct udav_softc {int sc_mtx; } ;
typedef int device_t ;


 int FUNC_0 (int,char*,int,int,int) ;
 int FUNC_1 (struct udav_softc*,int ,int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_2 (struct udav_softc*) ;
 int FUNC_3 (struct udav_softc*) ;
 struct udav_softc* FUNC_4 (int ) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (struct udav_softc*,int ,int*,int) ;
 int FUNC_7 (struct udav_softc*,int ,int) ;

__attribute__((used)) static int
FUNC_8(device_t VAR_7, int VAR_8, int VAR_9)
{
 struct udav_softc *VAR_10 = FUNC_4(VAR_7);
 uint16_t VAR_11;
 uint8_t VAR_12[2];
 int VAR_13;


 if (VAR_8 != 0)
  return (0);

 VAR_13 = FUNC_5(&VAR_10->sc_mtx);
 if (!VAR_13)
  FUNC_2(VAR_10);


 FUNC_7(VAR_10, VAR_0,
     VAR_2 | (VAR_9 & VAR_1));


 FUNC_7(VAR_10, VAR_3, VAR_4 | VAR_5);




 FUNC_1(VAR_10, VAR_3, VAR_5);


 FUNC_6(VAR_10, VAR_6, VAR_12, 2);

 VAR_11 = (VAR_12[0] | (VAR_12[1] << 8));

 FUNC_0(11, "phy=%d reg=0x%04x => 0x%04x\n",
     VAR_8, VAR_9, VAR_11);

 if (!VAR_13)
  FUNC_3(VAR_10);
 return (VAR_11);
}
