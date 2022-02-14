
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ti_clock_dev {int dummy; } ;
struct am335x_prcm_softc {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 struct am335x_prcm_softc* VAR_3 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ,int) ;

__attribute__((used)) static int
FUNC_2(struct ti_clock_dev *VAR_4)
{
 struct am335x_prcm_softc *VAR_5 = VAR_3;

 if (VAR_5 == ((void*)0))
  return VAR_2;


 FUNC_1(VAR_0, 2);


 while(FUNC_0(VAR_0) & (3<<16));


 FUNC_1(VAR_1, 2);


 while((FUNC_0(VAR_1) & (1<<4)) == 0);
 return(0);
}
