
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int usb_error_t ;
struct urtw_softc {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct urtw_softc*,int,int ) ;
 int FUNC_1 (struct urtw_softc*,int) ;
 int * VAR_3 ;
 int FUNC_2 (struct urtw_softc*,int ,int ) ;

__attribute__((used)) static usb_error_t
FUNC_3(struct urtw_softc *VAR_4, int VAR_5)
{
 usb_error_t VAR_6;

 if (VAR_5 < 0 || VAR_5 > 6)
  return -1;

 if (VAR_5 > 4)
  FUNC_2(VAR_4,
      VAR_2, VAR_0);
 else
  FUNC_2(VAR_4,
      VAR_2, VAR_1);

 VAR_5 = 6 - VAR_5;
 VAR_6 = FUNC_1(VAR_4, VAR_5);
 if (VAR_6)
  goto fail;

 FUNC_0(VAR_4, 0x41, VAR_3[VAR_5]);

fail:
 return (VAR_6);
}
