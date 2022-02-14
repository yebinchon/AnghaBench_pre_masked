
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
typedef int uint16_t ;
struct ti_i2c_softc {int sc_bus_inuse; int sc_error; int sc_con_reg; struct iic_msg* sc_buffer; int sc_timeout; int sc_mtx; scalar_t__ sc_buffer_pos; } ;
struct iic_msg {int len; int flags; int slave; int * buf; } ;
typedef int device_t ;


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
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int FUNC_1 (struct ti_i2c_softc*) ;
 int FUNC_2 (struct ti_i2c_softc*) ;
 struct ti_i2c_softc* FUNC_3 (int ) ;
 int FUNC_4 (struct ti_i2c_softc*,int *,int ,char*,int ) ;
 int FUNC_5 (struct ti_i2c_softc*,int ) ;
 int FUNC_6 (struct ti_i2c_softc*,int ,int) ;
 int FUNC_7 (struct ti_i2c_softc*) ;

__attribute__((used)) static int
FUNC_8(device_t VAR_16, struct iic_msg *VAR_17, uint32_t VAR_18)
{
 int VAR_19, VAR_20, VAR_21, VAR_22;
 struct ti_i2c_softc *VAR_23;
 uint16_t VAR_24;

  VAR_23 = FUNC_3(VAR_16);
 FUNC_1(VAR_23);


 while (VAR_23->sc_bus_inuse == 1)
  FUNC_4(VAR_23, &VAR_23->sc_mtx, 0, "i2cbuswait", 0);


 VAR_23->sc_bus_inuse = 1;

 VAR_19 = 0;
 VAR_21 = 0;
 for (VAR_20 = 0; VAR_20 < VAR_18; VAR_20++) {

  VAR_23->sc_buffer = &VAR_17[VAR_20];
  VAR_23->sc_buffer_pos = 0;
  VAR_23->sc_error = 0;


  if (VAR_23->sc_buffer == ((void*)0) || VAR_23->sc_buffer->buf == ((void*)0) ||
      VAR_23->sc_buffer->len == 0) {
   VAR_19 = VAR_1;
   break;
  }


  if (VAR_21 == 0) {




   VAR_22 = 0;
   while (FUNC_5(VAR_23, VAR_12) & VAR_13) {
    if (VAR_22++ > 100) {
     VAR_19 = VAR_0;
     goto out;
    }
    FUNC_0(1000);
   }
   VAR_22 = 0;
  } else
   VAR_21 = 0;

  if (VAR_23->sc_buffer->flags & VAR_14)
   VAR_21 = 1;


  FUNC_6(VAR_23, VAR_11, VAR_17[VAR_20].slave >> 1);


  FUNC_6(VAR_23, VAR_9, VAR_23->sc_buffer->len);


  VAR_24 = FUNC_5(VAR_23, VAR_8);
  VAR_24 |= VAR_2 | VAR_3;
  FUNC_6(VAR_23, VAR_8, VAR_24);

  VAR_24 = VAR_23->sc_con_reg | VAR_6;
  if (VAR_21 == 0)
   VAR_24 |= VAR_5;
  if ((VAR_23->sc_buffer->flags & VAR_15) == 0)
   VAR_24 |= VAR_7;
  FUNC_6(VAR_23, VAR_10, VAR_24);


  VAR_19 = FUNC_4(VAR_23, &VAR_23->sc_mtx, 0, "i2ciowait", VAR_23->sc_timeout);
  if (VAR_19 == 0)
   VAR_19 = VAR_23->sc_error;

  if (VAR_19)
   break;
 }

out:
 if (VAR_22 == 0) {
  while (FUNC_5(VAR_23, VAR_12) & VAR_13) {
   if (VAR_22++ > 100)
    break;
   FUNC_0(1000);
  }
 }

 if ((FUNC_5(VAR_23, VAR_10) & VAR_4) == 0)
  FUNC_6(VAR_23, VAR_10, VAR_23->sc_con_reg);

 VAR_23->sc_buffer = ((void*)0);
 VAR_23->sc_bus_inuse = 0;


 FUNC_7(VAR_23);

 FUNC_2(VAR_23);

 return (VAR_19);
}
