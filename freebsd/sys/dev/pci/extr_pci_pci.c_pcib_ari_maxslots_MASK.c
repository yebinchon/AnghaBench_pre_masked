
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pcib_softc {int flags; } ;
typedef int device_t ;


 int VAR_0 ;
 int VAR_1 ;
 struct pcib_softc* FUNC_0 (int ) ;
 int FUNC_1 (int ) ;

__attribute__((used)) static int
FUNC_2(device_t VAR_2)
{
 struct pcib_softc *VAR_3;

 VAR_3 = FUNC_0(VAR_2);

 if (VAR_3->flags & VAR_0)
  return (VAR_1);
 else
  return (FUNC_1(VAR_2));
}
