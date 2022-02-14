
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sysctl_oid_list {int dummy; } ;
struct sysctl_oid {int dummy; } ;
struct sysctl_ctx_list {int dummy; } ;
struct cam_iosched_softc {int max_lat; int load; int total_ticks; int quanta; int read_bias; int trim_stats; int write_stats; int read_stats; struct sysctl_ctx_list sysctl_ctx; struct sysctl_oid* sysctl_tree; int trim_goal; int sort_io_queue; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (struct sysctl_ctx_list*,struct sysctl_oid_list*,int ,char*,int,int *,int,char*) ;
 struct sysctl_oid* FUNC_1 (struct sysctl_ctx_list*,struct sysctl_oid_list*,int ,char*,int,int ,char*) ;
 int FUNC_2 (struct sysctl_ctx_list*,struct sysctl_oid_list*,int ,char*,int,int *,int ,int ,char*,char*) ;
 int FUNC_3 (struct sysctl_ctx_list*,struct sysctl_oid_list*,int ,char*,int,int *,int ,char*) ;
 struct sysctl_oid_list* FUNC_4 (struct sysctl_oid*) ;
 int FUNC_5 (struct cam_iosched_softc*) ;
 int FUNC_6 (struct cam_iosched_softc*,int *,char*) ;
 int VAR_5 ;
 int VAR_6 ;

void FUNC_7(struct cam_iosched_softc *VAR_7,
    struct sysctl_ctx_list *VAR_8, struct sysctl_oid *VAR_9)
{
 struct sysctl_oid_list *VAR_10;

 VAR_10 = FUNC_4(VAR_9);
 FUNC_0(VAR_8, VAR_10,
  VAR_4, "sort_io_queue", VAR_2 | VAR_0,
  &VAR_7->sort_io_queue, 0,
  "Sort IO queue to try and optimise disk access patterns");
 FUNC_0(VAR_8, VAR_10,
     VAR_4, "trim_goal", VAR_2,
     &VAR_7->trim_goal, 0,
     "Number of trims to try to accumulate before sending to hardware");
 FUNC_0(VAR_8, VAR_10,
     VAR_4, "trim_ticks", VAR_2,
     &VAR_7->trim_goal, 0,
     "IO Schedul qaunta to hold back trims for when accumulating");
}
