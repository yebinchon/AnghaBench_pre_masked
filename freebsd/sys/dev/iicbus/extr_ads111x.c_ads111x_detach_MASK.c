
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ads111x_softc {int lock; } ;
typedef int device_t ;


 struct ads111x_softc* FUNC_0 (int ) ;
 int FUNC_1 (int *) ;

__attribute__((used)) static int
FUNC_2(device_t VAR_0)
{
 struct ads111x_softc *VAR_1;

 VAR_1 = FUNC_0(VAR_0);

 FUNC_1(&VAR_1->lock);
 return (0);
}
