
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct aml8726_clkmsr_softc {int dev; } ;
typedef int ssize_t ;
typedef int prop ;
typedef int phandle_t ;
typedef scalar_t__ pcell_t ;
typedef int freq ;


 int FUNC_0 (int ,char*,scalar_t__*,int) ;
 int FUNC_1 (scalar_t__) ;
 int FUNC_2 (int ,char*,void*,int) ;
 int FUNC_3 (int) ;
 int FUNC_4 (int ) ;

__attribute__((used)) static void
FUNC_5(struct aml8726_clkmsr_softc *VAR_0, int VAR_1)
{
 pcell_t VAR_2;
 ssize_t VAR_3;
 phandle_t VAR_4;
 phandle_t VAR_5;

 VAR_5 = FUNC_4(VAR_0->dev);

 VAR_3 = FUNC_0(VAR_5, "clocks", &VAR_2, sizeof(VAR_2));
 if ((VAR_3 / sizeof(VAR_2)) != 1 || VAR_2 == 0 ||
     (VAR_4 = FUNC_1(VAR_2)) == 0)
  return;

 VAR_3 = FUNC_0(VAR_4, "clock-frequency", &VAR_2, sizeof(VAR_2));
 if ((VAR_3 / sizeof(VAR_2)) != 1 || VAR_2 != 0)
  return;

 VAR_1 = FUNC_3(VAR_1);

 FUNC_2(VAR_4, "clock-frequency", (void *)&VAR_1, sizeof(VAR_1));
}
