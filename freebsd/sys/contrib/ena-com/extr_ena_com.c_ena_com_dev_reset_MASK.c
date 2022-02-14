
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_2__ {int completion_timeout; } ;
struct ena_com_dev {TYPE_1__ admin_queue; scalar_t__ reg_bar; int bus; } ;
typedef enum ena_regs_reset_reason_types { ____Placeholder_ena_regs_reset_reason_types } ena_regs_reset_reason_types ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 scalar_t__ VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int FUNC_0 (int ,int,scalar_t__) ;
 int FUNC_1 (struct ena_com_dev*) ;
 int FUNC_2 (struct ena_com_dev*,int ) ;
 int FUNC_3 (char*) ;
 scalar_t__ FUNC_4 (int) ;
 int FUNC_5 (struct ena_com_dev*,int,int ) ;

int FUNC_6(struct ena_com_dev *VAR_16,
        enum ena_regs_reset_reason_types VAR_17)
{
 u32 VAR_18, VAR_19, VAR_20, VAR_21;
 int VAR_22;

 VAR_18 = FUNC_2(VAR_16, VAR_13);
 VAR_20 = FUNC_2(VAR_16, VAR_6);

 if (FUNC_4((VAR_18 == VAR_3) ||
       (VAR_20 == VAR_3))) {
  FUNC_3("Reg read32 timeout occurred\n");
  return VAR_2;
 }

 if ((VAR_18 & VAR_14) == 0) {
  FUNC_3("Device isn't ready, can't reset device\n");
  return VAR_1;
 }

 VAR_19 = (VAR_20 & VAR_7) >>
   VAR_8;
 if (VAR_19 == 0) {
  FUNC_3("Invalid timeout value\n");
  return VAR_1;
 }


 VAR_21 = VAR_9;
 VAR_21 |= (VAR_17 << VAR_12) &
   VAR_11;
 FUNC_0(VAR_16->bus, VAR_21, VAR_16->reg_bar + VAR_10);


 FUNC_1(VAR_16);

 VAR_22 = FUNC_5(VAR_16, VAR_19,
      VAR_15);
 if (VAR_22 != 0) {
  FUNC_3("Reset indication didn't turn on\n");
  return VAR_22;
 }


 FUNC_0(VAR_16->bus, 0, VAR_16->reg_bar + VAR_10);
 VAR_22 = FUNC_5(VAR_16, VAR_19, 0);
 if (VAR_22 != 0) {
  FUNC_3("Reset indication didn't turn off\n");
  return VAR_22;
 }

 VAR_19 = (VAR_20 & VAR_4) >>
  VAR_5;
 if (VAR_19)

  VAR_16->admin_queue.completion_timeout = VAR_19 * 100000;
 else
  VAR_16->admin_queue.completion_timeout = VAR_0;

 return 0;
}
