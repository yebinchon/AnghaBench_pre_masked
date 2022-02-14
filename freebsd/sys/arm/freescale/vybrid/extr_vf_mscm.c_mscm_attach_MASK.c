
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mscm_softc {int * res; int bsh; int bst; } ;
typedef int device_t ;


 int VAR_0 ;
 int FUNC_0 (int) ;
 int VAR_1 ;
 int FUNC_1 (struct mscm_softc*,int ,int) ;
 scalar_t__ FUNC_2 (int ,int ,int *) ;
 struct mscm_softc* FUNC_3 (int ) ;
 int FUNC_4 (int ,char*) ;
 int VAR_2 ;
 int FUNC_5 (int ) ;
 int FUNC_6 (int ) ;

__attribute__((used)) static int
FUNC_7(device_t VAR_3)
{
 struct mscm_softc *VAR_4;
 int VAR_5;

 VAR_4 = FUNC_3(VAR_3);

 if (FUNC_2(VAR_3, VAR_2, VAR_4->res)) {
  FUNC_4(VAR_3, "could not allocate resources\n");
  return (VAR_0);
 }


 VAR_4->bst = FUNC_6(VAR_4->res[0]);
 VAR_4->bsh = FUNC_5(VAR_4->res[0]);


 for (VAR_5 = 0; VAR_5 < VAR_1; VAR_5++)
  FUNC_1(VAR_4, FUNC_0(VAR_5), 1);

 return (0);
}
