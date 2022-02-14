
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint16_t ;
struct pcib_softc {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (int ,int ,int) ;
 int FUNC_1 (struct pcib_softc*) ;
 int FUNC_2 (struct pcib_softc*) ;
 int FUNC_3 (struct pcib_softc*,int) ;

__attribute__((used)) static void
FUNC_4(struct pcib_softc *VAR_6)
{

 uint16_t VAR_7;





 VAR_7 = FUNC_0(VAR_6->dev, VAR_2, 2);
 if (VAR_7 & VAR_1)
  FUNC_1(VAR_6);
 if (VAR_7 & VAR_0)
  FUNC_2(VAR_6);

}
