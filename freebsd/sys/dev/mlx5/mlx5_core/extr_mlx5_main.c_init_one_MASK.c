
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct sysctl_oid {int dummy; } ;
struct pci_device_id {int driver_data; } ;
struct TYPE_3__ {int bsddev; } ;
struct pci_dev {TYPE_1__ dev; } ;
struct TYPE_4__ {int * error_counters; int * status_counters; } ;
struct mlx5_priv {int ctx_lock; int ctx_list; TYPE_2__ pme_stats; int pci_dev_data; } ;
struct mlx5_core_dev {int sysctl_ctx; int dump_lock; int intf_state_mutex; int pci_status_mutex; struct mlx5_priv priv; int pwr_value; int pwr_status; int msix_eqvec; int event; struct pci_dev* pdev; int * profile; } ;
typedef int device_t ;


 size_t FUNC_0 (int *) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (int *) ;
 size_t VAR_5 ;
 int VAR_6 ;
 size_t VAR_7 ;
 size_t VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int FUNC_2 (int *,int ,int ,char*,int,int *,int ,char*) ;
 struct sysctl_oid* FUNC_3 (int *,int ,int ,char*,int,int *,char*) ;
 int FUNC_4 (int *,int ,int ,char*,int,int *,int ,char*) ;
 int FUNC_5 (struct sysctl_oid*) ;
 struct sysctl_oid* FUNC_6 (int ) ;
 int FUNC_7 (int ,char*,size_t) ;
 int FUNC_8 (int ,int ) ;
 int FUNC_9 (struct mlx5_core_dev*) ;
 struct mlx5_core_dev* FUNC_10 (int,int ) ;
 int FUNC_11 (struct mlx5_core_dev*,char*,int) ;
 int VAR_12 ;
 int FUNC_12 (struct mlx5_core_dev*) ;
 int FUNC_13 (struct mlx5_core_dev*) ;
 int FUNC_14 (struct mlx5_core_dev*) ;
 int FUNC_15 (struct mlx5_core_dev*) ;
 int FUNC_16 (struct mlx5_core_dev*,struct mlx5_priv*,int) ;
 int FUNC_17 (struct mlx5_core_dev*) ;
 int FUNC_18 (struct mlx5_core_dev*) ;
 int FUNC_19 (struct mlx5_core_dev*,struct mlx5_priv*) ;
 int FUNC_20 (struct mlx5_core_dev*,struct mlx5_priv*) ;
 char** VAR_13 ;
 size_t VAR_14 ;
 int VAR_15 ;
 int FUNC_21 (int *) ;
 int FUNC_22 (int *,char*,int *,int) ;
 int FUNC_23 (int *) ;
 int FUNC_24 (int ) ;
 int * VAR_16 ;
 int FUNC_25 (int *) ;
 int FUNC_26 (int *) ;
 int FUNC_27 (int *) ;

