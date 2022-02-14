
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ usb_error_t ;
struct urtw_softc {int dummy; } ;
typedef int int16_t ;


 scalar_t__ FUNC_0 (struct urtw_softc*) ;
 scalar_t__ FUNC_1 (struct urtw_softc*,int ) ;

__attribute__((used)) static usb_error_t
FUNC_2(struct urtw_softc *VAR_0, int16_t *VAR_1, int VAR_2)
{
 int VAR_3 = 0;
 usb_error_t VAR_4 = 0;

 for (VAR_3 = 0; VAR_3 < VAR_2; VAR_3++) {
  VAR_4 = FUNC_1(VAR_0, VAR_1[VAR_3]);
  if (VAR_4 != 0)
   goto fail;
  VAR_4 = FUNC_0(VAR_0);
  if (VAR_4 != 0)
   goto fail;
 }
fail:
 return (VAR_4);
}
