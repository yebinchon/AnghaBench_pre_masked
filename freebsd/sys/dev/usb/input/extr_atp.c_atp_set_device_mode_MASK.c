
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ usb_error_t ;
typedef scalar_t__ uint8_t ;
struct atp_softc {scalar_t__ sc_family; scalar_t__* sc_mode_bytes; int sc_usb_device; } ;
typedef scalar_t__ interface_mode ;


 int FUNC_0 (char*,scalar_t__) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 int FUNC_1 (char*,int) ;
 scalar_t__ FUNC_2 (int ,int *,scalar_t__*,int,int ,int,int) ;
 scalar_t__ FUNC_3 (int ,int *,scalar_t__*,int,int ,int,int) ;

__attribute__((used)) static usb_error_t
FUNC_4(struct atp_softc *VAR_6, interface_mode VAR_7)
{
 uint8_t VAR_8;
 usb_error_t VAR_9;

 if ((VAR_7 != VAR_1) && (VAR_7 != VAR_0))
  return (VAR_3);

 if ((VAR_7 == VAR_1) &&
     (VAR_6->sc_family == VAR_2))
  VAR_8 = (uint8_t)0x04;
 else
  VAR_8 = VAR_7;

 VAR_9 = FUNC_2(VAR_6->sc_usb_device, ((void*)0) ,
     VAR_6->sc_mode_bytes, sizeof(VAR_6->sc_mode_bytes), 0 ,
     0x03 , 0x00 );
 if (VAR_9 != VAR_4) {
  FUNC_0("Failed to read device mode (%d)\n", VAR_9);
  return (VAR_9);
 }

 if (VAR_6->sc_mode_bytes[0] == VAR_8)
  return (VAR_9);







 FUNC_1("WHW", VAR_5 / 4);

 VAR_6->sc_mode_bytes[0] = VAR_8;
 return (FUNC_3(VAR_6->sc_usb_device, ((void*)0) ,
     VAR_6->sc_mode_bytes, sizeof(VAR_6->sc_mode_bytes), 0 ,
     0x03 , 0x00 ));
}
