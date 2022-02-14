
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int usb_error_t ;
typedef int uint8_t ;
struct urtw_softc {int dummy; } ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (struct urtw_softc*,int ,int*) ;
 int FUNC_2 (struct urtw_softc*,int ,int) ;

__attribute__((used)) static usb_error_t
FUNC_3(struct urtw_softc *VAR_4, int VAR_5)
{
 uint8_t VAR_6;
 usb_error_t VAR_7;

 FUNC_1(VAR_4, VAR_0, &VAR_6);
 if (VAR_5 == VAR_3)
  FUNC_2(VAR_4, VAR_0, VAR_6 | VAR_1);
 else
  FUNC_2(VAR_4, VAR_0, VAR_6 & ~VAR_1);
 FUNC_0(VAR_2);
fail:
 return (VAR_7);
}
