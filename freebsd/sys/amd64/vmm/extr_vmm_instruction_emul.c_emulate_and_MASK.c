
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint64_t ;
struct TYPE_2__ {int op_byte; } ;
struct vie {int opsize; size_t reg; int immediate; TYPE_1__ op; } ;
typedef int (* mem_region_write_t ) (void*,int,int,int,int,void*) ;
typedef int (* mem_region_read_t ) (void*,int,int,int*,int,void*) ;
typedef enum vm_reg_name { ____Placeholder_vm_reg_name } vm_reg_name ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (int,int,int ) ;
 int* VAR_6 ;
 int FUNC_1 (void*,int,int,int*) ;
 int FUNC_2 (void*,int,int,int,int) ;

__attribute__((used)) static int
FUNC_3(void *VAR_7, int VAR_8, uint64_t VAR_9, struct vie *VAR_10,
     mem_region_read_t VAR_11, mem_region_write_t VAR_12, void *VAR_13)
{
 int VAR_14, VAR_15;
 enum vm_reg_name VAR_16;
 uint64_t VAR_17, VAR_18, VAR_19, VAR_20, VAR_21;

 VAR_15 = VAR_10->opsize;
 VAR_14 = VAR_0;

 switch (VAR_10->op.op_byte) {
 case 0x23:
  VAR_16 = VAR_6[VAR_10->reg];
  VAR_14 = FUNC_1(VAR_7, VAR_8, VAR_16, &VAR_20);
  if (VAR_14)
   break;


  VAR_14 = VAR_11(VAR_7, VAR_8, VAR_9, &VAR_21, VAR_15, VAR_13);
  if (VAR_14)
   break;


  VAR_17 = VAR_20 & VAR_21;
  VAR_14 = FUNC_2(VAR_7, VAR_8, VAR_16, VAR_17, VAR_15);
  break;
 case 0x81:
 case 0x83:
                VAR_14 = VAR_11(VAR_7, VAR_8, VAR_9, &VAR_20, VAR_15, VAR_13);
                if (VAR_14)
   break;





                VAR_17 = VAR_20 & VAR_10->immediate;
                VAR_14 = VAR_12(VAR_7, VAR_8, VAR_9, VAR_17, VAR_15, VAR_13);
  break;
 default:
  break;
 }
 if (VAR_14)
  return (VAR_14);

 VAR_14 = FUNC_1(VAR_7, VAR_8, VAR_5, &VAR_18);
 if (VAR_14)
  return (VAR_14);







 VAR_19 = FUNC_0(VAR_15, VAR_17, 0);
 VAR_18 &= ~VAR_4;
 VAR_18 |= VAR_19 & (VAR_2 | VAR_3 | VAR_1);

 VAR_14 = FUNC_2(VAR_7, VAR_8, VAR_5, VAR_18, 8);
 return (VAR_14);
}
