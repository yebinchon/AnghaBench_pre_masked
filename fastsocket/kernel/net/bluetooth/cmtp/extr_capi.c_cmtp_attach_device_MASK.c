
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {char* driver_name; int cnr; int ctr_read_proc; int procinfo; int send_message; int release_appl; int register_appl; int reset_ctr; int load_firmware; int name; struct cmtp_session* driverdata; int owner; } ;
struct cmtp_session {int ncontroller; int num; TYPE_1__ ctrl; int name; int wait; } ;


 int FUNC_0 (char*,struct cmtp_session*,...) ;
 int FUNC_1 (char*) ;
 int FUNC_2 (char*,...) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 scalar_t__ FUNC_3 (TYPE_1__*) ;
 int FUNC_4 (unsigned char*,int ,int) ;
 int VAR_11 ;
 int VAR_12 ;
 int FUNC_5 (struct cmtp_session*) ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int FUNC_6 (struct cmtp_session*,int ,int,int ,int ,unsigned char*,int) ;
 int VAR_17 ;
 int FUNC_7 (int ,int ) ;
 long FUNC_8 (int ,int,int ) ;

int FUNC_9(struct cmtp_session *VAR_18)
{
 unsigned char VAR_19[4];
 long VAR_20;

 FUNC_0("session %p", VAR_18);

 FUNC_4(VAR_19, 0, 0);

 FUNC_6(VAR_18, VAR_4, 0xffff, VAR_5,
    VAR_1, VAR_19, 4);

 VAR_20 = FUNC_8(VAR_18->wait,
   VAR_18->ncontroller, VAR_6);

 FUNC_2("Found %d CAPI controller(s) on device %s", VAR_18->ncontroller, VAR_18->name);

 if (!VAR_20)
  return -VAR_9;

 if (!VAR_18->ncontroller)
  return -VAR_8;

 if (VAR_18->ncontroller > 1)
  FUNC_2("Setting up only CAPI controller 1");

 VAR_18->ctrl.owner = VAR_10;
 VAR_18->ctrl.driverdata = VAR_18;
 FUNC_7(VAR_18->ctrl.name, VAR_18->name);

 VAR_18->ctrl.driver_name = "cmtp";
 VAR_18->ctrl.load_firmware = VAR_12;
 VAR_18->ctrl.reset_ctr = VAR_16;
 VAR_18->ctrl.register_appl = VAR_14;
 VAR_18->ctrl.release_appl = VAR_15;
 VAR_18->ctrl.send_message = VAR_17;

 VAR_18->ctrl.procinfo = VAR_13;
 VAR_18->ctrl.ctr_read_proc = VAR_11;

 if (FUNC_3(&VAR_18->ctrl) < 0) {
  FUNC_1("Can't attach new controller");
  return -VAR_7;
 }

 VAR_18->num = VAR_18->ctrl.cnr;

 FUNC_0("session %p num %d", VAR_18, VAR_18->num);

 FUNC_4(VAR_19, 0, 1);

 FUNC_6(VAR_18, VAR_4, 0xffff, FUNC_5(VAR_18),
    VAR_0, VAR_19, 4);

 FUNC_6(VAR_18, VAR_4, 0xffff, FUNC_5(VAR_18),
    VAR_3, VAR_19, 4);

 FUNC_6(VAR_18, VAR_4, 0xffff, FUNC_5(VAR_18),
    VAR_2, VAR_19, 4);

 FUNC_6(VAR_18, VAR_4, 0xffff, FUNC_5(VAR_18),
    VAR_1, VAR_19, 4);

 return 0;
}
