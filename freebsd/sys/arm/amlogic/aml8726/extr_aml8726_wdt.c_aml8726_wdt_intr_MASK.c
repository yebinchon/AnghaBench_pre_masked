
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct aml8726_wdt_softc {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct aml8726_wdt_softc*) ;
 int FUNC_1 (struct aml8726_wdt_softc*) ;
 int FUNC_2 (struct aml8726_wdt_softc*,int ) ;
 int FUNC_3 (struct aml8726_wdt_softc*,int ) ;
 int FUNC_4 (struct aml8726_wdt_softc*,int ,int) ;
 int VAR_3 ;
 int FUNC_5 (int ,char*) ;

__attribute__((used)) static int
FUNC_6(void *VAR_4)
{
 struct aml8726_wdt_softc *VAR_5 = (struct aml8726_wdt_softc *)VAR_4;
 FUNC_0(VAR_5);

 FUNC_4(VAR_5, VAR_2,
     (FUNC_3(VAR_5, VAR_2) & ~(VAR_1 |
     VAR_0)));

 FUNC_2(VAR_5, VAR_2);

 FUNC_1(VAR_5);

 FUNC_5(VAR_5->dev, "timeout expired\n");

 return (VAR_3);
}
