
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
struct elink_params {int port; struct bxe_softc* sc; } ;
struct bxe_softc {int dummy; } ;


 int FUNC_0 (struct bxe_softc*) ;
 int FUNC_1 (struct bxe_softc*) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_2 (struct bxe_softc*,scalar_t__,int) ;

void FUNC_3(struct elink_params *VAR_4, uint8_t VAR_5)
{
 struct bxe_softc *VAR_6 = VAR_4->sc;
 uint8_t VAR_7 = VAR_5 * 0x1F;


 if (!FUNC_1(VAR_6))
  VAR_7 |= VAR_5 * 0x20;
 FUNC_2(VAR_6, VAR_0 + VAR_4->port*4, VAR_7);

 if (!FUNC_0(VAR_6)) {
  FUNC_2(VAR_6, VAR_1 + VAR_4->port*4,
         VAR_5*0x3);
 }

 FUNC_2(VAR_6, (VAR_4->port ? VAR_3 :
      VAR_2), VAR_5);
}
