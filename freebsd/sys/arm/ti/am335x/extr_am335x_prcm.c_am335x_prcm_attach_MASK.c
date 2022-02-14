
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct am335x_prcm_softc {int * res; int bsh; int bst; } ;
typedef int device_t ;


 int VAR_0 ;
 int VAR_1 ;
 struct am335x_prcm_softc* VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_0 (int ,int ,int *) ;
 struct am335x_prcm_softc* FUNC_1 (int ) ;
 int FUNC_2 (int ,char*) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ) ;
 int VAR_4 ;

__attribute__((used)) static int
FUNC_5(device_t VAR_5)
{
 struct am335x_prcm_softc *VAR_6 = FUNC_1(VAR_5);

 if (VAR_2)
  return (VAR_0);

 if (FUNC_0(VAR_5, VAR_3, VAR_6->res)) {
  FUNC_2(VAR_5, "could not allocate resources\n");
  return (VAR_0);
 }

 VAR_6->bst = FUNC_4(VAR_6->res[0]);
 VAR_6->bsh = FUNC_3(VAR_6->res[0]);

 VAR_2 = VAR_6;
 VAR_4 = VAR_1;

 return (0);
}
