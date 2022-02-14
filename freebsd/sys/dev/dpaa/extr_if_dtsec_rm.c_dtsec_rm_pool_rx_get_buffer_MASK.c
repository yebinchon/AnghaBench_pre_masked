
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
typedef struct dtsec_softc* t_Handle ;
struct dtsec_softc {int sc_rx_zone; } ;


 int VAR_0 ;
 int * FUNC_0 (int ,int ) ;

__attribute__((used)) static uint8_t *
FUNC_1(t_Handle VAR_1, t_Handle *VAR_2)
{
 struct dtsec_softc *VAR_3;
 uint8_t *VAR_4;

 VAR_3 = VAR_1;
 VAR_4 = FUNC_0(VAR_3->sc_rx_zone, VAR_0);

 return (VAR_4);
}
