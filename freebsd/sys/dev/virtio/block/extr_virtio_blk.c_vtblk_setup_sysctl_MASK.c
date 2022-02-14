
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vtblk_softc {int vtblk_dev; } ;
struct sysctl_oid_list {int dummy; } ;
struct sysctl_oid {int dummy; } ;
struct sysctl_ctx_list {int dummy; } ;
typedef int device_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct sysctl_ctx_list*,struct sysctl_oid_list*,int ,char*,int,struct vtblk_softc*,int ,int ,char*,char*) ;
 struct sysctl_oid_list* FUNC_1 (struct sysctl_oid*) ;
 struct sysctl_ctx_list* FUNC_2 (int ) ;
 struct sysctl_oid* FUNC_3 (int ) ;
 int VAR_3 ;

__attribute__((used)) static void
FUNC_4(struct vtblk_softc *VAR_4)
{
 device_t VAR_5;
 struct sysctl_ctx_list *VAR_6;
 struct sysctl_oid *VAR_7;
 struct sysctl_oid_list *VAR_8;

 VAR_5 = VAR_4->vtblk_dev;
 VAR_6 = FUNC_2(VAR_5);
 VAR_7 = FUNC_3(VAR_5);
 VAR_8 = FUNC_1(VAR_7);

 FUNC_0(VAR_6, VAR_8, VAR_2, "writecache_mode",
     VAR_1 | VAR_0, VAR_4, 0, VAR_3,
     "I", "Write cache mode (writethrough (0) or writeback (1))");
}
