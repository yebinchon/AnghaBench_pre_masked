
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct audmux_softc {int * res; int bsh; int bst; } ;
typedef int device_t ;


 int VAR_0 ;
 int FUNC_0 (struct audmux_softc*,int,int) ;
 int VAR_1 ;
 scalar_t__ FUNC_1 (int ,int ,int *) ;
 struct audmux_softc* FUNC_2 (int ) ;
 int FUNC_3 (int ,char*) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int ) ;

__attribute__((used)) static int
FUNC_6(device_t VAR_2)
{
 struct audmux_softc *VAR_3;

 VAR_3 = FUNC_2(VAR_2);

 if (FUNC_1(VAR_2, VAR_1, VAR_3->res)) {
  FUNC_3(VAR_2, "could not allocate resources\n");
  return (VAR_0);
 }


 VAR_3->bst = FUNC_5(VAR_3->res[0]);
 VAR_3->bsh = FUNC_4(VAR_3->res[0]);





 FUNC_0(VAR_3, 1, 5);

 return (0);
}
