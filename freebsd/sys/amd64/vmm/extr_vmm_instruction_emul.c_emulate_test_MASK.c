
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint64_t ;
struct TYPE_2__ {int op_byte; } ;
struct vie {int opsize; int reg; int immediate; TYPE_1__ op; } ;
typedef int mem_region_write_t ;
typedef int (* mem_region_read_t ) (void*,int,int,int*,int,void*) ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (int,int,int ) ;
 int FUNC_1 (void*,int,int ,int*) ;
 int FUNC_2 (void*,int,int ,int,int) ;

__attribute__((used)) static int
FUNC_3(void *VAR_6, int VAR_7, uint64_t VAR_8, struct vie *VAR_9,
    mem_region_read_t VAR_10, mem_region_write_t VAR_11, void *VAR_12)
{
 int VAR_13, VAR_14;
 uint64_t VAR_15, VAR_16, VAR_17;

 VAR_14 = VAR_9->opsize;
 VAR_13 = VAR_0;

 switch (VAR_9->op.op_byte) {
 case 0xF7:
  if ((VAR_9->reg & 7) != 0)
   return (VAR_0);

  VAR_13 = VAR_10(VAR_6, VAR_7, VAR_8, &VAR_15, VAR_14, VAR_12);
  if (VAR_13)
   return (VAR_13);

  VAR_17 = FUNC_0(VAR_14, VAR_15, VAR_9->immediate);
  break;
 default:
  return (VAR_0);
 }
 VAR_13 = FUNC_1(VAR_6, VAR_7, VAR_5, &VAR_16);
 if (VAR_13)
  return (VAR_13);





 VAR_16 &= ~VAR_4;
 VAR_16 |= VAR_17 & (VAR_2 | VAR_3 | VAR_1);

 VAR_13 = FUNC_2(VAR_6, VAR_7, VAR_5, VAR_16, 8);
 return (VAR_13);
}
