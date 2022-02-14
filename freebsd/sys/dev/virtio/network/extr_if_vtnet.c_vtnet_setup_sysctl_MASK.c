
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vtnet_softc {int vtnet_act_vq_pairs; int vtnet_requested_vq_pairs; int vtnet_max_vq_pairs; int vtnet_dev; } ;
struct sysctl_oid_list {int dummy; } ;
struct sysctl_oid {int dummy; } ;
struct sysctl_ctx_list {int dummy; } ;
typedef int device_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct sysctl_ctx_list*,struct sysctl_oid_list*,int ,char*,int ,int *,int ,char*) ;
 struct sysctl_oid_list* FUNC_1 (struct sysctl_oid*) ;
 struct sysctl_ctx_list* FUNC_2 (int ) ;
 struct sysctl_oid* FUNC_3 (int ) ;
 int FUNC_4 (struct sysctl_ctx_list*,struct sysctl_oid_list*,struct vtnet_softc*) ;

__attribute__((used)) static void
FUNC_5(struct vtnet_softc *VAR_2)
{
 device_t VAR_3;
 struct sysctl_ctx_list *VAR_4;
 struct sysctl_oid *VAR_5;
 struct sysctl_oid_list *VAR_6;

 VAR_3 = VAR_2->vtnet_dev;
 VAR_4 = FUNC_2(VAR_3);
 VAR_5 = FUNC_3(VAR_3);
 VAR_6 = FUNC_1(VAR_5);

 FUNC_0(VAR_4, VAR_6, VAR_1, "max_vq_pairs",
     VAR_0, &VAR_2->vtnet_max_vq_pairs, 0,
     "Maximum number of supported virtqueue pairs");
 FUNC_0(VAR_4, VAR_6, VAR_1, "requested_vq_pairs",
     VAR_0, &VAR_2->vtnet_requested_vq_pairs, 0,
     "Requested number of virtqueue pairs");
 FUNC_0(VAR_4, VAR_6, VAR_1, "act_vq_pairs",
     VAR_0, &VAR_2->vtnet_act_vq_pairs, 0,
     "Number of active virtqueue pairs");

 FUNC_4(VAR_4, VAR_6, VAR_2);
}
