
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_4__ ;
typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


typedef enum vc_suspend_status { ____Placeholder_vc_suspend_status } vc_suspend_status ;
typedef enum vc_resume_status { ____Placeholder_vc_resume_status } vc_resume_status ;
struct TYPE_10__ {int unused_service; TYPE_3__** services; } ;
typedef TYPE_2__ VCHIQ_STATE_T ;
struct TYPE_9__ {int fourcc; } ;
struct TYPE_11__ {int service_use_count; scalar_t__ srvstate; int client_id; TYPE_1__ base; } ;
typedef TYPE_3__ VCHIQ_SERVICE_T ;
struct TYPE_12__ {int vc_suspend_state; int vc_resume_state; int peer_use_count; int videocore_use_count; int susp_res_lock; } ;
typedef TYPE_4__ VCHIQ_ARM_STATE_T ;


 int FUNC_0 (int) ;
 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int* VAR_3 ;
 int* VAR_4 ;
 int FUNC_3 (TYPE_2__*) ;
 int FUNC_4 (int ,char*,int,...) ;
 TYPE_4__* FUNC_5 (TYPE_2__*) ;
 int VAR_5 ;

void
FUNC_6(VCHIQ_STATE_T *VAR_6)
{
 VCHIQ_ARM_STATE_T *VAR_7 = FUNC_5(VAR_6);
 int VAR_8, VAR_9 = 0;

 static const int VAR_10 = 64;


 int VAR_11 = 0;
 static const char *VAR_12 = "<-- preventing suspend";

 enum vc_suspend_status VAR_13;
 enum vc_resume_status VAR_14;
 int VAR_15;
 int VAR_16;
 int VAR_17;
 struct service_data_struct {
  int fourcc;
  int clientid;
  int use_count;
 } VAR_18[VAR_10];

 if (!VAR_7)
  return;

 FUNC_1(&VAR_7->susp_res_lock);
 VAR_13 = VAR_7->vc_suspend_state;
 VAR_14 = VAR_7->vc_resume_state;
 VAR_15 = VAR_7->peer_use_count;
 VAR_16 = VAR_7->videocore_use_count;
 VAR_17 = VAR_6->unused_service;
 if (VAR_17 > VAR_10)
  VAR_11 = 1;

 for (VAR_8 = 0; (VAR_8 < VAR_17) && (VAR_9 < VAR_10); VAR_8++) {
  VCHIQ_SERVICE_T *VAR_19 = VAR_6->services[VAR_8];
  if (!VAR_19)
   continue;

  if (VAR_11 && !VAR_19->service_use_count)
   continue;

  if (VAR_19->srvstate != VAR_0) {
   VAR_18[VAR_9].fourcc = VAR_19->base.fourcc;
   VAR_18[VAR_9].clientid = VAR_19->client_id;
   VAR_18[VAR_9++].use_count = VAR_19->
       service_use_count;
  }
 }

 FUNC_2(&VAR_7->susp_res_lock);

 FUNC_4(VAR_5,
  "-- Videcore suspend state: %s --",
  VAR_4[VAR_13 + VAR_2]);
 FUNC_4(VAR_5,
  "-- Videcore resume state: %s --",
  VAR_3[VAR_14 + VAR_1]);

 if (VAR_11)
  FUNC_4(VAR_5, "Too many active "
   "services (%d).  Only dumping up to first %d services "
   "with non-zero use-count", VAR_17,
   VAR_10);

 for (VAR_8 = 0; VAR_8 < VAR_9; VAR_8++) {
  FUNC_4(VAR_5,
   "----- %c%c%c%c:%d service count %d %s",
   FUNC_0(VAR_18[VAR_8].fourcc),
   VAR_18[VAR_8].clientid,
   VAR_18[VAR_8].use_count,
   VAR_18[VAR_8].use_count ? VAR_12 : "");
 }
 FUNC_4(VAR_5,
  "----- VCHIQ use count count %d", VAR_15);
 FUNC_4(VAR_5,
  "--- Overall vchiq instance use count %d", VAR_16);

 FUNC_3(VAR_6);
}
