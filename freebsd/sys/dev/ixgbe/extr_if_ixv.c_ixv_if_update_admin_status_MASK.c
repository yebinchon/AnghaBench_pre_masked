
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {scalar_t__ get_link_status; } ;
struct TYPE_5__ {scalar_t__ adapter_stopped; TYPE_1__ mac; } ;
struct adapter {int link_speed; scalar_t__ link_active; scalar_t__ link_up; TYPE_2__ hw; } ;
typedef scalar_t__ s32 ;
typedef int if_ctx_t ;
typedef int device_t ;
struct TYPE_6__ {int (* if_init ) (int ) ;} ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int) ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 int FUNC_1 (int ,char*,...) ;
 int FUNC_2 (int ) ;
 TYPE_3__* FUNC_3 (int ) ;
 struct adapter* FUNC_4 (int ) ;
 int FUNC_5 (int ,int ,int ) ;
 scalar_t__ FUNC_6 (TYPE_2__*,int*,scalar_t__*,scalar_t__) ;
 int FUNC_7 (struct adapter*) ;
 int FUNC_8 (int ) ;

__attribute__((used)) static void
FUNC_9(if_ctx_t VAR_6)
{
 struct adapter *VAR_7 = FUNC_4(VAR_6);
 device_t VAR_8 = FUNC_2(VAR_6);
 s32 VAR_9;

 VAR_7->hw.mac.get_link_status = VAR_4;

 VAR_9 = FUNC_6(&VAR_7->hw, &VAR_7->link_speed,
     &VAR_7->link_up, VAR_0);

 if (VAR_9 != VAR_1 && VAR_7->hw.adapter_stopped == VAR_0) {


  FUNC_3(VAR_6)->if_init(VAR_6);
 }

 if (VAR_7->link_up) {
  if (VAR_7->link_active == VAR_0) {
   if (VAR_5)
    FUNC_1(VAR_8, "Link is up %d Gbps %s \n",
        ((VAR_7->link_speed == 128) ? 10 : 1),
        "Full Duplex");
   VAR_7->link_active = VAR_4;
   FUNC_5(VAR_6, VAR_3,
       FUNC_0(10));
  }
 } else {
  if (VAR_7->link_active == VAR_4) {
   if (VAR_5)
    FUNC_1(VAR_8, "Link is Down\n");
   FUNC_5(VAR_6, VAR_2, 0);
   VAR_7->link_active = VAR_0;
  }
 }


 FUNC_7(VAR_7);
}
