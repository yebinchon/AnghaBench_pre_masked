
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct sysctl_oid_list {int dummy; } ;
struct sysctl_oid {int dummy; } ;
struct sysctl_ctx_list {int dummy; } ;
struct TYPE_2__ {int resets; } ;
struct cpsw_softc {TYPE_1__ watchdog; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct sysctl_ctx_list*,struct sysctl_oid_list*,int ,char*,int ,int *,int ,char*) ;
 struct sysctl_oid_list* FUNC_1 (struct sysctl_oid*) ;

__attribute__((used)) static void
FUNC_2(struct sysctl_ctx_list *VAR_2, struct sysctl_oid *VAR_3,
 struct cpsw_softc *VAR_4)
{
 struct sysctl_oid_list *VAR_5;

 VAR_5 = FUNC_1(VAR_3);
 FUNC_0(VAR_2, VAR_5, VAR_1, "resets",
     VAR_0, &VAR_4->watchdog.resets, 0,
     "Total number of watchdog resets");
}
