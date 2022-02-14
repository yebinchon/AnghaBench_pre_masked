
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct a10_sramc_softc {int res; int bsh; int bst; } ;
typedef int device_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 struct a10_sramc_softc* VAR_3 ;
 int FUNC_0 (int ,int ,int*,int ) ;
 struct a10_sramc_softc* FUNC_1 (int ) ;
 int FUNC_2 (int ,char*) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ) ;

__attribute__((used)) static int
FUNC_5(device_t VAR_4)
{
 struct a10_sramc_softc *VAR_5 = FUNC_1(VAR_4);
 int VAR_6 = 0;

 VAR_5->res = FUNC_0(VAR_4, VAR_2, &VAR_6, VAR_1);
 if (!VAR_5->res) {
  FUNC_2(VAR_4, "could not allocate resource\n");
  return (VAR_0);
 }

 VAR_5->bst = FUNC_4(VAR_5->res);
 VAR_5->bsh = FUNC_3(VAR_5->res);

 VAR_3 = VAR_5;

 return (0);
}
