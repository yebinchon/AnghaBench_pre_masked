
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint8_t ;
typedef int uint16_t ;
struct ti_i2c_softc {scalar_t__ sc_error; int sc_con_reg; int sc_buffer_pos; TYPE_1__* sc_buffer; int sc_fifo_trsh; } ;
struct TYPE_2__ {int flags; int len; int* buf; } ;


 void* VAR_0 ;
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
 int FUNC_0 (int ,int) ;
 int FUNC_1 (struct ti_i2c_softc*,char*) ;
 int FUNC_2 (struct ti_i2c_softc*,int ) ;
 int FUNC_3 (struct ti_i2c_softc*,int ,int) ;

__attribute__((used)) static int
FUNC_4(struct ti_i2c_softc* VAR_14, uint16_t VAR_15)
{
 int VAR_16, VAR_17, VAR_18;

 VAR_17 = 0;
 VAR_16 = 0;

 if (VAR_15 & VAR_7) {

  FUNC_1(VAR_14, "NACK\n");
  FUNC_3(VAR_14, VAR_4, VAR_7);
  VAR_14->sc_error = VAR_0;
 } else if (VAR_15 & VAR_5) {

  FUNC_1(VAR_14, "Arbitration lost\n");
  FUNC_3(VAR_14, VAR_4, VAR_5);
  VAR_14->sc_error = VAR_0;
 }


 if (VAR_15 & VAR_6) {

  FUNC_1(VAR_14, "ARDY transaction complete\n");
  if (VAR_14->sc_error != 0 && VAR_14->sc_buffer->flags & VAR_12) {
   FUNC_3(VAR_14, VAR_2,
       VAR_14->sc_con_reg | VAR_1);
  }
  FUNC_3(VAR_14, VAR_4,
      VAR_6 | VAR_8 | VAR_9 |
      VAR_10 | VAR_11);
  return (1);
 }

 if (VAR_14->sc_buffer->flags & VAR_13) {

  if (VAR_15 & VAR_8) {





   FUNC_1(VAR_14, "Receive draining interrupt\n");




   VAR_16 = VAR_14->sc_buffer->len - VAR_14->sc_buffer_pos;
  } else if (VAR_15 & VAR_9) {




   FUNC_1(VAR_14, "Receive data ready interrupt\n");

   VAR_16 = FUNC_0(VAR_14->sc_fifo_trsh,
       VAR_14->sc_buffer->len - VAR_14->sc_buffer_pos);
  }


  for (VAR_18 = 0; VAR_18 < VAR_16; VAR_18++)
   VAR_14->sc_buffer->buf[VAR_14->sc_buffer_pos++] =
       (uint8_t)(FUNC_2(VAR_14, VAR_3) & 0xff);

  if (VAR_15 & VAR_8)
   FUNC_3(VAR_14, VAR_4, VAR_8);
  if (VAR_15 & VAR_9)
   FUNC_3(VAR_14, VAR_4, VAR_9);

 } else {

  if (VAR_15 & VAR_10) {





   FUNC_1(VAR_14, "Transmit draining interrupt\n");





   VAR_16 = VAR_14->sc_buffer->len - VAR_14->sc_buffer_pos;
  } else if (VAR_15 & VAR_11) {




   FUNC_1(VAR_14, "Transmit data ready interrupt\n");

   VAR_16 = FUNC_0(VAR_14->sc_fifo_trsh,
       VAR_14->sc_buffer->len - VAR_14->sc_buffer_pos);
  }


  for (VAR_18 = 0; VAR_18 < VAR_16; VAR_18++)
   FUNC_3(VAR_14, VAR_3,
       VAR_14->sc_buffer->buf[VAR_14->sc_buffer_pos++]);

  if (VAR_15 & VAR_10)
   FUNC_3(VAR_14, VAR_4, VAR_10);
  if (VAR_15 & VAR_11)
   FUNC_3(VAR_14, VAR_4, VAR_11);
 }

 return (VAR_17);
}
