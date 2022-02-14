
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int usb_error_t ;
typedef int uint8_t ;
typedef int uint32_t ;
struct urtw_softc {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct urtw_softc*,int ,int const) ;
 int FUNC_1 (struct urtw_softc*,int ,int const) ;

__attribute__((used)) static usb_error_t
FUNC_2(struct urtw_softc *VAR_2, const uint8_t *VAR_3)
{
 usb_error_t VAR_4;

 FUNC_1(VAR_2, VAR_0, ((const uint32_t *)VAR_3)[0]);
 FUNC_0(VAR_2, VAR_1, ((const uint32_t *)VAR_3)[1] & 0xffff);

fail:
 return (VAR_4);
}
