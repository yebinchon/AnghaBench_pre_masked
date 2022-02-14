
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint16_t ;
struct pcib_softc {int dev; } ;
typedef int device_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,int ,int) ;
 int FUNC_1 (struct pcib_softc*) ;
 int FUNC_2 (struct pcib_softc*) ;

__attribute__((used)) static void
FUNC_3(struct pcib_softc *VAR_3)
{

 device_t VAR_4;
 uint16_t VAR_5;

 VAR_4 = VAR_3->dev;

 VAR_5 = FUNC_0(VAR_4, VAR_2, 2);
 if (VAR_5 & VAR_1)
  FUNC_1(VAR_3);
 if (VAR_5 & VAR_0)
  FUNC_2(VAR_3);

}
