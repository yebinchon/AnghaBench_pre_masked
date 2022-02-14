
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sysctl_oid_list {int dummy; } ;
struct sysctl_ctx_list {int dummy; } ;
struct amd_ntb_softc {int device; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct sysctl_ctx_list*,struct sysctl_oid_list*,int ,char*,int,struct amd_ntb_softc*,int ,int ,char*,char*) ;
 struct sysctl_oid_list* FUNC_1 (int ) ;
 int VAR_4 ;
 struct sysctl_ctx_list* FUNC_2 (int ) ;
 int FUNC_3 (int ) ;

__attribute__((used)) static void
FUNC_4(struct amd_ntb_softc *VAR_5)
{
 struct sysctl_oid_list *VAR_6;
 struct sysctl_ctx_list *VAR_7;

 VAR_7 = FUNC_2(VAR_5->device);
 VAR_6 = FUNC_1(FUNC_3(VAR_5->device));

 FUNC_0(VAR_7, VAR_6, VAR_3, "info",
     VAR_2 | VAR_1 | VAR_0, VAR_5, 0,
     VAR_4, "A", "AMD NTB HW Information");
}
