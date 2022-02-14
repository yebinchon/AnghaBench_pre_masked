
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
typedef scalar_t__ uint64_t ;
typedef int uint32_t ;
struct nv {int dummy; } ;
struct hast_resource {int hr_extentsize; int hr_ctrl; int hr_role; int (* output_status_aux ) (struct nv*) ;scalar_t__ hr_stat_activemap_flush_error; scalar_t__ hr_stat_flush_error; scalar_t__ hr_stat_delete_error; scalar_t__ hr_stat_activemap_write_error; scalar_t__ hr_stat_write_error; scalar_t__ hr_stat_read_error; scalar_t__ hr_stat_activemap_update; scalar_t__ hr_stat_flush; scalar_t__ hr_stat_delete; scalar_t__ hr_stat_write; scalar_t__ hr_stat_read; int hr_amp; int hr_keepdirty; int * hr_remoteout; int * hr_remotein; } ;




 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int) ;
 int VAR_3 ;
 int FUNC_1 (int ) ;
 int FUNC_2 () ;
 int FUNC_3 (int ,struct nv**) ;
 int FUNC_4 (int *,int ,struct nv*,int *,int ) ;
 int FUNC_5 (int ,int ) ;
 int FUNC_6 (struct nv*,int ,char*) ;
 int FUNC_7 (struct nv*,char*,char*) ;
 int FUNC_8 (struct nv*,int ,char*) ;
 int FUNC_9 (struct nv*,scalar_t__,char*) ;
 struct nv* FUNC_10 () ;
 scalar_t__ FUNC_11 (struct nv*) ;
 int FUNC_12 (struct nv*) ;
 int FUNC_13 (struct nv*,char*) ;
 int FUNC_14 (int ,char*) ;
 int FUNC_15 (char*) ;
 int FUNC_16 (struct hast_resource*,struct nv*) ;
 int FUNC_17 (int *) ;
 scalar_t__ VAR_4 ;
 int FUNC_18 (struct nv*) ;

void *
FUNC_19(void *VAR_5)
{
 struct hast_resource *VAR_6 = VAR_5;
 struct nv *VAR_7, *VAR_8;
 uint8_t VAR_9;

 for (;;) {
  if (FUNC_3(VAR_6->hr_ctrl, &VAR_7) == -1) {
   if (VAR_4)
    FUNC_17(((void*)0));
   FUNC_14(VAR_2,
       "Unable to receive control message");
   FUNC_5(FUNC_2(), VAR_3);
   FUNC_17(((void*)0));
  }
  VAR_9 = FUNC_13(VAR_7, "cmd");
  if (VAR_9 == 0) {
   FUNC_15("Control message is missing 'cmd' field.");
   FUNC_12(VAR_7);
   continue;
  }
  VAR_8 = FUNC_10();
  switch (VAR_9) {
  case 128:
   if (VAR_6->hr_remotein != ((void*)0) &&
       VAR_6->hr_remoteout != ((void*)0)) {
    FUNC_7(VAR_8, "complete", "status");
   } else {
    FUNC_7(VAR_8, "degraded", "status");
   }
   FUNC_8(VAR_8, (uint32_t)VAR_6->hr_extentsize,
       "extentsize");
   if (VAR_6->hr_role == VAR_1) {
    FUNC_8(VAR_8,
        (uint32_t)VAR_6->hr_keepdirty, "keepdirty");
    FUNC_9(VAR_8,
        (uint64_t)(FUNC_1(VAR_6->hr_amp) *
        VAR_6->hr_extentsize), "dirty");
   } else {
    FUNC_8(VAR_8, (uint32_t)0, "keepdirty");
    FUNC_9(VAR_8, (uint64_t)0, "dirty");
   }
   FUNC_9(VAR_8, VAR_6->hr_stat_read, "stat_read");
   FUNC_9(VAR_8, VAR_6->hr_stat_write, "stat_write");
   FUNC_9(VAR_8, VAR_6->hr_stat_delete,
       "stat_delete");
   FUNC_9(VAR_8, VAR_6->hr_stat_flush, "stat_flush");
   FUNC_9(VAR_8, VAR_6->hr_stat_activemap_update,
       "stat_activemap_update");
   FUNC_9(VAR_8, VAR_6->hr_stat_read_error,
       "stat_read_error");
   FUNC_9(VAR_8, VAR_6->hr_stat_write_error +
       VAR_6->hr_stat_activemap_write_error,
       "stat_write_error");
   FUNC_9(VAR_8, VAR_6->hr_stat_delete_error,
       "stat_delete_error");
   FUNC_9(VAR_8, VAR_6->hr_stat_flush_error +
       VAR_6->hr_stat_activemap_flush_error,
       "stat_flush_error");
   VAR_6->output_status_aux(VAR_8);
   FUNC_6(VAR_8, 0, "error");
   break;
  case 129:





   FUNC_0(VAR_6->hr_role == VAR_1);
   FUNC_16(VAR_6, VAR_7);
   FUNC_6(VAR_8, 0, "error");
   break;
  default:
   FUNC_6(VAR_8, VAR_0, "error");
   break;
  }
  FUNC_12(VAR_7);
  if (FUNC_11(VAR_8) != 0) {
   FUNC_15("Unable to create answer on control message.");
   FUNC_12(VAR_8);
   continue;
  }
  if (FUNC_4(((void*)0), VAR_6->hr_ctrl, VAR_8, ((void*)0), 0) == -1) {
   FUNC_14(VAR_2,
       "Unable to send reply to control message");
  }
  FUNC_12(VAR_8);
 }

 return (((void*)0));
}
