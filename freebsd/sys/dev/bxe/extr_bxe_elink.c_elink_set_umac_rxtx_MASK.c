
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ uint8_t ;
typedef int uint32_t ;
struct elink_params {int port; struct bxe_softc* sc; } ;
struct bxe_softc {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct bxe_softc*,int) ;
 int FUNC_1 (struct bxe_softc*,int,int) ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;

__attribute__((used)) static void FUNC_2(struct elink_params *VAR_7, uint8_t VAR_8)
{
 uint32_t VAR_9 = VAR_7->port ? VAR_1 : VAR_0;
 uint32_t VAR_10;
 struct bxe_softc *VAR_11 = VAR_7->sc;
 if (!(FUNC_0(VAR_11, VAR_3) &
     (VAR_2 << VAR_7->port)))
  return;
 VAR_10 = FUNC_0(VAR_11, VAR_9 + VAR_6);
 if (VAR_8)
  VAR_10 |= (VAR_5 |
   VAR_4);
 else
  VAR_10 &= ~(VAR_5 |
    VAR_4);

 FUNC_1(VAR_11, VAR_9 + VAR_6, VAR_10);
}
