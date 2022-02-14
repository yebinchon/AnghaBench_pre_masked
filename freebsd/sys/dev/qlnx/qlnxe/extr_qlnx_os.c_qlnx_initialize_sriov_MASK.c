
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int sriov_initialized; int pci_dev; } ;
typedef TYPE_1__ qlnx_host_t ;
typedef int nvlist_t ;
typedef int device_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,char*) ;
 int FUNC_1 (int ,int *,int *) ;
 int FUNC_2 (int *,char*,int ,int ) ;
 int FUNC_3 (int *,char*,int ,int) ;
 int FUNC_4 (int *,char*,int ,int *) ;
 int * FUNC_5 () ;

__attribute__((used)) static void
FUNC_6(qlnx_host_t *VAR_2)
{
 device_t VAR_3;
 nvlist_t *VAR_4, *VAR_5;
 int VAR_6;

 VAR_3 = VAR_2->pci_dev;

 VAR_4 = FUNC_5();
 VAR_5 = FUNC_5();

 FUNC_4(VAR_5, "mac-addr", 0, ((void*)0));
 FUNC_2(VAR_5, "allow-set-mac",
  VAR_1, VAR_0);
 FUNC_2(VAR_5, "allow-promisc",
  VAR_1, VAR_0);
 FUNC_3(VAR_5, "num-queues",
  VAR_1, 1);

 VAR_6 = FUNC_1(VAR_3, VAR_4, VAR_5);

 if (VAR_6 != 0) {
  VAR_2->sriov_initialized = 0;
 } else {
  FUNC_0(VAR_3, "SRIOV initialized\n");
  VAR_2->sriov_initialized = 1;
 }

 return;
}
