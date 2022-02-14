
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_16__ TYPE_4__ ;
typedef struct TYPE_15__ TYPE_3__ ;
typedef struct TYPE_14__ TYPE_2__ ;
typedef struct TYPE_13__ TYPE_1__ ;
typedef struct TYPE_12__ TYPE_10__ ;


struct isp_fc {int gdt; scalar_t__ ready; int path; TYPE_3__* isp; } ;
struct ac_device_changed {int target; scalar_t__ arrived; int port; int wwpn; } ;
struct ac_contract {scalar_t__ contract_data; int contract_number; } ;
struct TYPE_13__ {struct isp_fc* fc; } ;
struct TYPE_14__ {TYPE_1__ pc; } ;
struct TYPE_15__ {TYPE_2__ isp_osinfo; } ;
typedef TYPE_3__ ispsoftc_t ;
struct TYPE_16__ {scalar_t__ state; scalar_t__ gone_timer; int portid; int port_wwn; scalar_t__ is_initiator; scalar_t__ is_target; } ;
typedef TYPE_4__ fcportdb_t ;
struct TYPE_12__ {TYPE_4__* portdb; } ;


 int VAR_0 ;
 int VAR_1 ;
 TYPE_10__* FUNC_0 (TYPE_3__*,int) ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_1 (TYPE_3__*) ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_2 (TYPE_3__*) ;
 int VAR_7 ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *,int ,int ,struct isp_fc*) ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_5 (TYPE_3__*,TYPE_4__*,int,int) ;
 int FUNC_6 (TYPE_3__*,int ,char*,int,...) ;
 int VAR_10 ;
 scalar_t__ VAR_11 ;
 int FUNC_7 (int ,int ,struct ac_contract*) ;

__attribute__((used)) static void
FUNC_8(void *VAR_12, int VAR_13)
{
 struct isp_fc *VAR_14 = VAR_12;
 ispsoftc_t *VAR_15 = VAR_14->isp;
 int VAR_16 = VAR_14 - VAR_15->isp_osinfo.pc.fc;
 fcportdb_t *VAR_17;
 struct ac_contract VAR_18;
 struct ac_device_changed *VAR_19;
 int VAR_20, VAR_21 = 0;

 FUNC_1(VAR_15);
 FUNC_6(VAR_15, VAR_5, "Chan %d GDT timer expired", VAR_16);
 for (VAR_20 = 0; VAR_20 < VAR_7; VAR_20++) {
  VAR_17 = &FUNC_0(VAR_15, VAR_16)->portdb[VAR_20];

  if (VAR_17->state != VAR_3) {
   continue;
  }
  if (VAR_17->gone_timer != 0) {
   VAR_17->gone_timer -= 1;
   VAR_21++;
   continue;
  }
  FUNC_6(VAR_15, VAR_4, VAR_10, VAR_16, VAR_20, VAR_17->portid, "Gone Device Timeout");
  if (VAR_17->is_target) {
   VAR_17->is_target = 0;
   FUNC_5(VAR_15, VAR_17, VAR_16, VAR_20);
  }
  if (VAR_17->is_initiator) {
   VAR_17->is_initiator = 0;
   VAR_18.contract_number = VAR_1;
   VAR_19 = (struct ac_device_changed *) VAR_18.contract_data;
   VAR_19->wwpn = VAR_17->port_wwn;
   VAR_19->port = VAR_17->portid;
   VAR_19->target = VAR_20;
   VAR_19->arrived = 0;
   FUNC_7(VAR_0, VAR_14->path, &VAR_18);
  }
  VAR_17->state = VAR_2;
 }
 if (VAR_14->ready) {
  if (VAR_21) {
   FUNC_4(&VAR_14->gdt, VAR_8, VAR_9, VAR_14);
  } else {
   FUNC_3(&VAR_14->gdt);
   FUNC_6(VAR_15, VAR_6, "Chan %d Stopping Gone Device Timer @ %lu", VAR_16, (unsigned long) VAR_11);
  }
 }
 FUNC_2(VAR_15);
}
