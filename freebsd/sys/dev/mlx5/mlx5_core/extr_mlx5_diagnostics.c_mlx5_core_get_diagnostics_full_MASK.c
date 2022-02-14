
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {void* tx_pci_fatal_errors; void* tx_pci_non_fatal_errors; void* tx_pci_errors; void* rx_pci_errors; } ;
union mlx5_core_pci_diagnostics {TYPE_1__ counter; int array; } ;
union mlx5_core_general_diagnostics {int array; } ;
typedef int u64 ;
typedef void* u16 ;
struct mlx5_core_dev {int dummy; } ;
struct TYPE_6__ {int pcie_timers_states; int pcie_perf_counters; } ;
struct TYPE_5__ {int counter_value_h; int counter_id; } ;


 int VAR_0 ;
 void* FUNC_0 (int ,void*,int ) ;
 int FUNC_1 (struct mlx5_core_dev*,int ) ;
 int VAR_1 ;
 int VAR_2 ;
 void* FUNC_2 (int ,void*,int ) ;
 int FUNC_3 (int ,void*,int ) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_4 (int ,void*,int ,int ) ;
 int FUNC_5 (int ) ;
 TYPE_3__ VAR_6 ;
 int VAR_7 ;
 TYPE_2__* VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int FUNC_6 (void*) ;
 int FUNC_7 (struct mlx5_core_dev*,void*,int,void*,int,int ,int ,int ) ;
 int VAR_12 ;
 int VAR_13 ;
 int FUNC_8 (int ,int ,int ,void*,int ) ;
 int FUNC_9 (struct mlx5_core_dev*,int,int ,void*,int) ;
 void* FUNC_10 (int) ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;
 int VAR_20 ;
 int VAR_21 ;

int FUNC_11(struct mlx5_core_dev *VAR_22,
       union mlx5_core_pci_diagnostics *VAR_23,
       union mlx5_core_general_diagnostics *VAR_24)
{
 void *VAR_25;
 void *VAR_26;
 int VAR_27;
 int VAR_28;
 int VAR_29;
 int VAR_30;
 int VAR_31;

 if (FUNC_1(VAR_22, VAR_7) == 0)
  return 0;

 VAR_27 = FUNC_1(VAR_22, VAR_16);
 if (VAR_27 == 0)
  return 0;

 VAR_28 = FUNC_5(VAR_19) +
     FUNC_5(VAR_9) * VAR_27;

 VAR_25 = FUNC_10(VAR_28);
 if (VAR_25 == ((void*)0))
  return -VAR_0;

 VAR_30 = FUNC_9(VAR_22, 1, 0, VAR_25, VAR_28);
 if (VAR_30 == 0) {
  for (VAR_31 = 0; VAR_31 != VAR_27; VAR_31++) {
   u16 VAR_32 = FUNC_2(
       VAR_19,
       VAR_25, VAR_8[VAR_31].counter_id);
   u64 VAR_33 = FUNC_3(
       VAR_19,
       VAR_25, VAR_8[VAR_31].counter_value_h);

   if (VAR_23 != ((void*)0)) {
    FUNC_8(
        VAR_13,
        VAR_23->array,
        VAR_2,
        VAR_32, VAR_33);
   }
   if (VAR_24 != ((void*)0)) {
    FUNC_8(
        VAR_12,
        VAR_24->array,
        VAR_1,
        VAR_32, VAR_33);
   }
  }
 }
 FUNC_6(VAR_25);

 if (VAR_23 != ((void*)0)) {
  VAR_29 = FUNC_5(VAR_14);
  VAR_28 = FUNC_5(VAR_14);

  VAR_26 = FUNC_10(VAR_29);
  if (VAR_26 == ((void*)0))
   return -VAR_0;

  VAR_25 = FUNC_10(VAR_28);
  if (VAR_25 == ((void*)0)) {
   FUNC_6(VAR_26);
   return -VAR_0;
  }
  FUNC_4(VAR_14, VAR_26, VAR_11,
    VAR_3);

  VAR_30 = FUNC_7(VAR_22, VAR_26, VAR_29, VAR_25, VAR_28,
        VAR_5, 0, 0);
  if (VAR_30 == 0) {
   void *VAR_34 = FUNC_0(VAR_14, VAR_25,
       VAR_6.pcie_perf_counters);

   VAR_23->counter.rx_pci_errors =
       FUNC_2(VAR_17,
         VAR_34, VAR_20);
   VAR_23->counter.tx_pci_errors =
       FUNC_2(VAR_17,
         VAR_34, VAR_21);
  }
  FUNC_4(VAR_14, VAR_26, VAR_11,
    VAR_4);

  VAR_30 = FUNC_7(VAR_22, VAR_26, VAR_29, VAR_25, VAR_28,
      VAR_5, 0, 0);
  if (VAR_30 == 0) {
   void *VAR_35 = FUNC_0(VAR_14, VAR_25,
       VAR_6.pcie_timers_states);

   VAR_23->counter.tx_pci_non_fatal_errors =
       FUNC_2(VAR_18,
         VAR_35, VAR_15);
   VAR_23->counter.tx_pci_fatal_errors =
       FUNC_2(VAR_18,
         VAR_35, VAR_10);
  }
  FUNC_6(VAR_26);
  FUNC_6(VAR_25);
 }
 return 0;
}
