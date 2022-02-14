
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
struct vtballoon_softc {int vtballoon_current_npages; int vtballoon_desired_npages; int vtballoon_dev; } ;
struct sysctl_oid_list {int dummy; } ;
struct sysctl_oid {int dummy; } ;
struct sysctl_ctx_list {int dummy; } ;
typedef int device_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct sysctl_ctx_list*,struct sysctl_oid_list*,int ,char*,int ,int *,int,char*) ;
 struct sysctl_oid_list* FUNC_1 (struct sysctl_oid*) ;
 struct sysctl_ctx_list* FUNC_2 (int ) ;
 struct sysctl_oid* FUNC_3 (int ) ;

__attribute__((used)) static void
FUNC_4(struct vtballoon_softc *VAR_2)
{
 device_t VAR_3;
 struct sysctl_ctx_list *VAR_4;
 struct sysctl_oid *VAR_5;
 struct sysctl_oid_list *VAR_6;

 VAR_3 = VAR_2->vtballoon_dev;
 VAR_4 = FUNC_2(VAR_3);
 VAR_5 = FUNC_3(VAR_3);
 VAR_6 = FUNC_1(VAR_5);

 FUNC_0(VAR_4, VAR_6, VAR_1, "desired",
     VAR_0, &VAR_2->vtballoon_desired_npages, sizeof(uint32_t),
     "Desired balloon size in pages");

 FUNC_0(VAR_4, VAR_6, VAR_1, "current",
     VAR_0, &VAR_2->vtballoon_current_npages, sizeof(uint32_t),
     "Current balloon size in pages");
}
