
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint16_t ;
struct ste_softc {int ste_dev; } ;


 int FUNC_0 (struct ste_softc*,int ) ;
 int FUNC_1 (struct ste_softc*,int ,int) ;
 int FUNC_2 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_3 (int ,char*) ;

__attribute__((used)) static void
FUNC_4(struct ste_softc *VAR_4)
{
 uint16_t VAR_5;
 int VAR_6;

 for (VAR_6 = 0; VAR_6 < VAR_3; VAR_6++) {
  VAR_5 = FUNC_0(VAR_4, VAR_0);
  VAR_5 |= VAR_1;
  FUNC_1(VAR_4, VAR_0, VAR_5);
  VAR_5 = FUNC_0(VAR_4, VAR_0);
  if ((VAR_5 & VAR_2) != 0)
   break;
  FUNC_2(10);
 }

 if (VAR_6 == VAR_3)
  FUNC_3(VAR_4->ste_dev, "starting Tx failed");
}
