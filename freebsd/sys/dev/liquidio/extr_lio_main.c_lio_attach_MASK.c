
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
typedef unsigned long long uint64_t ;
typedef int uint32_t ;
struct octeon_device {int rx_pause; int tx_pause; int status; int * droq; int * watchdog_task; int device; int msix_on; int rx_budget; int tx_budget; } ;
typedef int device_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 scalar_t__ VAR_8 ;
 scalar_t__ FUNC_0 (int *) ;
 scalar_t__ VAR_9 ;
 int FUNC_1 (int ,char*) ;
 int FUNC_2 (int ,struct octeon_device*,int **,int ,int ,char*,int ,int ,int ) ;
 int FUNC_3 (int *) ;
 struct octeon_device* FUNC_4 (int ) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (struct octeon_device*,char*) ;
 int FUNC_7 (struct octeon_device*,char*) ;
 int FUNC_8 (struct octeon_device*,char*,int ,int ,int ,int ,int ) ;
 scalar_t__ FUNC_9 (struct octeon_device*) ;
 int FUNC_10 (int ,int ) ;
 int FUNC_11 (scalar_t__) ;
 int FUNC_12 (struct octeon_device*) ;
 unsigned long long FUNC_13 (struct octeon_device*,int ) ;
 int VAR_10 ;
 int FUNC_14 (struct octeon_device*,int ,unsigned long long) ;
 int FUNC_15 (int ) ;
 int FUNC_16 (int ) ;
 int FUNC_17 (int ) ;
 int FUNC_18 (int ) ;
 int FUNC_19 (int ) ;

__attribute__((used)) static int
FUNC_20(device_t VAR_11)
{
 struct octeon_device *VAR_12 = ((void*)0);
 uint64_t VAR_13;
 uint32_t VAR_14;
 int VAR_15, VAR_16 = 1;
 uint8_t VAR_17, VAR_18, VAR_19;

 VAR_12 = FUNC_4(VAR_11);
 if (VAR_12 == ((void*)0)) {
  FUNC_1(VAR_11, "Error: Unable to allocate device\n");
  return (-VAR_1);
 }

 VAR_12->tx_budget = VAR_4;
 VAR_12->rx_budget = VAR_3;
 VAR_12->msix_on = VAR_6;

 VAR_12->device = VAR_11;
 VAR_17 = FUNC_15(VAR_11);
 VAR_18 = FUNC_18(VAR_11);
 VAR_19 = FUNC_17(VAR_11);

 FUNC_8(VAR_12, "Initializing device %x:%x %02x:%02x.%01x\n",
       FUNC_19(VAR_11), FUNC_16(VAR_11), VAR_17, VAR_18,
       VAR_19);

 if (FUNC_9(VAR_12)) {
  FUNC_7(VAR_12, "Failed to init device\n");
  FUNC_5(VAR_11);
  return (-VAR_1);
 }

 VAR_13 = FUNC_13(VAR_12, VAR_2);
 if (!(VAR_13 & 4ULL)) {





  VAR_13 |= 4ULL;
  FUNC_14(VAR_12, VAR_2, VAR_13);

  VAR_14 = FUNC_2(VAR_10, VAR_12,
         &VAR_12->watchdog_task, 0, 0,
         "liowd/%02hhx:%02hhx.%hhx", VAR_17,
         VAR_18, VAR_19);
  if (!VAR_14) {
   FUNC_3(VAR_12->watchdog_task);
  } else {
   VAR_12->watchdog_task = ((void*)0);
   FUNC_7(VAR_12,
        "failed to create kernel_thread\n");
   FUNC_5(VAR_11);
   return (-1);
  }
 }
 VAR_12->rx_pause = 1;
 VAR_12->tx_pause = 1;

 VAR_15 = 0;
 while (VAR_15 < VAR_7) {
  FUNC_11(VAR_8);
  VAR_15 += VAR_8;





  if (VAR_9)
   FUNC_10(VAR_12->droq[0], 0);

  if (FUNC_0(&VAR_12->status) == VAR_5) {
   VAR_16 = FUNC_12(VAR_12);
   break;
  }
 }

 if (VAR_16) {
  FUNC_7(VAR_12, "Firmware failed to start\n");
  FUNC_5(VAR_11);
  return (-VAR_0);
 }

 FUNC_6(VAR_12, "Device is ready\n");

 return (0);
}
