
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint64_t ;
struct TYPE_2__ {int op_byte; } ;
struct vie {int opsize; size_t reg; TYPE_1__ op; } ;
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
 uint64_t VAR_13, VAR_14, VAR_15, VAR_16, VAR_17;
 enum vm_reg_name VAR_18;

 VAR_12 = VAR_7->opsize;
 VAR_11 = VAR_0;

 switch (VAR_7->op.op_byte) {
 case 0x03:
  VAR_18 = VAR_3[VAR_7->reg];
  VAR_11 = FUNC_1(VAR_4, VAR_5, VAR_18, &VAR_16);
  if (VAR_11)
   break;


  VAR_11 = VAR_8(VAR_4, VAR_5, VAR_6, &VAR_17, VAR_12, VAR_10);
  if (VAR_11)
   break;


  VAR_13 = VAR_16 + VAR_17;
  VAR_11 = FUNC_2(VAR_4, VAR_5, VAR_18, VAR_13, VAR_12);
  break;
 default:
  break;
 }

 if (!VAR_11) {
  VAR_15 = FUNC_0(VAR_12, VAR_16, VAR_17);
  VAR_11 = FUNC_1(VAR_4, VAR_5, VAR_2,
      &VAR_14);
  if (VAR_11)
   return (VAR_11);

  VAR_14 &= ~VAR_1;
  VAR_14 |= VAR_15 & VAR_1;
  VAR_11 = FUNC_2(VAR_4, VAR_5, VAR_2,
      VAR_14, 8);
 }

 return (VAR_11);
}
