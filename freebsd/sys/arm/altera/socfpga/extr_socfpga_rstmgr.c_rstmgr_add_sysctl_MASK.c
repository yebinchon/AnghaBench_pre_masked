
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sysctl_oid_list {int dummy; } ;
struct sysctl_ctx_list {int dummy; } ;
struct rstmgr_softc {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (struct sysctl_ctx_list*,struct sysctl_oid_list*,int ,char*,int,struct rstmgr_softc*,int ,int ,char*,char*) ;
 struct sysctl_oid_list* FUNC_1 (int ) ;
 struct sysctl_ctx_list* FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 int VAR_6 ;

__attribute__((used)) static int
FUNC_4(struct rstmgr_softc *VAR_7)
{
 struct sysctl_oid_list *VAR_8;
 struct sysctl_ctx_list *VAR_9;

 VAR_9 = FUNC_2(VAR_7->dev);
 VAR_8 = FUNC_1(FUNC_3(VAR_7->dev));

 FUNC_0(VAR_9, VAR_8, VAR_2, "fpga2hps",
     VAR_1 | VAR_0, VAR_7, VAR_3,
     VAR_6, "I", "Enable fpga2hps bridge");
 FUNC_0(VAR_9, VAR_8, VAR_2, "lwhps2fpga",
     VAR_1 | VAR_0, VAR_7, VAR_5,
     VAR_6, "I", "Enable lwhps2fpga bridge");
 FUNC_0(VAR_9, VAR_8, VAR_2, "hps2fpga",
     VAR_1 | VAR_0, VAR_7, VAR_4,
     VAR_6, "I", "Enable hps2fpga bridge");

 return (0);
}
