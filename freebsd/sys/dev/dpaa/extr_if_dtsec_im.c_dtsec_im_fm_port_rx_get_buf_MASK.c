
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
typedef struct dtsec_softc* t_Handle ;
struct dtsec_softc {int sc_dev; } ;


 int VAR_0 ;
 int * FUNC_0 (int ,int ,int) ;
 int FUNC_1 (int ,char*) ;

__attribute__((used)) static uint8_t *
FUNC_2(t_Handle VAR_1, t_Handle *VAR_2)
{
 struct dtsec_softc *VAR_3;
 uint8_t *VAR_4;

 VAR_3 = VAR_1;

 VAR_4 = FUNC_0(VAR_0, 0, sizeof(void *));
 if (!VAR_4)
  FUNC_1(VAR_3->sc_dev, "couldn't allocate RX buffer.\n");

 return (VAR_4);
}
