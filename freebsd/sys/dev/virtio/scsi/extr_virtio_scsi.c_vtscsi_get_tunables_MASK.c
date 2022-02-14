
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int tmpstr ;
struct vtscsi_softc {int vtscsi_debug; int vtscsi_dev; } ;


 int FUNC_0 (char*,int *) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (char*,int,char*,int) ;

__attribute__((used)) static void
FUNC_3(struct vtscsi_softc *VAR_0)
{
 char VAR_1[64];

 FUNC_0("hw.vtscsi.debug_level", &VAR_0->vtscsi_debug);

 FUNC_2(VAR_1, sizeof(VAR_1), "dev.vtscsi.%d.debug_level",
     FUNC_1(VAR_0->vtscsi_dev));
 FUNC_0(VAR_1, &VAR_0->vtscsi_debug);
}
