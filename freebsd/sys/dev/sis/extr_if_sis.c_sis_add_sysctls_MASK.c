
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sysctl_oid_list {int dummy; } ;
struct sysctl_ctx_list {int dummy; } ;
struct sis_softc {scalar_t__ sis_manual_pad; int sis_dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct sysctl_ctx_list*,struct sysctl_oid_list*,int ,char*,int ,scalar_t__*,int ,char*) ;
 struct sysctl_oid_list* FUNC_1 (int ) ;
 struct sysctl_ctx_list* FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ) ;

__attribute__((used)) static void
FUNC_5(struct sis_softc *VAR_2)
{
 struct sysctl_ctx_list *VAR_3;
 struct sysctl_oid_list *VAR_4;
 int VAR_5;

 VAR_3 = FUNC_2(VAR_2->sis_dev);
 VAR_4 = FUNC_1(FUNC_3(VAR_2->sis_dev));

 VAR_5 = FUNC_4(VAR_2->sis_dev);







 VAR_2->sis_manual_pad = 0;
 FUNC_0(VAR_3, VAR_4, VAR_1, "manual_pad",
     VAR_0, &VAR_2->sis_manual_pad, 0, "Manually pad short frames");
}
