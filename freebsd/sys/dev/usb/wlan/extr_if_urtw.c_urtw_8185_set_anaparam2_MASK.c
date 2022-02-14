
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ usb_error_t ;
typedef int uint8_t ;
typedef int uint32_t ;
struct urtw_softc {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (struct urtw_softc*,int ,int*) ;
 scalar_t__ FUNC_1 (struct urtw_softc*,int ) ;
 int FUNC_2 (struct urtw_softc*,int ,int ) ;
 int FUNC_3 (struct urtw_softc*,int ,int) ;

__attribute__((used)) static usb_error_t
FUNC_4(struct urtw_softc *VAR_5, uint32_t VAR_6)
{
 uint8_t VAR_7;
 usb_error_t VAR_8;

 VAR_8 = FUNC_1(VAR_5, VAR_3);
 if (VAR_8)
  goto fail;

 FUNC_0(VAR_5, VAR_1, &VAR_7);
 FUNC_3(VAR_5, VAR_1, VAR_7 | VAR_2);
 FUNC_2(VAR_5, VAR_0, VAR_6);
 FUNC_0(VAR_5, VAR_1, &VAR_7);
 FUNC_3(VAR_5, VAR_1, VAR_7 & ~VAR_2);

 VAR_8 = FUNC_1(VAR_5, VAR_4);
 if (VAR_8)
  goto fail;
fail:
 return (VAR_8);
}
