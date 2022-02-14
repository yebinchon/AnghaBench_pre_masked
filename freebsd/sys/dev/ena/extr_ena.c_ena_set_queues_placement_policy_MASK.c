
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
struct ena_llq_configurations {int dummy; } ;
struct ena_com_dev {int supported_features; scalar_t__ tx_mem_queue_type; int mem_bar; } ;
struct ena_admin_feature_llq_desc {int dummy; } ;
struct ena_adapter {int * memory; } ;
typedef int device_t ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ) ;
 int VAR_3 ;
 int VAR_4 ;
 int * FUNC_1 (int ,int ,int*,int ) ;
 struct ena_adapter* FUNC_2 (int ) ;
 int FUNC_3 (int ,char*) ;
 int FUNC_4 (struct ena_com_dev*,struct ena_admin_feature_llq_desc*,struct ena_llq_configurations*) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;
 scalar_t__ FUNC_7 (int) ;

__attribute__((used)) static int
FUNC_8(device_t VAR_5, struct ena_com_dev *VAR_6,
    struct ena_admin_feature_llq_desc *VAR_7,
    struct ena_llq_configurations *VAR_8)
{
 struct ena_adapter *VAR_9 = FUNC_2(VAR_5);
 int VAR_10, VAR_11;
 uint32_t VAR_12;

 VAR_12 = 1 << VAR_0;
 if (!(VAR_6->supported_features & VAR_12)) {
  FUNC_3(VAR_5,
      "LLQ is not supported. Fallback to host mode policy.\n");
  VAR_6->tx_mem_queue_type = VAR_1;
  return (0);
 }

 VAR_10 = FUNC_4(VAR_6, VAR_7, VAR_8);
 if (FUNC_7(VAR_10 != 0)) {
  FUNC_3(VAR_5, "Failed to configure the device mode. "
      "Fallback to host mode policy.\n");
  VAR_6->tx_mem_queue_type = VAR_1;
  return (0);
 }


 if (VAR_6->tx_mem_queue_type == VAR_1)
  return (0);


 VAR_11 = FUNC_0(VAR_2);
 VAR_9->memory = FUNC_1(VAR_5, VAR_4,
     &VAR_11, VAR_3);
 if (FUNC_7(VAR_9->memory == ((void*)0))) {
  FUNC_3(VAR_5, "unable to allocate LLQ bar resource. "
      "Fallback to host mode policy.\n");
  VAR_6->tx_mem_queue_type = VAR_1;
  return (0);
 }


 VAR_10 = FUNC_5(VAR_9->memory);
 if (FUNC_7(VAR_10 != 0)) {
  FUNC_3(VAR_5, "failed to enable write combining.\n");
  return (VAR_10);
 }





 VAR_6->mem_bar = FUNC_6(VAR_9->memory);

 return (0);
}
