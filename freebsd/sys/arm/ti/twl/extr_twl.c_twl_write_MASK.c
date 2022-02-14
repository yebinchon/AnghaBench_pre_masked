
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef size_t uint8_t ;
typedef int uint16_t ;
struct twl_softc {size_t* sc_subaddr_map; int sc_dev; } ;
struct iic_msg {size_t slave; size_t* buf; scalar_t__ len; int flags; } ;
typedef int device_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 size_t VAR_3 ;
 int FUNC_0 (struct twl_softc*) ;
 int VAR_4 ;
 int FUNC_1 (struct twl_softc*) ;
 struct twl_softc* FUNC_2 (int ) ;
 int FUNC_3 (int ,char*,size_t,size_t) ;
 int FUNC_4 (int ,struct iic_msg*,int) ;
 int FUNC_5 (size_t*,size_t*,int) ;

int
FUNC_6(device_t VAR_5, uint8_t VAR_6, uint8_t VAR_7, uint8_t *VAR_8, uint16_t VAR_9)
{
 struct twl_softc *VAR_10;
 struct iic_msg VAR_11;
 uint8_t VAR_12;
 uint8_t VAR_13[VAR_4 + 1];
 int VAR_14;

 if (VAR_9 > VAR_4)
  return (VAR_1);


 VAR_13[0] = VAR_7;
 FUNC_5(&VAR_13[1], VAR_8, VAR_9);

 VAR_10 = FUNC_2(VAR_5);

 FUNC_0(VAR_10);
 VAR_12 = VAR_10->sc_subaddr_map[VAR_6];
 FUNC_1(VAR_10);

 if (VAR_12 == VAR_3)
  return (VAR_0);



 VAR_11.slave = VAR_12;
 VAR_11.flags = VAR_2;
 VAR_11.len = VAR_9 + 1;
 VAR_11.buf = VAR_13;

 VAR_14 = FUNC_4(VAR_5, &VAR_11, 1);
 if (VAR_14 != 0) {
  FUNC_3(VAR_10->sc_dev, "iicbus write failed (adr:0x%02x, reg:0x%02x)\n",
                VAR_12, VAR_7);
  return (VAR_0);
 }

 return (0);
}
