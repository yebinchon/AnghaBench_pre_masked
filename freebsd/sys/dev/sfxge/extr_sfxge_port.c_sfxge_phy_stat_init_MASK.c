
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef unsigned int uint64_t ;
struct sysctl_oid_list {int dummy; } ;
struct sysctl_ctx_list {int dummy; } ;
struct sfxge_softc {int enp; int stats_node; int dev; } ;
struct TYPE_2__ {unsigned int enc_phy_stat_mask; } ;


 int VAR_0 ;
 int VAR_1 ;
 unsigned int VAR_2 ;
 unsigned int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (struct sysctl_ctx_list*,struct sysctl_oid_list*,int ,char const*,int,struct sfxge_softc*,unsigned int,int ,char*,char*) ;
 struct sysctl_oid_list* FUNC_1 (int ) ;
 struct sysctl_ctx_list* FUNC_2 (int ) ;
 TYPE_1__* FUNC_3 (int ) ;
 char* FUNC_4 (int ,unsigned int) ;
 int VAR_5 ;

__attribute__((used)) static void
FUNC_5(struct sfxge_softc *VAR_6)
{
 struct sysctl_ctx_list *VAR_7 = FUNC_2(VAR_6->dev);
 struct sysctl_oid_list *VAR_8;
 unsigned int VAR_9;
 const char *VAR_10;
 uint64_t VAR_11 = FUNC_3(VAR_6->enp)->enc_phy_stat_mask;

 VAR_8 = FUNC_1(VAR_6->stats_node);


 for (VAR_9 = 0; VAR_9 < VAR_2; VAR_9++) {
  if (!(VAR_11 & ((uint64_t)1 << VAR_9)))
   continue;
  VAR_10 = FUNC_4(VAR_6->enp, VAR_9);
  FUNC_0(
   VAR_7, VAR_8,
   VAR_4, VAR_10, VAR_1|VAR_0,
   VAR_6, VAR_9, VAR_5,
   VAR_9 == VAR_3 ? "IX" : "IU",
   "");
 }
}
