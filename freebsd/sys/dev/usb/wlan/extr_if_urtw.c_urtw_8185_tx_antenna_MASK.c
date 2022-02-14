
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int usb_error_t ;
typedef int uint8_t ;
struct urtw_softc {int sc_mtx; } ;


 int VAR_0 ;
 int FUNC_0 (struct urtw_softc*,int ,int ) ;
 int FUNC_1 (int *,int) ;

__attribute__((used)) static usb_error_t
FUNC_2(struct urtw_softc *VAR_1, uint8_t VAR_2)
{
 usb_error_t VAR_3;

 FUNC_0(VAR_1, VAR_0, VAR_2);
 FUNC_1(&VAR_1->sc_mtx, 1);
fail:
 return (VAR_3);
}
