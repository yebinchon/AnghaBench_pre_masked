
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct cgem_softc {int * miibus; } ;
typedef int * device_t ;


 struct cgem_softc* FUNC_0 (int *) ;

__attribute__((used)) static void
FUNC_1(device_t VAR_0, device_t VAR_1)
{
 struct cgem_softc *VAR_2 = FUNC_0(VAR_0);

 if (VAR_1 == VAR_2->miibus)
  VAR_2->miibus = ((void*)0);
}
