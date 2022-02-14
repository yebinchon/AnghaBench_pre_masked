
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vmxnet3_softc {int vmx_dev; } ;
struct sysctl_oid_list {int dummy; } ;
struct sysctl_oid {int dummy; } ;
struct sysctl_ctx_list {int dummy; } ;
typedef int device_t ;


 struct sysctl_oid_list* FUNC_0 (struct sysctl_oid*) ;
 struct sysctl_ctx_list* FUNC_1 (int ) ;
 struct sysctl_oid* FUNC_2 (int ) ;
 int FUNC_3 (struct vmxnet3_softc*,struct sysctl_ctx_list*,struct sysctl_oid_list*) ;

__attribute__((used)) static void
FUNC_4(struct vmxnet3_softc *VAR_0)
{
 device_t VAR_1;
 struct sysctl_ctx_list *VAR_2;
 struct sysctl_oid *VAR_3;
 struct sysctl_oid_list *VAR_4;

 VAR_1 = VAR_0->vmx_dev;
 VAR_2 = FUNC_1(VAR_1);
 VAR_3 = FUNC_2(VAR_1);
 VAR_4 = FUNC_0(VAR_3);

 FUNC_3(VAR_0, VAR_2, VAR_4);
}
