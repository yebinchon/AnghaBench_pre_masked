
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int usb_error_t ;
typedef int uint8_t ;
typedef int uint32_t ;
struct urtw_softc {int dummy; } ;


 int FUNC_0 (struct urtw_softc*,int ,int) ;

__attribute__((used)) static usb_error_t
FUNC_1(struct urtw_softc *VAR_0, uint8_t VAR_1, uint32_t VAR_2)
{

 VAR_2 = VAR_2 & 0xff;
 return FUNC_0(VAR_0, VAR_1, VAR_2 | 0x10000);
}
