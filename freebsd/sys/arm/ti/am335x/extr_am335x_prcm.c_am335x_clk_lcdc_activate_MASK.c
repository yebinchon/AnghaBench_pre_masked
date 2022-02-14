
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ti_clock_dev {int dummy; } ;
struct am335x_prcm_softc {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (int) ;
 int VAR_1 ;
 int FUNC_1 (struct ti_clock_dev*,int) ;
 struct am335x_prcm_softc* VAR_2 ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ,int) ;

__attribute__((used)) static int
FUNC_4(struct ti_clock_dev *VAR_3)
{
 struct am335x_prcm_softc *VAR_4 = VAR_2;

 if (VAR_4 == ((void*)0))
  return (VAR_1);




 FUNC_1(VAR_3, 25175000*2);


 FUNC_3(VAR_0, 2);


 while ((FUNC_2(VAR_0) & 0x3) != 2)
  FUNC_0(10);


 while(FUNC_2(VAR_0) & (3<<16))
  FUNC_0(10);

 return (0);
}
