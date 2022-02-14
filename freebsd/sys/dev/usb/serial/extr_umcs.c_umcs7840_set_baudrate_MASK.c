
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int usb_error_t ;
typedef size_t uint8_t ;
typedef int uint32_t ;
typedef int uint16_t ;
struct umcs7840_softc {TYPE_1__* sc_ports; } ;
struct TYPE_4__ {int reg_sp; } ;
struct TYPE_3__ {size_t sc_lcr; } ;


 int FUNC_0 (char*,size_t,int ,...) ;
 size_t VAR_0 ;
 size_t VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ FUNC_1 (int ,int*,size_t*) ;
 int FUNC_2 (struct umcs7840_softc*,int ,size_t*) ;
 TYPE_2__* VAR_5 ;
 int FUNC_3 (struct umcs7840_softc*,size_t,int ,size_t) ;
 int FUNC_4 (struct umcs7840_softc*,int ,size_t) ;

__attribute__((used)) static usb_error_t
FUNC_5(struct umcs7840_softc *VAR_6, uint8_t VAR_7, uint32_t VAR_8)
{
 usb_error_t VAR_9;
 uint16_t VAR_10;
 uint8_t VAR_11;
 uint8_t VAR_12;

 if (FUNC_1(VAR_8, &VAR_10, &VAR_11)) {
  FUNC_0("Port %d bad speed: %d\n", VAR_7, VAR_8);
  return (-1);
 }
 if (VAR_10 == 0 || (VAR_11 & VAR_0) != VAR_11) {
  FUNC_0("Port %d bad speed calculation: %d\n", VAR_7, VAR_8);
  return (-1);
 }
 FUNC_0("Port %d set speed: %d (%02x / %d)\n", VAR_7, VAR_8, VAR_11, VAR_10);


 VAR_9 = FUNC_2(VAR_6, VAR_5[VAR_7].reg_sp, &VAR_12);
 if (VAR_9)
  return (VAR_9);
 VAR_12 &= VAR_0;
 VAR_12 |= VAR_11;
 VAR_9 = FUNC_4(VAR_6, VAR_5[VAR_7].reg_sp, VAR_12);
 if (VAR_9)
  return (VAR_9);


 VAR_6->sc_ports[VAR_7].sc_lcr |= VAR_1;
 VAR_9 = FUNC_3(VAR_6, VAR_7, VAR_4, VAR_6->sc_ports[VAR_7].sc_lcr);
 if (VAR_9)
  return (VAR_9);

 VAR_9 = FUNC_3(VAR_6, VAR_7, VAR_2, (uint8_t)(VAR_10 & 0xff));
 if (VAR_9)
  return (VAR_9);
 VAR_9 = FUNC_3(VAR_6, VAR_7, VAR_3, (uint8_t)((VAR_10 >> 8) & 0xff));
 if (VAR_9)
  return (VAR_9);


 VAR_6->sc_ports[VAR_7].sc_lcr &= ~VAR_1;
 VAR_9 = FUNC_3(VAR_6, VAR_7, VAR_4, VAR_6->sc_ports[VAR_7].sc_lcr);
 if (VAR_9)
  return (VAR_9);
 return (0);
}
