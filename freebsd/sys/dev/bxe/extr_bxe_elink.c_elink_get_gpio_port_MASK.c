
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
typedef scalar_t__ uint32_t ;
struct elink_params {int port; struct bxe_softc* sc; } ;
struct bxe_softc {int dummy; } ;


 scalar_t__ FUNC_0 (struct bxe_softc*) ;
 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_1 (struct bxe_softc*,int ) ;
 int FUNC_2 (struct bxe_softc*) ;

__attribute__((used)) static uint8_t FUNC_3(struct elink_params *VAR_2)
{
 uint8_t VAR_3;
 uint32_t VAR_4, VAR_5;
 struct bxe_softc *VAR_6 = VAR_2->sc;
 if (FUNC_0(VAR_6))
  VAR_3 = FUNC_2(VAR_6);
 else
  VAR_3 = VAR_2->port;
 VAR_4 = FUNC_1(VAR_6, VAR_0);
 VAR_5 = FUNC_1(VAR_6, VAR_1);
 return VAR_3 ^ (VAR_4 && VAR_5);
}
