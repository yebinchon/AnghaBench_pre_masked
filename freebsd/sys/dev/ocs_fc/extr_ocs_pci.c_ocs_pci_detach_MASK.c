
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ocs_softc {int ramlog; int hw_war_version; scalar_t__ config_tgt; scalar_t__ enable_tgt; } ;
typedef int device_t ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (int ,char*) ;
 int FUNC_2 (int ,int ) ;
 int FUNC_3 (struct ocs_softc*) ;
 int FUNC_4 (struct ocs_softc*) ;
 int FUNC_5 (struct ocs_softc*) ;
 int FUNC_6 (struct ocs_softc*,int ) ;
 int FUNC_7 (struct ocs_softc*) ;
 int FUNC_8 (struct ocs_softc*) ;

__attribute__((used)) static int
FUNC_9(device_t VAR_2)
{
 struct ocs_softc *VAR_3;

 VAR_3 = (struct ocs_softc *)FUNC_0(VAR_2);
 if (!VAR_3) {
  FUNC_1(VAR_2, "no driver context?!?\n");
  return -1;
 }

 if (VAR_3->config_tgt && VAR_3->enable_tgt) {
  FUNC_1(VAR_2, "can't detach with target mode enabled\n");
  return VAR_0;
 }

 FUNC_4(VAR_3);
 if (VAR_3->config_tgt)
  FUNC_8(VAR_3);


 FUNC_2(VAR_3->hw_war_version, VAR_1);

 FUNC_5(VAR_3);

 FUNC_3(VAR_3);

 FUNC_6(VAR_3, VAR_3->ramlog);

 FUNC_7(VAR_3);

 return 0;
}
