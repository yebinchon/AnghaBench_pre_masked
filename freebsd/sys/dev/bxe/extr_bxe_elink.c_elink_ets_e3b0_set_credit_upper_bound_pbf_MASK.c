
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
typedef scalar_t__ uint32_t ;
struct elink_params {int port; struct bxe_softc* sc; } ;
struct bxe_softc {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_0 (struct bxe_softc*,scalar_t__,scalar_t__ const) ;
 scalar_t__ FUNC_1 (scalar_t__ const) ;

__attribute__((used)) static void FUNC_2(
 const struct elink_params *VAR_4,
 const uint32_t VAR_5)
{
 struct bxe_softc *VAR_6 = VAR_4->sc;
 const uint32_t VAR_7 =
     FUNC_1(VAR_5);
 const uint8_t VAR_8 = VAR_4->port;
 uint32_t VAR_9 = 0;
 uint8_t VAR_10 = 0;
 uint8_t VAR_11 = 0;



 if (!VAR_8) {
  VAR_9 = VAR_2;
  VAR_10 = VAR_0;
 } else {
  VAR_9 = VAR_3;
  VAR_10 = VAR_1;
 }

 for (VAR_11 = 0; VAR_11 < VAR_10; VAR_11++)
  FUNC_0(VAR_6, VAR_9 + (VAR_11 << 2), VAR_7);
}
