
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sysctl_oid_list {int dummy; } ;
struct sysctl_oid {int dummy; } ;
struct sysctl_ctx_list {int dummy; } ;
struct ena_adapter {int pdev; } ;
typedef int device_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct sysctl_ctx_list*,struct sysctl_oid_list*,int ,char*,int,struct ena_adapter*,int ,int ,char*,char*) ;
 struct sysctl_oid_list* FUNC_1 (struct sysctl_oid*) ;
 struct sysctl_ctx_list* FUNC_2 (int ) ;
 struct sysctl_oid* FUNC_3 (int ) ;
 int VAR_3 ;
 int VAR_4 ;

__attribute__((used)) static void
FUNC_4(struct ena_adapter *VAR_5)
{
 device_t VAR_6;

 struct sysctl_ctx_list *VAR_7;
 struct sysctl_oid *VAR_8;
 struct sysctl_oid_list *VAR_9;

 VAR_6 = VAR_5->pdev;

 VAR_7 = FUNC_2(VAR_6);
 VAR_8 = FUNC_3(VAR_6);
 VAR_9 = FUNC_1(VAR_8);


 FUNC_0(VAR_7, VAR_9, VAR_2, "buf_ring_size", VAR_1 |
     VAR_0, VAR_5, 0, VAR_3, "I",
     "Size of the bufring");


 FUNC_0(VAR_7, VAR_9, VAR_2, "rx_queue_size", VAR_1 |
     VAR_0, VAR_5, 0, VAR_4, "I",
     "Size of the Rx ring. The size should be a power of 2. "
     "Max value is 8K");
}
