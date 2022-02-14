
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
typedef int uint32_t ;
typedef int uint16_t ;
struct vtmmio_softc {int dummy; } ;
typedef int device_t ;
typedef scalar_t__ bus_size_t ;


 scalar_t__ VAR_0 ;
 struct vtmmio_softc* FUNC_0 (int ) ;
 int FUNC_1 (struct vtmmio_softc*,scalar_t__) ;
 int FUNC_2 (struct vtmmio_softc*,scalar_t__) ;
 int FUNC_3 (struct vtmmio_softc*,scalar_t__) ;

__attribute__((used)) static void
FUNC_4(device_t VAR_1, bus_size_t VAR_2,
    void *VAR_3, int VAR_4)
{
 struct vtmmio_softc *VAR_5;
 bus_size_t VAR_6;
 uint8_t *VAR_7;
 int VAR_8;

 VAR_5 = FUNC_0(VAR_1);
 VAR_6 = VAR_0 + VAR_2;

 for (VAR_7 = VAR_3; VAR_4 > 0; VAR_7 += VAR_8, VAR_6 += VAR_8, VAR_4 -= VAR_8) {
  {
   VAR_8 = 1;
   *VAR_7 = FUNC_1(VAR_5, VAR_6);
  }
 }
}
