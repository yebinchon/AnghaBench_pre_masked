
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int usb_error_t ;
typedef int uint8_t ;
typedef int uint32_t ;
struct urtw_softc {int sc_mtx; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct urtw_softc*,int ,int) ;
 int FUNC_1 (int *,int) ;

__attribute__((used)) static usb_error_t
FUNC_2(struct urtw_softc *VAR_4, uint8_t VAR_5, uint32_t VAR_6)
{
 uint32_t VAR_7;
 usb_error_t VAR_8;

 VAR_7 = ((VAR_6 << 8) | (VAR_5 | 0x80));
 FUNC_0(VAR_4, VAR_3, ((VAR_7 & 0xff000000) >> 24));
 FUNC_0(VAR_4, VAR_2, ((VAR_7 & 0x00ff0000) >> 16));
 FUNC_0(VAR_4, VAR_1, ((VAR_7 & 0x0000ff00) >> 8));
 FUNC_0(VAR_4, VAR_0, ((VAR_7 & 0x000000ff)));
 FUNC_1(&VAR_4->sc_mtx, 1);
fail:
 return (VAR_8);
}
