
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ uint32_t ;
struct iwm_softc {int dummy; } ;
struct iwm_host_cmd {int flags; int data; int len; int id; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct iwm_softc*,int ,char*,scalar_t__) ;
 int VAR_4 ;
 int FUNC_1 (struct iwm_softc*,struct iwm_host_cmd*,scalar_t__*) ;

__attribute__((used)) static int
FUNC_2(struct iwm_softc *VAR_5)
{
 int VAR_6;
 struct iwm_host_cmd VAR_7 = {
  .id = VAR_4,
  .len = 0, 
  .data = ((void*)0), 
  .flags = VAR_2,
 };
 uint32_t VAR_8;

 VAR_6 = FUNC_1(VAR_5, &VAR_7, &VAR_8);
 if (VAR_6)
  return VAR_6;

 if (VAR_8 != VAR_1) {







  FUNC_0(VAR_5, VAR_3,
      "SCAN OFFLOAD ABORT ret %d.\n", VAR_8);
  VAR_6 = VAR_0;
 }

 return VAR_6;
}
