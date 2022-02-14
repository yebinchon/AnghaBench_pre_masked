
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct sysctl_oid {int dummy; } ;
struct sysctl_ctx_list {int dummy; } ;
struct TYPE_4__ {scalar_t__ array; } ;
struct TYPE_3__ {scalar_t__ array; } ;
struct mlx5e_priv {TYPE_2__ params_general; int mdev; TYPE_1__ params_pci; struct sysctl_oid* sysctl_ifnet; struct sysctl_ctx_list sysctl_ctx; } ;
struct mlx5_core_diagnostics_entry {int desc; int counter_id; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 struct sysctl_oid* FUNC_0 (struct sysctl_ctx_list*,int ,int ,char*,int ,int *,char*) ;
 int FUNC_1 (struct sysctl_ctx_list*,int ,int ,int ,int ,scalar_t__,char*) ;
 int FUNC_2 (struct sysctl_oid*) ;
 struct mlx5_core_diagnostics_entry* VAR_4 ;
 struct mlx5_core_diagnostics_entry* VAR_5 ;
 scalar_t__ FUNC_3 (int ,int ) ;

__attribute__((used)) static void
FUNC_4(struct mlx5e_priv *VAR_6)
{
 struct mlx5_core_diagnostics_entry VAR_7;
 struct sysctl_ctx_list *VAR_8;
 struct sysctl_oid *VAR_9;
 int VAR_10;


 VAR_8 = &VAR_6->sysctl_ctx;


 VAR_9 = FUNC_0(VAR_8,
     FUNC_2(VAR_6->sysctl_ifnet), VAR_3,
     "diagnostics", VAR_0, ((void*)0), "Diagnostics");
 if (VAR_9 == ((void*)0))
  return;


 for (VAR_10 = 0; VAR_10 != VAR_2; VAR_10++) {
  VAR_7 = VAR_5[VAR_10];
  if (FUNC_3(VAR_6->mdev, VAR_7.counter_id) == 0)
   continue;
  FUNC_1(VAR_8, FUNC_2(VAR_9), VAR_3,
      VAR_7.desc, VAR_0, VAR_6->params_pci.array + VAR_10,
      "PCI diagnostics counter");
 }


 for (VAR_10 = 0; VAR_10 != VAR_1; VAR_10++) {
  VAR_7 = VAR_4[VAR_10];
  if (FUNC_3(VAR_6->mdev, VAR_7.counter_id) == 0)
   continue;
  FUNC_1(VAR_8, FUNC_2(VAR_9), VAR_3,
      VAR_7.desc, VAR_0, VAR_6->params_general.array + VAR_10,
      "General diagnostics counter");
 }
}
