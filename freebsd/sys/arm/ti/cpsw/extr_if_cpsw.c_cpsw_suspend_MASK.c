
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct cpswp_softc {int dummy; } ;
struct cpsw_softc {int active_slave; TYPE_1__* port; int dualemac; } ;
typedef int device_t ;
struct TYPE_2__ {int dev; } ;


 int FUNC_0 (struct cpsw_softc*,char*) ;
 int VAR_0 ;
 int FUNC_1 (struct cpswp_softc*) ;
 int FUNC_2 (struct cpswp_softc*) ;
 int FUNC_3 (struct cpswp_softc*) ;
 void* FUNC_4 (int ) ;

__attribute__((used)) static int
FUNC_5(device_t VAR_1)
{
 struct cpsw_softc *VAR_2;
 struct cpswp_softc *VAR_3;
 int VAR_4;

 VAR_2 = FUNC_4(VAR_1);
 FUNC_0(VAR_2, (""));
 for (VAR_4 = 0; VAR_4 < VAR_0; VAR_4++) {
  if (!VAR_2->dualemac && VAR_4 != VAR_2->active_slave)
   continue;
  VAR_3 = FUNC_4(VAR_2->port[VAR_4].dev);
  FUNC_1(VAR_3);
  FUNC_3(VAR_3);
  FUNC_2(VAR_3);
 }

 return (0);
}
