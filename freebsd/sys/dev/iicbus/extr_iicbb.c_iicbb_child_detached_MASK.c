
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct iicbb_softc {int * iicbus; } ;
typedef int * device_t ;


 scalar_t__ FUNC_0 (int *) ;

__attribute__((used)) static void
FUNC_1( device_t VAR_0, device_t VAR_1 )
{
 struct iicbb_softc *VAR_2 = (struct iicbb_softc *)FUNC_0(VAR_0);

 if (VAR_1 == VAR_2->iicbus)
  VAR_2->iicbus = ((void*)0);
}
