
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct ciss_softc {int dummy; } ;
struct ciss_ldrive {TYPE_1__* cl_lstatus; } ;
struct TYPE_2__ {int status; int blocks_to_recover; int * drive_failure_map; int drive_rebuilding; } ;


 int FUNC_0 (struct ciss_softc*,int ) ;
 int VAR_0 ;
 int FUNC_1 (struct ciss_softc*,int ) ;
 int FUNC_2 (struct ciss_softc*,char*,int,int,int ) ;
 int FUNC_3 (char*,...) ;

__attribute__((used)) static void
FUNC_4(struct ciss_softc *VAR_1, struct ciss_ldrive *VAR_2)
{
    int VAR_3, VAR_4, VAR_5;

    if (VAR_2->cl_lstatus == ((void*)0)) {
 FUNC_3("does not exist\n");
 return;
    }


    switch(VAR_2->cl_lstatus->status) {
    case 132:
 FUNC_3("online\n");
 break;
    case 134:
 FUNC_3("in interim recovery mode\n");
 break;
    case 130:
 FUNC_3("ready to begin recovery\n");
 break;
    case 129:
 VAR_3 = FUNC_0(VAR_1, VAR_2->cl_lstatus->drive_rebuilding);
 VAR_4 = FUNC_0(VAR_1, VAR_2->cl_lstatus->drive_rebuilding);
 FUNC_3("being recovered, working on physical drive %d.%d, %u blocks remaining\n",
        VAR_3, VAR_4, VAR_2->cl_lstatus->blocks_to_recover);
 break;
    case 136:
 FUNC_3("being expanded, %u blocks remaining\n",
        VAR_2->cl_lstatus->blocks_to_recover);
 break;
    case 131:
 FUNC_3("queued for expansion\n");
 break;
    case 135:
 FUNC_3("queued for expansion\n");
 break;
    case 128:
 FUNC_3("wrong physical drive inserted\n");
 break;
    case 133:
 FUNC_3("missing a needed physical drive\n");
 break;
    case 137:
 FUNC_3("becoming ready\n");
 break;
    }


    for (VAR_5 = 0; VAR_5 < VAR_0 / 8; VAR_5++) {
 VAR_3 = FUNC_0(VAR_1, VAR_2->cl_lstatus->drive_failure_map[VAR_5]);
 VAR_4 = FUNC_1(VAR_1, VAR_2->cl_lstatus->drive_failure_map[VAR_5]);
 if (VAR_3 == -1)
     continue;
 FUNC_2(VAR_1, "physical drive %d:%d (%x) failed\n", VAR_3, VAR_4,
      VAR_2->cl_lstatus->drive_failure_map[VAR_5]);
    }
}