__attribute__((used)) static int FUNC_28(struct pci_dev *VAR_17,
      const struct pci_device_id *VAR_18)
{
 struct mlx5_core_dev *VAR_19;
 struct mlx5_priv *VAR_20;
 device_t VAR_21 = VAR_17->dev.bsddev;
 int VAR_22,VAR_23;
 struct sysctl_oid *VAR_24;
 struct sysctl_oid *VAR_25;

 VAR_19 = FUNC_10(sizeof(*VAR_19), VAR_4);
 VAR_20 = &VAR_19->priv;
 if (VAR_18)
  VAR_20->pci_dev_data = VAR_18->driver_data;

 if (VAR_14 < 0 || VAR_14 >= FUNC_0(VAR_16)) {
  FUNC_7(VAR_21,
      "WARN: selected profile out of range, selecting default (%d)\n",
      VAR_5);
  VAR_14 = VAR_5;
 }
 VAR_19->profile = &VAR_16[VAR_14];
 VAR_19->pdev = VAR_17;
 VAR_19->event = VAR_12;


 FUNC_8(VAR_21, VAR_15);

 FUNC_27(&VAR_19->sysctl_ctx);
 FUNC_2(&VAR_19->sysctl_ctx,
     FUNC_5(FUNC_6(VAR_21)),
     VAR_11, "msix_eqvec", VAR_2, &VAR_19->msix_eqvec, 0,
     "Maximum number of MSIX event queue vectors, if set");
 FUNC_2(&VAR_19->sysctl_ctx,
     FUNC_5(FUNC_6(VAR_21)),
     VAR_11, "power_status", VAR_1, &VAR_19->pwr_status, 0,
     "0:Invalid 1:Sufficient 2:Insufficient");
 FUNC_2(&VAR_19->sysctl_ctx,
     FUNC_5(FUNC_6(VAR_21)),
     VAR_11, "power_value", VAR_1, &VAR_19->pwr_value, 0,
     "Current power value in Watts");

 VAR_24 = FUNC_3(&VAR_19->sysctl_ctx,
     FUNC_5(FUNC_6(VAR_21)),
     VAR_11, "pme_stats", VAR_1, ((void*)0),
     "Port module event statistics");
 if (VAR_24 == ((void*)0)) {
  VAR_23 = -VAR_3;
  goto clean_sysctl_ctx;
 }
 VAR_25 = FUNC_3(&VAR_19->sysctl_ctx,
     FUNC_5(VAR_24),
     VAR_11, "errors", VAR_1, ((void*)0),
     "Port module event error statistics");
 if (VAR_25 == ((void*)0)) {
  VAR_23 = -VAR_3;
  goto clean_sysctl_ctx;
 }
 FUNC_4(&VAR_19->sysctl_ctx,
     FUNC_5(VAR_24), VAR_11,
     "module_plug", VAR_1 | VAR_0,
     &VAR_19->priv.pme_stats.status_counters[VAR_7],
     0, "Number of time module plugged");
 FUNC_4(&VAR_19->sysctl_ctx,
     FUNC_5(VAR_24), VAR_11,
     "module_unplug", VAR_1 | VAR_0,
     &VAR_19->priv.pme_stats.status_counters[VAR_8],
     0, "Number of time module unplugged");
 for (VAR_22 = 0 ; VAR_22 < VAR_6; VAR_22++) {
  FUNC_4(&VAR_19->sysctl_ctx,
      FUNC_5(VAR_25), VAR_11,
      VAR_13[2 * VAR_22], VAR_1 | VAR_0,
      &VAR_19->priv.pme_stats.error_counters[VAR_22],
      0, VAR_13[2 * VAR_22 + 1]);
 }


 FUNC_1(&VAR_20->ctx_list);
 FUNC_25(&VAR_20->ctx_lock);
 FUNC_23(&VAR_19->pci_status_mutex);
 FUNC_23(&VAR_19->intf_state_mutex);
 FUNC_22(&VAR_19->dump_lock, "mlx5dmp", ((void*)0), VAR_9 | VAR_10);
 VAR_23 = FUNC_20(VAR_19, VAR_20);
 if (VAR_23) {
  FUNC_11(VAR_19, "mlx5_pci_init failed %d\n", VAR_23);
  goto clean_dev;
 }

 VAR_23 = FUNC_15(VAR_19);
 if (VAR_23) {
  FUNC_11(VAR_19, "mlx5_health_init failed %d\n", VAR_23);
  goto close_pci;
 }

 FUNC_18(VAR_19);

 VAR_23 = FUNC_16(VAR_19, VAR_20, 1);
 if (VAR_23) {
  FUNC_11(VAR_19, "mlx5_load_one failed %d\n", VAR_23);
  goto clean_health;
 }

 FUNC_13(VAR_19);

 FUNC_12(VAR_19);

 FUNC_24(VAR_21);
 return 0;

clean_health:
 FUNC_17(VAR_19);
 FUNC_14(VAR_19);
close_pci:
 FUNC_19(VAR_19, VAR_20);
clean_dev:
 FUNC_21(&VAR_19->dump_lock);
clean_sysctl_ctx:
 FUNC_26(&VAR_19->sysctl_ctx);
 FUNC_9(VAR_19);
 return VAR_23;
}
