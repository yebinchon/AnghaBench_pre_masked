
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__ id; scalar_t__ creatorid; } ;
struct pfioc_state_kill {int psk_killed; TYPE_1__ psk_pfcmp; } ;
typedef int psk ;


 int VAR_0 ;
 int FUNC_0 (scalar_t__) ;
 int VAR_1 ;
 int FUNC_1 (int,char*) ;
 int FUNC_2 (int ,char*,int) ;
 scalar_t__ FUNC_3 (scalar_t__) ;
 scalar_t__ FUNC_4 (int,int ,struct pfioc_state_kill*) ;
 int FUNC_5 (struct pfioc_state_kill*,int ,int) ;
 int FUNC_6 (int ,char*,scalar_t__*,...) ;
 int * VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ FUNC_7 (int ) ;
 int FUNC_8 () ;
 int FUNC_9 (char*) ;

int
FUNC_10(int VAR_5, const char *VAR_6, int VAR_7)
{
 struct pfioc_state_kill VAR_8;

 if (VAR_3 != 2 || (FUNC_7(VAR_2[1]) == 0)) {
  FUNC_9("no id specified");
  FUNC_8();
 }

 FUNC_5(&VAR_8, 0, sizeof(VAR_8));
 if ((FUNC_6(VAR_2[1], "%jx/%x",
     &VAR_8.psk_pfcmp.id, &VAR_8.psk_pfcmp.creatorid)) == 2)
  FUNC_0(VAR_8.psk_pfcmp.creatorid);
 else if ((FUNC_6(VAR_2[1], "%jx", &VAR_8.psk_pfcmp.id)) == 1) {
  VAR_8.psk_pfcmp.creatorid = 0;
 } else {
  FUNC_9("wrong id format specified");
  FUNC_8();
 }
 if (VAR_8.psk_pfcmp.id == 0) {
  FUNC_9("cannot kill id 0");
  FUNC_8();
 }

 VAR_8.psk_pfcmp.id = FUNC_3(VAR_8.psk_pfcmp.id);
 if (FUNC_4(VAR_5, VAR_0, &VAR_8))
  FUNC_1(1, "DIOCKILLSTATES");

 if ((VAR_7 & VAR_1) == 0)
  FUNC_2(VAR_4, "killed %d states\n", VAR_8.psk_killed);

 return (0);
}
