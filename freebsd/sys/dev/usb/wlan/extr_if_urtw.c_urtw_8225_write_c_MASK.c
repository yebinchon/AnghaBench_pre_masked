
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ usb_error_t ;
typedef int uint8_t ;
typedef int uint16_t ;
struct urtw_softc {int sc_mtx; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 scalar_t__ FUNC_1 (struct urtw_softc*,int ,int,int*) ;
 int FUNC_2 (struct urtw_softc*,int ,int*) ;
 int FUNC_3 (struct urtw_softc*,int ,int) ;
 int FUNC_4 (int *,int) ;

__attribute__((used)) static usb_error_t
FUNC_5(struct urtw_softc *VAR_7, uint8_t VAR_8, uint16_t VAR_9)
{
 uint16_t VAR_10, VAR_11, VAR_12;
 usb_error_t VAR_13;

 FUNC_2(VAR_7, VAR_5, &VAR_10);
 VAR_10 &= VAR_2;
 FUNC_2(VAR_7, VAR_1, &VAR_11);
 FUNC_2(VAR_7, VAR_6, &VAR_12);
 VAR_12 &= VAR_3;
 FUNC_3(VAR_7, VAR_1, VAR_11 | VAR_4);
 FUNC_3(VAR_7, VAR_6, VAR_12 | VAR_4);
 FUNC_0(10);

 FUNC_3(VAR_7, VAR_5, VAR_10 | VAR_0);
 FUNC_0(2);
 FUNC_3(VAR_7, VAR_5, VAR_10);
 FUNC_0(10);

 VAR_13 = FUNC_1(VAR_7, VAR_8, 0x8225, &VAR_9);
 if (VAR_13 != 0)
  goto fail;

 FUNC_3(VAR_7, VAR_5, VAR_10 | VAR_0);
 FUNC_0(10);
 FUNC_3(VAR_7, VAR_5, VAR_10 | VAR_0);
 FUNC_3(VAR_7, VAR_6, VAR_12);
 FUNC_4(&VAR_7->sc_mtx, 2);
fail:
 return (VAR_13);
}
