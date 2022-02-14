
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int dev; int * mem; } ;
typedef TYPE_1__ ae_softc_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (TYPE_1__*,int ) ;
 int VAR_4 ;
 int FUNC_1 (TYPE_1__*,int ,int) ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_2 (int) ;
 int VAR_7 ;
 int FUNC_3 (int ,int ,int,int) ;
 int FUNC_4 (int ,char*) ;

__attribute__((used)) static int
FUNC_5(ae_softc_t *VAR_8)
{
 int VAR_9;




 FUNC_1(VAR_8, VAR_2, VAR_3);
 FUNC_3(VAR_8->mem[0], VAR_2, 4,
     VAR_5 | VAR_6);




 for (VAR_9 = 0; VAR_9 < VAR_4; VAR_9++) {
  if ((FUNC_0(VAR_8, VAR_2) & VAR_3) == 0)
   break;
  FUNC_2(10);
 }
 if (VAR_9 == VAR_4) {
  FUNC_4(VAR_8->dev, "reset timeout.\n");
  return (VAR_7);
 }




 for (VAR_9 = 0; VAR_9 < VAR_1; VAR_9++) {
  if (FUNC_0(VAR_8, VAR_0) == 0)
   break;
  FUNC_2(100);
 }
 if (VAR_9 == VAR_1) {
  FUNC_4(VAR_8->dev, "could not enter idle state.\n");
  return (VAR_7);
 }
 return (0);
}
