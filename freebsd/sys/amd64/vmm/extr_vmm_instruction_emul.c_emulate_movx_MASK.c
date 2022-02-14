
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint8_t ;
typedef int uint64_t ;
typedef int uint16_t ;
struct TYPE_2__ {int op_byte; } ;
struct vie {int opsize; size_t reg; TYPE_1__ op; } ;
typedef int mem_region_write_t ;
typedef int (* mem_region_read_t ) (void*,int,int ,int *,int,void*) ;
typedef int int8_t ;
typedef enum vm_reg_name { ____Placeholder_vm_reg_name } vm_reg_name ;


 int VAR_0 ;
 int* VAR_1 ;
 int FUNC_0 (void*,int,int,int ,int) ;

__attribute__((used)) static int
FUNC_1(void *VAR_2, int VAR_3, uint64_t VAR_4, struct vie *VAR_5,
      mem_region_read_t VAR_6, mem_region_write_t VAR_7,
      void *VAR_8)
{
 int VAR_9, VAR_10;
 enum vm_reg_name VAR_11;
 uint64_t VAR_12;

 VAR_10 = VAR_5->opsize;
 VAR_9 = VAR_0;

 switch (VAR_5->op.op_byte) {
 case 0xB6:
  VAR_9 = VAR_6(VAR_2, VAR_3, VAR_4, &VAR_12, 1, VAR_8);
  if (VAR_9)
   break;


  VAR_11 = VAR_1[VAR_5->reg];


  VAR_12 = (uint8_t)VAR_12;


  VAR_9 = FUNC_0(VAR_2, VAR_3, VAR_11, VAR_12, VAR_10);
  break;
 case 0xB7:







  VAR_9 = VAR_6(VAR_2, VAR_3, VAR_4, &VAR_12, 2, VAR_8);
  if (VAR_9)
   return (VAR_9);

  VAR_11 = VAR_1[VAR_5->reg];


  VAR_12 = (uint16_t)VAR_12;

  VAR_9 = FUNC_0(VAR_2, VAR_3, VAR_11, VAR_12, VAR_10);
  break;
 case 0xBE:
  VAR_9 = VAR_6(VAR_2, VAR_3, VAR_4, &VAR_12, 1, VAR_8);
  if (VAR_9)
   break;


  VAR_11 = VAR_1[VAR_5->reg];


  VAR_12 = (int8_t)VAR_12;


  VAR_9 = FUNC_0(VAR_2, VAR_3, VAR_11, VAR_12, VAR_10);
  break;
 default:
  break;
 }
 return (VAR_9);
}
