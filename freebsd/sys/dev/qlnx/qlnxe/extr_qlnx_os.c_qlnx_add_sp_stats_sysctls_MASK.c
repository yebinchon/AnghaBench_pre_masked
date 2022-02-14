
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct sysctl_oid_list {int dummy; } ;
struct sysctl_oid {int dummy; } ;
struct sysctl_ctx_list {int dummy; } ;
struct TYPE_3__ {int sp_interrupts; int pci_dev; } ;
typedef TYPE_1__ qlnx_host_t ;


 int VAR_0 ;
 int VAR_1 ;
 struct sysctl_oid* FUNC_0 (struct sysctl_ctx_list*,struct sysctl_oid_list*,int ,char*,int ,int *,char*) ;
 int FUNC_1 (struct sysctl_ctx_list*,struct sysctl_oid_list*,int ,char*,int ,int *,char*) ;
 struct sysctl_oid_list* FUNC_2 (struct sysctl_oid*) ;
 struct sysctl_ctx_list* FUNC_3 (int ) ;
 struct sysctl_oid* FUNC_4 (int ) ;

__attribute__((used)) static void
FUNC_5(qlnx_host_t *VAR_2)
{
        struct sysctl_ctx_list *VAR_3;
        struct sysctl_oid_list *VAR_4;
 struct sysctl_oid *VAR_5;

        VAR_3 = FUNC_3(VAR_2->pci_dev);
 VAR_4 = FUNC_2(FUNC_4(VAR_2->pci_dev));

 VAR_5 = FUNC_0(VAR_3, VAR_4, VAR_1, "spstat",
   VAR_0, ((void*)0), "spstat");
        VAR_4 = FUNC_2(VAR_5);

 FUNC_1(VAR_3, VAR_4,
                VAR_1, "sp_interrupts",
                VAR_0, &VAR_2->sp_interrupts,
                "No. of slowpath interrupts");

 return;
}
