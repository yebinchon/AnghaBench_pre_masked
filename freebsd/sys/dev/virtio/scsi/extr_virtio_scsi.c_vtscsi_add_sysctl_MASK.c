
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vtscsi_statistics {int dequeue_no_requests; int scsi_cmd_timeouts; } ;
struct vtscsi_softc {int vtscsi_debug; struct vtscsi_statistics vtscsi_stats; int vtscsi_dev; } ;
struct sysctl_oid_list {int dummy; } ;
struct sysctl_oid {int dummy; } ;
struct sysctl_ctx_list {int dummy; } ;
typedef int device_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct sysctl_ctx_list*,struct sysctl_oid_list*,int ,char*,int ,int *,int ,char*) ;
 int FUNC_1 (struct sysctl_ctx_list*,struct sysctl_oid_list*,int ,char*,int ,int *,char*) ;
 struct sysctl_oid_list* FUNC_2 (struct sysctl_oid*) ;
 struct sysctl_ctx_list* FUNC_3 (int ) ;
 struct sysctl_oid* FUNC_4 (int ) ;

__attribute__((used)) static void
FUNC_5(struct vtscsi_softc *VAR_3)
{
 device_t VAR_4;
 struct vtscsi_statistics *VAR_5;
        struct sysctl_ctx_list *VAR_6;
 struct sysctl_oid *VAR_7;
 struct sysctl_oid_list *VAR_8;

 VAR_4 = VAR_3->vtscsi_dev;
 VAR_5 = &VAR_3->vtscsi_stats;
 VAR_6 = FUNC_3(VAR_4);
 VAR_7 = FUNC_4(VAR_4);
 VAR_8 = FUNC_2(VAR_7);

 FUNC_0(VAR_6, VAR_8, VAR_2, "debug_level",
     VAR_1, &VAR_3->vtscsi_debug, 0,
     "Debug level");

 FUNC_1(VAR_6, VAR_8, VAR_2, "scsi_cmd_timeouts",
     VAR_0, &VAR_5->scsi_cmd_timeouts,
     "SCSI command timeouts");
 FUNC_1(VAR_6, VAR_8, VAR_2, "dequeue_no_requests",
     VAR_0, &VAR_5->dequeue_no_requests,
     "No available requests to dequeue");
}
