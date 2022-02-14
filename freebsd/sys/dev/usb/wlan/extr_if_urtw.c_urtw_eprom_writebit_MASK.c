
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int usb_error_t ;
typedef int uint8_t ;
struct urtw_softc {int dummy; } ;
typedef scalar_t__ int16_t ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (struct urtw_softc*,int ,int*) ;
 int FUNC_2 (struct urtw_softc*,int ,int) ;

__attribute__((used)) static usb_error_t
FUNC_3(struct urtw_softc *VAR_3, int16_t VAR_4)
{
 uint8_t VAR_5;
 usb_error_t VAR_6;

 FUNC_1(VAR_3, VAR_0, &VAR_5);
 if (VAR_4 != 0)
  FUNC_2(VAR_3, VAR_0, VAR_5 | VAR_2);
 else
  FUNC_2(VAR_3, VAR_0, VAR_5 & ~VAR_2);
 FUNC_0(VAR_1);
fail:
 return (VAR_6);
}
