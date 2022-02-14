
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
struct mk48txx_softc {int sc_res; } ;
typedef int device_t ;


 int FUNC_0 (int ,int) ;
 struct mk48txx_softc* FUNC_1 (int ) ;

__attribute__((used)) static uint8_t
FUNC_2(device_t VAR_0, int VAR_1)
{
 struct mk48txx_softc *VAR_2;

 VAR_2 = FUNC_1(VAR_0);
 return (FUNC_0(VAR_2->sc_res, VAR_1));
}
