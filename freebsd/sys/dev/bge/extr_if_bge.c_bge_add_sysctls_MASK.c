
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sysctl_oid_list {int dummy; } ;
struct sysctl_ctx_list {int dummy; } ;
struct bge_softc {int bge_forced_collapse; int bge_msi; int bge_forced_udpcsum; int bge_dev; } ;


 scalar_t__ FUNC_0 (struct bge_softc*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (struct sysctl_ctx_list*,struct sysctl_oid_list*,int ,char*,int ,int*,int ,char*) ;
 int FUNC_2 (struct sysctl_ctx_list*,struct sysctl_oid_list*,int ,char*,int,struct bge_softc*,int ,int ,char*,char*) ;
 struct sysctl_oid_list* FUNC_3 (int ) ;
 int FUNC_4 (struct bge_softc*,struct sysctl_ctx_list*,struct sysctl_oid_list*) ;
 int FUNC_5 (struct bge_softc*,struct sysctl_ctx_list*,struct sysctl_oid_list*) ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 struct sysctl_ctx_list* FUNC_6 (int ) ;
 int FUNC_7 (int ) ;
 int FUNC_8 (int ) ;

__attribute__((used)) static void
FUNC_9(struct bge_softc *VAR_9)
{
 struct sysctl_ctx_list *VAR_10;
 struct sysctl_oid_list *VAR_11;
 int VAR_12;

 VAR_10 = FUNC_6(VAR_9->bge_dev);
 VAR_11 = FUNC_3(FUNC_7(VAR_9->bge_dev));
 VAR_12 = FUNC_8(VAR_9->bge_dev);
 VAR_9->bge_forced_collapse = 0;
 FUNC_1(VAR_10, VAR_11, VAR_4, "forced_collapse",
     VAR_2, &VAR_9->bge_forced_collapse, 0,
     "Number of fragmented TX buffers of a frame allowed before "
     "forced collapsing");

 VAR_9->bge_msi = 1;
 FUNC_1(VAR_10, VAR_11, VAR_4, "msi",
     VAR_0, &VAR_9->bge_msi, 0, "Enable MSI");
 VAR_9->bge_forced_udpcsum = 0;
 FUNC_1(VAR_10, VAR_11, VAR_4, "forced_udpcsum",
     VAR_2, &VAR_9->bge_forced_udpcsum, 0,
     "Enable UDP checksum offloading even if controller can "
     "generate UDP checksum value 0");

 if (FUNC_0(VAR_9))
  FUNC_5(VAR_9, VAR_10, VAR_11);
 else
  FUNC_4(VAR_9, VAR_10, VAR_11);
}
