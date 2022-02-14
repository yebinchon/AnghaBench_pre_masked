
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_8__ {int task_status; } ;
struct TYPE_7__ {int flags; int nexus; } ;
union ctl_io {TYPE_4__ taskio; TYPE_3__ io_hdr; } ;
struct TYPE_6__ {int * serializing_sc; int * original_sc; int msg_type; int nexus; } ;
struct TYPE_5__ {int task_action; } ;
union ctl_ha_msg {TYPE_2__ hdr; TYPE_1__ task; } ;
typedef int uint32_t ;
struct ctl_softc {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 struct ctl_softc* FUNC_0 (union ctl_io*) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int ,union ctl_ha_msg*,int,int ) ;
 int FUNC_3 (struct ctl_softc*,int ,int ) ;

__attribute__((used)) static int
FUNC_4(union ctl_io *VAR_7)
{
 struct ctl_softc *VAR_8 = FUNC_0(VAR_7);
 uint32_t VAR_9;

 if (!(VAR_7->io_hdr.flags & VAR_0)) {
  union ctl_ha_msg VAR_10;

  VAR_10.hdr.nexus = VAR_7->io_hdr.nexus;
  VAR_10.task.task_action = VAR_4;
  VAR_10.hdr.msg_type = VAR_2;
  VAR_10.hdr.original_sc = ((void*)0);
  VAR_10.hdr.serializing_sc = ((void*)0);
  FUNC_2(VAR_1, &VAR_10,
      sizeof(VAR_10.task), VAR_6);
 }

 VAR_9 = FUNC_1(&VAR_7->io_hdr.nexus);
 FUNC_3(VAR_8, VAR_9, VAR_5);
 VAR_7->taskio.task_status = VAR_3;
 return (0);
}
