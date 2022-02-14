
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
typedef int uint32_t ;
struct thread {int dummy; } ;
struct t4_tracer {int dummy; } ;
struct t4_sge_context {int dummy; } ;
struct t4_sched_queue {int dummy; } ;
struct t4_sched_params {int dummy; } ;
struct t4_regdump {int len; int data; } ;
struct t4_reg {int addr; int size; int val; } ;
struct t4_offload_policy {int dummy; } ;
struct t4_mem_range {int dummy; } ;
struct t4_i2c_data {int dummy; } ;
struct t4_filter {int dummy; } ;
struct t4_data {int dummy; } ;
struct t4_cudbg_dump {int dummy; } ;
struct t4_bootrom {int dummy; } ;
struct cdev {struct adapter* si_drv1; } ;
struct adapter {int mmio_len; } ;
typedef scalar_t__ caddr_t ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_0 (struct adapter*,int ) ;
 int FUNC_1 (int *,int ,int) ;
 int FUNC_2 (struct adapter*,struct t4_cudbg_dump*) ;
 int FUNC_3 (struct adapter*,struct t4_filter*) ;
 int FUNC_4 (int *,int ) ;
 int FUNC_5 (struct adapter*,struct t4_filter*) ;
 int FUNC_6 (struct adapter*,int *) ;
 int FUNC_7 (struct adapter*,struct t4_regdump*,int *) ;
 int FUNC_8 (struct adapter*,struct t4_sge_context*) ;
 int FUNC_9 (struct adapter*,struct t4_bootrom*) ;
 int FUNC_10 (struct adapter*,struct t4_data*) ;
 int FUNC_11 (struct adapter*,struct t4_data*) ;
 int FUNC_12 (struct adapter*,struct t4_data*) ;
 int * FUNC_13 (int,int ,int) ;
 int FUNC_14 (struct thread*,int ) ;
 int FUNC_15 (struct adapter*,int,struct t4_mem_range*) ;
 int FUNC_16 (struct adapter*,struct t4_i2c_data*) ;
 int FUNC_17 (struct adapter*,struct t4_filter*) ;
 int FUNC_18 (struct adapter*,int ) ;
 int FUNC_19 (struct adapter*,struct t4_offload_policy*) ;
 int FUNC_20 (struct adapter*) ;
 int FUNC_21 (struct adapter*,struct t4_tracer*) ;
 int FUNC_22 (struct adapter*,int) ;
 int FUNC_23 (struct adapter*,int) ;
 int FUNC_24 (struct adapter*,struct t4_sched_params*) ;
 int FUNC_25 (struct adapter*,struct t4_sched_queue*) ;
 int FUNC_26 (struct adapter*,struct t4_tracer*) ;
 int FUNC_27 (struct adapter*,int,int ) ;
 int FUNC_28 (struct adapter*,int,int) ;

__attribute__((used)) static int
FUNC_29(struct cdev *VAR_8, unsigned long VAR_9, caddr_t VAR_10, int VAR_11,
    struct thread *VAR_12)
{
 int VAR_13;
 struct adapter *VAR_14 = VAR_8->si_drv1;

 VAR_13 = FUNC_14(VAR_12, VAR_7);
 if (VAR_13 != 0)
  return (VAR_13);

 switch (VAR_9) {
 case 146: {
  struct t4_reg *VAR_15 = (struct t4_reg *)VAR_10;

  if ((VAR_15->addr & 0x3) != 0 || VAR_15->addr >= VAR_14->mmio_len)
   return (VAR_0);

  if (VAR_15->size == 4)
   VAR_15->val = FUNC_22(VAR_14, VAR_15->addr);
  else if (VAR_15->size == 8)
   VAR_15->val = FUNC_23(VAR_14, VAR_15->addr);
  else
   return (VAR_1);

  break;
 }
 case 132: {
  struct t4_reg *VAR_16 = (struct t4_reg *)VAR_10;

  if ((VAR_16->addr & 0x3) != 0 || VAR_16->addr >= VAR_14->mmio_len)
   return (VAR_0);

  if (VAR_16->size == 4) {
   if (VAR_16->val & 0xffffffff00000000)
    return (VAR_1);
   FUNC_27(VAR_14, VAR_16->addr, (uint32_t) VAR_16->val);
  } else if (VAR_16->size == 8)
   FUNC_28(VAR_14, VAR_16->addr, VAR_16->val);
  else
   return (VAR_1);
  break;
 }
 case 135: {
  struct t4_regdump *VAR_17 = (struct t4_regdump *)VAR_10;
  int VAR_18 = FUNC_20(VAR_14);
  uint8_t *VAR_19;

  if (VAR_17->len < VAR_18) {
   VAR_17->len = VAR_18;
   return (VAR_2);
  }

  VAR_17->len = VAR_18;
  VAR_19 = FUNC_13(VAR_18, VAR_4, VAR_5 | VAR_6);
  FUNC_7(VAR_14, VAR_17, VAR_19);
  VAR_13 = FUNC_1(VAR_19, VAR_17->data, VAR_18);
  FUNC_4(VAR_19, VAR_4);
  break;
 }
 case 144:
  VAR_13 = FUNC_6(VAR_14, (uint32_t *)VAR_10);
  break;
 case 130:
  VAR_13 = FUNC_18(VAR_14, *(uint32_t *)VAR_10);
  break;
 case 145:
  VAR_13 = FUNC_5(VAR_14, (struct t4_filter *)VAR_10);
  break;
 case 131:
  VAR_13 = FUNC_17(VAR_14, (struct t4_filter *)VAR_10);
  break;
 case 147:
  VAR_13 = FUNC_3(VAR_14, (struct t4_filter *)VAR_10);
  break;
 case 141:
  VAR_13 = FUNC_8(VAR_14, (struct t4_sge_context *)VAR_10);
  break;
 case 136:
  VAR_13 = FUNC_12(VAR_14, (struct t4_data *)VAR_10);
  break;
 case 142:
  VAR_13 = FUNC_15(VAR_14, 2, (struct t4_mem_range *)VAR_10);
  break;
 case 143:
  VAR_13 = FUNC_16(VAR_14, (struct t4_i2c_data *)VAR_10);
  break;
 case 149:
  VAR_13 = FUNC_0(VAR_14, *(uint32_t *)VAR_10);
  break;
 case 134:
  VAR_13 = FUNC_24(VAR_14, (struct t4_sched_params *)VAR_10);
  break;
 case 133:
  VAR_13 = FUNC_25(VAR_14, (struct t4_sched_queue *)VAR_10);
  break;
 case 140:
  VAR_13 = FUNC_21(VAR_14, (struct t4_tracer *)VAR_10);
  break;
 case 128:
  VAR_13 = FUNC_26(VAR_14, (struct t4_tracer *)VAR_10);
  break;
 case 137:
  VAR_13 = FUNC_11(VAR_14, (struct t4_data *)VAR_10);
  break;
 case 139:
  VAR_13 = FUNC_9(VAR_14, (struct t4_bootrom *)VAR_10);
  break;
 case 138:
  VAR_13 = FUNC_10(VAR_14, (struct t4_data *)VAR_10);
  break;
 case 148:
  VAR_13 = FUNC_2(VAR_14, (struct t4_cudbg_dump *)VAR_10);
  break;
 case 129:
  VAR_13 = FUNC_19(VAR_14, (struct t4_offload_policy *)VAR_10);
  break;
 default:
  VAR_13 = VAR_3;
 }

 return (VAR_13);
}
