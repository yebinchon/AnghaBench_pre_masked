
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
struct mk48txx_softc {int sc_res; } ;
typedef int device_t ;


 int FUNC_0 (int ,int,int ) ;
 struct mk48txx_softc* FUNC_1 (int ) ;

__attribute__((used)) static void
FUNC_2(device_t VAR_0, int VAR_1, uint8_t VAR_2)
{
 struct mk48txx_softc *VAR_3;

 VAR_3 = FUNC_1(VAR_0);
 FUNC_0(VAR_3->sc_res, VAR_1, VAR_2);
}
