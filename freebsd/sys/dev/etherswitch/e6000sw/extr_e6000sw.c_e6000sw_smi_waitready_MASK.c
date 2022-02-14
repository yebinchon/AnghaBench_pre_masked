
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int dev; } ;
typedef TYPE_1__ e6000sw_softc_t ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int FUNC_1 (int ,int,int ) ;
 int VAR_1 ;
 int VAR_2 ;

__attribute__((used)) static int
FUNC_2(e6000sw_softc_t *VAR_3, int VAR_4)
{
 int VAR_5;

 for (VAR_5 = 0; VAR_5 < VAR_0; VAR_5++) {
  if ((FUNC_1(VAR_3->dev, VAR_4, VAR_1) & VAR_2) == 0)
   return (0);
  FUNC_0(1);
 }

 return (1);
}
