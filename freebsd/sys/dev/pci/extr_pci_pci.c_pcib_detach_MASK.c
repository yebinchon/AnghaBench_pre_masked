
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pcib_softc {int flags; int bus; } ;
typedef int device_t ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 struct pcib_softc* FUNC_2 (int ) ;
 int FUNC_3 (struct pcib_softc*) ;
 int FUNC_4 (int ,int *) ;
 int FUNC_5 (struct pcib_softc*) ;

int
FUNC_6(device_t VAR_1)
{



 int VAR_2;




 VAR_2 = FUNC_0(VAR_1);
 if (VAR_2)
  return (VAR_2);







 VAR_2 = FUNC_1(VAR_1);
 if (VAR_2)
  return (VAR_2);






 return (0);
}
