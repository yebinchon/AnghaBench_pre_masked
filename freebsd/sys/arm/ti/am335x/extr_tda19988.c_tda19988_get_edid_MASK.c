
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
typedef int uint32_t ;
struct tda19988_softc {int sc_edid_len; int * sc_edid; } ;
typedef int device_t ;


 int VAR_0 ;
 struct tda19988_softc* FUNC_0 (int ) ;

__attribute__((used)) static int
FUNC_1(device_t VAR_1, uint8_t **VAR_2, uint32_t *VAR_3)
{
 struct tda19988_softc *VAR_4;

 VAR_4 = FUNC_0(VAR_1);

 if (VAR_4->sc_edid) {
  *VAR_2 = VAR_4->sc_edid;
  *VAR_3 = VAR_4->sc_edid_len;
 } else
  return (VAR_0);

 return (0);
}
