
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pcib_softc {int flags; } ;
typedef int device_t ;


 int VAR_0 ;
 struct pcib_softc* FUNC_0 (int ) ;

__attribute__((used)) static int
FUNC_1(device_t VAR_1)
{
 struct pcib_softc *VAR_2;

 VAR_2 = FUNC_0(VAR_1);

 return ((VAR_2->flags & VAR_0) != 0);
}
