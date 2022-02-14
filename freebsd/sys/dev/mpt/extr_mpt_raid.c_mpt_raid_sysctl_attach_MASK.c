
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sysctl_oid {int dummy; } ;
struct sysctl_ctx_list {int dummy; } ;
struct mpt_softc {int raid_nonopt_volumes; int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (struct sysctl_ctx_list*,int ,int ,char*,int,struct mpt_softc*,int ,int ,char*,char*) ;
 int FUNC_1 (struct sysctl_ctx_list*,int ,int ,char*,int ,int *,int ,char*) ;
 int FUNC_2 (struct sysctl_oid*) ;
 struct sysctl_ctx_list* FUNC_3 (int ) ;
 struct sysctl_oid* FUNC_4 (int ) ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;

__attribute__((used)) static void
FUNC_5(struct mpt_softc *VAR_8)
{
 struct sysctl_ctx_list *VAR_9 = FUNC_3(VAR_8->dev);
 struct sysctl_oid *VAR_10 = FUNC_4(VAR_8->dev);

 FUNC_0(VAR_9, FUNC_2(VAR_10), VAR_4,
   "vol_member_wce", VAR_3 | VAR_1, VAR_8, 0,
   VAR_5, "A",
   "volume member WCE(On,Off,On-During-Rebuild,NC)");

 FUNC_0(VAR_9, FUNC_2(VAR_10), VAR_4,
   "vol_queue_depth", VAR_2 | VAR_1, VAR_8, 0,
   VAR_6, "I",
   "default volume queue depth");

 FUNC_0(VAR_9, FUNC_2(VAR_10), VAR_4,
   "vol_resync_rate", VAR_2 | VAR_1, VAR_8, 0,
   VAR_7, "I",
   "volume resync priority (0 == NC, 1 - 255)");
 FUNC_1(VAR_9, FUNC_2(VAR_10), VAR_4,
   "nonoptimal_volumes", VAR_0,
   &VAR_8->raid_nonopt_volumes, 0,
   "number of nonoptimal volumes");
}
