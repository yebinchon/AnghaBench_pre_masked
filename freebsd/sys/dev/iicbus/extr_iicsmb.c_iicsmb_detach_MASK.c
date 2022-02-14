
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct iicsmb_softc {int lock; } ;
typedef int device_t ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (int ) ;
 int FUNC_3 (int *) ;

__attribute__((used)) static int
FUNC_4(device_t VAR_0)
{
 struct iicsmb_softc *VAR_1 = (struct iicsmb_softc *)FUNC_2(VAR_0);

 FUNC_0(VAR_0);
 FUNC_1(VAR_0);
 FUNC_3(&VAR_1->lock);

 return (0);
}
