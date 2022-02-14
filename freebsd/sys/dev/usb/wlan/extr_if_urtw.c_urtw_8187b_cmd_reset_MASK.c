
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int usb_error_t ;
typedef int uint8_t ;
struct urtw_softc {int sc_dev; int sc_mtx; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,char*) ;
 int FUNC_1 (struct urtw_softc*,int ,int*) ;
 int FUNC_2 (struct urtw_softc*,int ,int) ;
 int FUNC_3 (int *,int) ;

__attribute__((used)) static usb_error_t
FUNC_4(struct urtw_softc *VAR_2)
{
 int VAR_3;
 uint8_t VAR_4;
 usb_error_t VAR_5;


 FUNC_1(VAR_2, VAR_0, &VAR_4);
 VAR_4 = (VAR_4 & 0x2) | VAR_1;
 FUNC_2(VAR_2, VAR_0, VAR_4);

 for (VAR_3 = 0; VAR_3 < 20; VAR_3++) {
  FUNC_3(&VAR_2->sc_mtx, 2);
  FUNC_1(VAR_2, VAR_0, &VAR_4);
  if (!(VAR_4 & VAR_1))
   break;
 }
 if (VAR_3 >= 20) {
  FUNC_0(VAR_2->sc_dev, "reset timeout\n");
  goto fail;
 }
fail:
 return (VAR_5);
}
