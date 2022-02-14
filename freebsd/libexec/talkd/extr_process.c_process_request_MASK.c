
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_20__ TYPE_4__ ;
typedef struct TYPE_19__ TYPE_3__ ;
typedef struct TYPE_18__ TYPE_2__ ;
typedef struct TYPE_17__ TYPE_1__ ;


struct TYPE_18__ {scalar_t__ sa_family; } ;
struct TYPE_17__ {scalar_t__ sa_family; } ;
struct TYPE_20__ {int type; scalar_t__ vers; char* l_name; void* id_num; TYPE_2__ addr; void* pid; TYPE_1__ ctl_addr; } ;
struct TYPE_19__ {int type; void* answer; TYPE_2__ addr; void* id_num; scalar_t__ vers; } ;
typedef TYPE_3__ CTL_RESPONSE ;
typedef TYPE_4__ CTL_MSG ;


 scalar_t__ VAR_0 ;

 void* VAR_1 ;
 void* VAR_2 ;
 void* VAR_3 ;

 void* VAR_4 ;

 int VAR_5 ;
 int VAR_6 ;

 void* VAR_7 ;
 void* VAR_8 ;
 scalar_t__ VAR_9 ;
 void* VAR_10 ;
 scalar_t__ VAR_11 ;
 void* FUNC_0 (void*) ;
 int FUNC_1 (TYPE_4__*,TYPE_3__*) ;
 TYPE_4__* FUNC_2 (TYPE_4__*) ;
 TYPE_4__* FUNC_3 (TYPE_4__*) ;
 void* FUNC_4 (void*) ;
 scalar_t__ FUNC_5 (scalar_t__) ;
 int FUNC_6 (TYPE_4__*,TYPE_3__*) ;
 int FUNC_7 (char) ;
 void* FUNC_8 (void*) ;
 void* FUNC_9 (scalar_t__) ;
 int FUNC_10 (char*,TYPE_4__*) ;
 int FUNC_11 (char*,TYPE_3__*) ;
 int FUNC_12 (int ,char*,...) ;

void
FUNC_13(CTL_MSG *VAR_12, CTL_RESPONSE *VAR_13)
{
 CTL_MSG *VAR_14;
 char *VAR_15;

 VAR_13->vers = VAR_9;
 VAR_13->type = VAR_12->type;
 VAR_13->id_num = FUNC_4(0);
 if (VAR_12->vers != VAR_9) {
  FUNC_12(VAR_6, "bad protocol version %d", VAR_12->vers);
  VAR_13->answer = VAR_3;
  return;
 }
 VAR_12->id_num = FUNC_8(VAR_12->id_num);
 VAR_12->addr.sa_family = FUNC_9(VAR_12->addr.sa_family);
 if (VAR_12->addr.sa_family != VAR_0) {
  FUNC_12(VAR_6, "bad address, family %d",
      VAR_12->addr.sa_family);
  VAR_13->answer = VAR_1;
  return;
 }
 VAR_12->ctl_addr.sa_family = FUNC_9(VAR_12->ctl_addr.sa_family);
 if (VAR_12->ctl_addr.sa_family != VAR_0) {
  FUNC_12(VAR_6, "bad control address, family %d",
      VAR_12->ctl_addr.sa_family);
  VAR_13->answer = VAR_2;
  return;
 }
 for (VAR_15 = VAR_12->l_name; *VAR_15; VAR_15++)
  if (!FUNC_7(*VAR_15)) {
   FUNC_12(VAR_5, "illegal user name. Aborting");
   VAR_13->answer = VAR_4;
   return;
  }
 VAR_12->pid = FUNC_8(VAR_12->pid);
 if (VAR_11)
  FUNC_10("process_request", VAR_12);
 switch (VAR_12->type) {

 case 131:
  FUNC_1(VAR_12, VAR_13);
  break;

 case 129:
  VAR_14 = FUNC_3(VAR_12);
  if (VAR_14 != (CTL_MSG *)0) {
   VAR_13->id_num = FUNC_4(VAR_14->id_num);
   VAR_13->answer = VAR_8;
  } else
   FUNC_6(VAR_12, VAR_13);
  break;

 case 128:
  VAR_14 = FUNC_2(VAR_12);
  if (VAR_14 != (CTL_MSG *)0) {
   VAR_13->id_num = FUNC_4(VAR_14->id_num);
   VAR_13->addr = VAR_14->addr;
   VAR_13->addr.sa_family = FUNC_5(VAR_14->addr.sa_family);
   VAR_13->answer = VAR_8;
  } else
   VAR_13->answer = VAR_7;
  break;

 case 130:
  VAR_13->answer = FUNC_0(VAR_12->id_num);
  break;

 default:
  VAR_13->answer = VAR_10;
  break;
 }
 if (VAR_11)
  FUNC_11("process_request", VAR_13);
}
