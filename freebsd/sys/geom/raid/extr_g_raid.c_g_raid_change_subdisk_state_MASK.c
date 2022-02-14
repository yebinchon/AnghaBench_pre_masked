
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct g_raid_subdisk {int sd_state; scalar_t__ sd_disk; int sd_pos; TYPE_1__* sd_volume; int sd_softc; } ;
struct TYPE_2__ {int v_name; } ;


 int FUNC_0 (int ,int ,char*,int ,int ,char*,int ,int ) ;
 char* FUNC_1 (scalar_t__) ;
 int FUNC_2 (scalar_t__) ;
 int FUNC_3 (int) ;

void
FUNC_4(struct g_raid_subdisk *VAR_0, int VAR_1)
{

 FUNC_0(0, VAR_0->sd_softc,
     "Subdisk %s:%d-%s state changed from %s to %s.",
     VAR_0->sd_volume->v_name, VAR_0->sd_pos,
     VAR_0->sd_disk ? FUNC_1(VAR_0->sd_disk) : "[none]",
     FUNC_3(VAR_0->sd_state),
     FUNC_3(VAR_1));
 VAR_0->sd_state = VAR_1;
 if (VAR_0->sd_disk)
  FUNC_2(VAR_0->sd_disk);
}
