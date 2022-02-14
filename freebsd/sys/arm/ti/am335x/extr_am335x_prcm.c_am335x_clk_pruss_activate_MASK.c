
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ti_clock_dev {int dummy; } ;
struct am335x_prcm_softc {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int) ;
 int VAR_3 ;
 int VAR_4 ;
 struct am335x_prcm_softc* VAR_5 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ,int) ;

__attribute__((used)) static int
FUNC_3(struct ti_clock_dev *VAR_6)
{
 struct am335x_prcm_softc *VAR_7 = VAR_5;

 if (VAR_7 == ((void*)0))
  return (VAR_3);


 FUNC_2(VAR_1, 2);


 while ((FUNC_1(VAR_1) & 0x3) != 2)
  FUNC_0(10);


 FUNC_2(VAR_2, 2);


 while ((FUNC_1(VAR_2) & (1<<4)) == 0)
  FUNC_0(10);


 while ((FUNC_1(VAR_2) & (1<<5)) == 0)
  FUNC_0(10);


 while ((FUNC_1(VAR_2) & (1<<6)) == 0)
  FUNC_0(10);


 FUNC_2(VAR_0, 0);
 while ((FUNC_1(VAR_0) & 0x3) != 0)
  FUNC_0(10);


 FUNC_2(VAR_4, FUNC_1(VAR_4) & ~2);

 return (0);
}
