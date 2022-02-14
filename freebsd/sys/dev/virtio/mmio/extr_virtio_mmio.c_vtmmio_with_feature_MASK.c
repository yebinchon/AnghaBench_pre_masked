
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint64_t ;
struct vtmmio_softc {int vtmmio_features; } ;
typedef int device_t ;


 struct vtmmio_softc* FUNC_0 (int ) ;

__attribute__((used)) static int
FUNC_1(device_t VAR_0, uint64_t VAR_1)
{
 struct vtmmio_softc *VAR_2;

 VAR_2 = FUNC_0(VAR_0);

 return ((VAR_2->vtmmio_features & VAR_1) != 0);
}
