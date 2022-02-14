
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef size_t uint8_t ;
typedef int uint16_t ;
struct twl_softc {size_t* sc_subaddr_map; } ;
struct iic_msg {size_t slave; int flags; int len; size_t* buf; } ;
typedef int device_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 size_t VAR_4 ;
 int FUNC_0 (struct twl_softc*) ;
 int FUNC_1 (struct twl_softc*) ;
 struct twl_softc* FUNC_2 (int ) ;
 int FUNC_3 (int ,char*,size_t,size_t) ;
 int FUNC_4 (int ,struct iic_msg*,int) ;

int
FUNC_5(device_t VAR_5, uint8_t VAR_6, uint8_t VAR_7, uint8_t *VAR_8, uint16_t VAR_9)
{
 struct twl_softc *VAR_10;
 struct iic_msg VAR_11[2];
 uint8_t VAR_12;
 int VAR_13;

 VAR_10 = FUNC_2(VAR_5);

 FUNC_0(VAR_10);
 VAR_12 = VAR_10->sc_subaddr_map[VAR_6];
 FUNC_1(VAR_10);

 if (VAR_12 == VAR_4)
  return (VAR_0);



 VAR_11[0].slave = VAR_12;
 VAR_11[0].flags = VAR_3 | VAR_1;
 VAR_11[0].len = 1;
 VAR_11[0].buf = &VAR_7;

 VAR_11[1].slave = VAR_12;
 VAR_11[1].flags = VAR_2;
 VAR_11[1].len = VAR_9;
 VAR_11[1].buf = VAR_8;

 VAR_13 = FUNC_4(VAR_5, VAR_11, 2);
 if (VAR_13 != 0) {
  FUNC_3(VAR_5, "iicbus read failed (adr:0x%02x, reg:0x%02x)\n",
                VAR_12, VAR_7);
  return (VAR_0);
 }

 return (0);
}
