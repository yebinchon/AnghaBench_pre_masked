
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sysctl_oid {int dummy; } ;
struct sysctl_ctx_list {int dummy; } ;
struct mpt_softc {int failure_id; int role; int verbose; int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct sysctl_ctx_list*,int ,int ,char*,int ,int *,int,char*) ;
 int FUNC_1 (struct sysctl_ctx_list*,int ,int ,char*,int ,int *,int ,char*) ;
 int FUNC_2 (struct sysctl_oid*) ;
 struct sysctl_ctx_list* FUNC_3 (int ) ;
 struct sysctl_oid* FUNC_4 (int ) ;

__attribute__((used)) static void
FUNC_5(struct mpt_softc *VAR_3)
{
 struct sysctl_ctx_list *VAR_4 = FUNC_3(VAR_3->dev);
 struct sysctl_oid *VAR_5 = FUNC_4(VAR_3->dev);

 FUNC_1(VAR_4, FUNC_2(VAR_5), VAR_2,
         "debug", VAR_1, &VAR_3->verbose, 0,
         "Debugging/Verbose level");
 FUNC_1(VAR_4, FUNC_2(VAR_5), VAR_2,
         "role", VAR_0, &VAR_3->role, 0,
         "HBA role");





}
