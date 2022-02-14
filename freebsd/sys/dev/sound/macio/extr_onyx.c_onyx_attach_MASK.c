
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct onyx_softc {int sc_addr; void* sc_dev; } ;
typedef void* device_t ;


 struct onyx_softc* FUNC_0 (void*) ;
 void* VAR_0 ;
 int * VAR_1 ;
 int FUNC_1 (void*) ;
 int VAR_2 ;

__attribute__((used)) static int
FUNC_2(device_t VAR_3)
{
 struct onyx_softc *VAR_4;

 VAR_4 = FUNC_0(VAR_3);
 VAR_4->sc_dev = VAR_3;
 VAR_4->sc_addr = FUNC_1(VAR_3);

 VAR_1 = &VAR_2;
 VAR_0 = VAR_3;

 return (0);
}
