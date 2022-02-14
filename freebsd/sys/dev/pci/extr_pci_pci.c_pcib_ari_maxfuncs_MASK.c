
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pcib_softc {int flags; } ;
typedef int device_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 struct pcib_softc* FUNC_0 (int ) ;

__attribute__((used)) static int
FUNC_1(device_t VAR_3)
{
 struct pcib_softc *VAR_4;

 VAR_4 = FUNC_0(VAR_3);

 if (VAR_4->flags & VAR_0)
  return (VAR_1);
 else
  return (VAR_2);
}
