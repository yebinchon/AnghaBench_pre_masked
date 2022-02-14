
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint64_t ;
struct TYPE_2__ {int op_byte; } ;
struct vie {int opsize; size_t reg; int immediate; TYPE_1__ op; } ;
typedef int mem_region_write_t ;
typedef int (* mem_region_read_t ) (void*,int,int,int*,int,void*) ;
typedef enum vm_reg_name { ____Placeholder_vm_reg_name } vm_reg_name ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int,int,int) ;
 int* VAR_3 ;
 int FUNC_1 (void*,int,int,int*) ;
 int FUNC_2 (void*,int,int,int,int) ;

__attribute__((used)) static int
FUNC_3(void *VAR_4, int VAR_5, uint64_t VAR_6, struct vie *VAR_7,
     mem_region_read_t VAR_8, mem_region_write_t VAR_9, void *VAR_10)
{
 int VAR_11, VAR_12;
 uint64_t VAR_13, VAR_14, VAR_15, VAR_16, VAR_17, VAR_18;
 enum vm_reg_name VAR_19;

 VAR_12 = VAR_7->opsize;
 switch (VAR_7->op.op_byte) {
 case 0x39:
 case 0x3B:
  VAR_19 = VAR_3[VAR_7->reg];
  VAR_11 = FUNC_1(VAR_4, VAR_5, VAR_19, &VAR_13);
  if (VAR_11)
   return (VAR_11);


  VAR_11 = VAR_8(VAR_4, VAR_5, VAR_6, &VAR_14, VAR_12, VAR_10);
  if (VAR_11)
   return (VAR_11);

  if (VAR_7->op.op_byte == 0x3B) {
   VAR_15 = VAR_13;
   VAR_16 = VAR_14;
  } else {
   VAR_15 = VAR_14;
   VAR_16 = VAR_13;
  }
  VAR_18 = FUNC_0(VAR_12, VAR_15, VAR_16);
  break;
 case 0x80:
 case 0x81:
 case 0x83:
  if (VAR_7->op.op_byte == 0x80)
   VAR_12 = 1;


                VAR_11 = VAR_8(VAR_4, VAR_5, VAR_6, &VAR_15, VAR_12, VAR_10);
  if (VAR_11)
   return (VAR_11);

  VAR_18 = FUNC_0(VAR_12, VAR_15, VAR_7->immediate);
  break;
 default:
  return (VAR_0);
 }
 VAR_11 = FUNC_1(VAR_4, VAR_5, VAR_2, &VAR_17);
 if (VAR_11)
  return (VAR_11);
 VAR_17 &= ~VAR_1;
 VAR_17 |= VAR_18 & VAR_1;

 VAR_11 = FUNC_2(VAR_4, VAR_5, VAR_2, VAR_17, 8);
 return (VAR_11);
}
