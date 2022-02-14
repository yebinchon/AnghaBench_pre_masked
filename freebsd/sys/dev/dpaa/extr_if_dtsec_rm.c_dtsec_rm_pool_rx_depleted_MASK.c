
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef struct dtsec_softc* t_Handle ;
struct dtsec_softc {int sc_rx_pool; } ;


 unsigned int VAR_0 ;
 unsigned int FUNC_0 (int ) ;
 int FUNC_1 (int ,unsigned int) ;

__attribute__((used)) static void
FUNC_2(t_Handle VAR_1, bool VAR_2)
{
 struct dtsec_softc *VAR_3;
 unsigned int VAR_4;

 VAR_3 = VAR_1;

 if (!VAR_2)
  return;

 while (1) {
  VAR_4 = FUNC_0(VAR_3->sc_rx_pool);
  if (VAR_4 > VAR_0)
   return;

  FUNC_1(VAR_3->sc_rx_pool, VAR_0);
 }
}
