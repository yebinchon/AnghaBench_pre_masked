
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vtnet_softc {int vtnet_max_vq_pairs; int * vtnet_txqs; int * vtnet_rxqs; int vtnet_dev; } ;
struct sysctl_oid_list {int dummy; } ;
struct sysctl_oid {int dummy; } ;
struct sysctl_ctx_list {int dummy; } ;
typedef int device_t ;


 struct sysctl_oid_list* FUNC_0 (struct sysctl_oid*) ;
 struct sysctl_ctx_list* FUNC_1 (int ) ;
 struct sysctl_oid* FUNC_2 (int ) ;
 int FUNC_3 (struct sysctl_ctx_list*,struct sysctl_oid_list*,int *) ;
 int FUNC_4 (struct sysctl_ctx_list*,struct sysctl_oid_list*,int *) ;

__attribute__((used)) static void
FUNC_5(struct vtnet_softc *VAR_0)
{
 device_t VAR_1;
 struct sysctl_ctx_list *VAR_2;
 struct sysctl_oid *VAR_3;
 struct sysctl_oid_list *VAR_4;
 int VAR_5;

 VAR_1 = VAR_0->vtnet_dev;
 VAR_2 = FUNC_1(VAR_1);
 VAR_3 = FUNC_2(VAR_1);
 VAR_4 = FUNC_0(VAR_3);

 for (VAR_5 = 0; VAR_5 < VAR_0->vtnet_max_vq_pairs; VAR_5++) {
  FUNC_3(VAR_2, VAR_4, &VAR_0->vtnet_rxqs[VAR_5]);
  FUNC_4(VAR_2, VAR_4, &VAR_0->vtnet_txqs[VAR_5]);
 }
}
