
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ti_clock_dev {int dummy; } ;
struct am335x_prcm_softc {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int) ;
 int VAR_2 ;
 struct am335x_prcm_softc* VAR_3 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ,int) ;

__attribute__((used)) static int
FUNC_3(struct ti_clock_dev *VAR_4)
{
 struct am335x_prcm_softc *VAR_5 = VAR_3;

 if (VAR_5 == ((void*)0))
  return VAR_2;



        FUNC_2(VAR_1, 0x300);


 FUNC_2(VAR_0, 2);


 while ((FUNC_1(VAR_0) & 0x3) != 2)
  FUNC_0(10);


 while(FUNC_1(VAR_0) & (3<<16))
  FUNC_0(10);

 return(0);
}
