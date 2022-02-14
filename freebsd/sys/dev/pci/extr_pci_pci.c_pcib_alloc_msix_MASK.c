
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pcib_softc {int flags; } ;
typedef int device_t ;


 int VAR_0 ;
 int FUNC_0 (int ,int ,int*) ;
 int VAR_1 ;
 int FUNC_1 (int ) ;
 struct pcib_softc* FUNC_2 (int ) ;

int
FUNC_3(device_t VAR_2, device_t VAR_3, int *VAR_4)
{
 struct pcib_softc *VAR_5 = FUNC_2(VAR_2);
 device_t VAR_6;

 if (VAR_5->flags & VAR_1)
  return (VAR_0);
 VAR_6 = FUNC_1(VAR_2);
 return (FUNC_0(FUNC_1(VAR_6), VAR_3, VAR_4));
}
