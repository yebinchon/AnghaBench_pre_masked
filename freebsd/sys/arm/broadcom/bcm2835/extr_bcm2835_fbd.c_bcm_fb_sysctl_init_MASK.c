
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sysctl_oid_list {int dummy; } ;
struct sysctl_oid {int dummy; } ;
struct sysctl_ctx_list {int dummy; } ;
struct bcmsc_softc {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct sysctl_ctx_list*,struct sysctl_oid_list*,int ,char*,int,struct bcmsc_softc*,int,int ,char*,char*) ;
 struct sysctl_oid_list* FUNC_1 (struct sysctl_oid*) ;
 int VAR_3 ;
 struct sysctl_ctx_list* FUNC_2 (int ) ;
 struct sysctl_oid* FUNC_3 (int ) ;

__attribute__((used)) static void
FUNC_4(struct bcmsc_softc *VAR_4)
{
 struct sysctl_ctx_list *VAR_5;
 struct sysctl_oid *VAR_6;
 struct sysctl_oid_list *VAR_7;




 VAR_5 = FUNC_2(VAR_4->dev);
 VAR_6 = FUNC_3(VAR_4->dev);
 VAR_7 = FUNC_1(VAR_6);
 FUNC_0(VAR_5, VAR_7, VAR_2, "resync",
     VAR_0 | VAR_1, VAR_4, sizeof(*VAR_4),
     VAR_3, "IU", "Set to resync framebuffer with VC");
}
