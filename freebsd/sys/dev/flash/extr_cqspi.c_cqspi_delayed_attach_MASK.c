
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct cqspi_softc {int config_intrhook; int dev; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int ) ;

__attribute__((used)) static void
FUNC_3(void *VAR_0)
{
 struct cqspi_softc *VAR_1;

 VAR_1 = VAR_0;

 FUNC_2(VAR_1->dev);
 FUNC_0(VAR_1->dev);

 FUNC_1(&VAR_1->config_intrhook);
}
