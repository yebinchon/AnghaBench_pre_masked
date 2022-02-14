
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct iwm_softc {int sc_dev; } ;
struct iwm_mvm_rm_sta_cmd {int sta_id; } ;
typedef int rm_sta_cmd ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,char*,int ) ;
 int FUNC_1 (struct iwm_softc*,int ,int ,int,struct iwm_mvm_rm_sta_cmd*) ;

__attribute__((used)) static int
FUNC_2(struct iwm_softc *VAR_2)
{
 struct iwm_mvm_rm_sta_cmd VAR_3 = {
  .sta_id = VAR_1,
 };
 int VAR_4;

 VAR_4 = FUNC_1(VAR_2, VAR_0, 0,
       sizeof(VAR_3), &VAR_3);
 if (VAR_4) {
  FUNC_0(VAR_2->sc_dev,
      "Failed to remove station. Id=%d\n", VAR_1);
  return VAR_4;
 }

 return 0;
}
