
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
struct iwm_softc {int sc_dev; } ;
struct iwm_host_cmd {int data; int len; int id; } ;


 int VAR_0 ;
 int FUNC_0 (int ,char*) ;
 scalar_t__ FUNC_1 (struct iwm_softc*,struct iwm_host_cmd*) ;

__attribute__((used)) static void
FUNC_2(struct iwm_softc *VAR_1, uint32_t VAR_2)
{
 struct iwm_host_cmd VAR_3 = {
  .id = VAR_0,
  .len = sizeof(uint32_t), 
  .data = VAR_2, 
 };

 if (FUNC_1(VAR_1, &VAR_3) != 0) {
  FUNC_0(VAR_1->sc_dev,
      "failed to change thermal tx backoff\n");
 }
}
