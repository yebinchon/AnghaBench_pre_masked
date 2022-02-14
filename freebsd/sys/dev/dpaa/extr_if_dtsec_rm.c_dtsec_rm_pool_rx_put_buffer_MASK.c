
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
typedef struct dtsec_softc* t_Handle ;
typedef int t_Error ;
struct dtsec_softc {int sc_rx_zone; } ;


 int VAR_0 ;
 int FUNC_0 (int ,int *) ;

__attribute__((used)) static t_Error
FUNC_1(t_Handle VAR_1, uint8_t *VAR_2,
    t_Handle VAR_3)
{
 struct dtsec_softc *VAR_4;

 VAR_4 = VAR_1;
 FUNC_0(VAR_4->sc_rx_zone, VAR_2);

 return (VAR_0);
}
