
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int usb_error_t ;
struct urtw_softc {int dummy; } ;
typedef int int16_t ;


 int FUNC_0 (struct urtw_softc*,int,int ) ;
 int * VAR_0 ;

__attribute__((used)) static usb_error_t
FUNC_1(struct urtw_softc *VAR_1, int16_t VAR_2)
{
 usb_error_t VAR_3;

 FUNC_0(VAR_1, 0x0d, VAR_0[VAR_2 * 4]);
 FUNC_0(VAR_1, 0x1b, VAR_0[VAR_2 * 4 + 2]);
 FUNC_0(VAR_1, 0x1d, VAR_0[VAR_2 * 4 + 3]);
 FUNC_0(VAR_1, 0x23, VAR_0[VAR_2 * 4 + 1]);
fail:
 return (VAR_3);
}
