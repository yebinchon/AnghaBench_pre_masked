
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ uint64_t ;
struct TYPE_3__ {int is_direct; int displacement; } ;
struct TYPE_4__ {TYPE_1__ branch; } ;
struct pt_insn_ext {TYPE_2__ variant; } ;
struct pt_insn {int iclass; scalar_t__ size; scalar_t__ ip; } ;
struct pt_block_decoder {int retstack; } ;
typedef int int64_t ;


 int FUNC_0 (struct pt_block_decoder*,int*) ;
 int FUNC_1 (struct pt_block_decoder*,scalar_t__*) ;
 int FUNC_2 (int *,scalar_t__*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
__attribute__((used)) static int FUNC_3(uint64_t *VAR_4, struct pt_block_decoder *VAR_5,
     const struct pt_insn *VAR_6,
     const struct pt_insn_ext *VAR_7)
{
 int VAR_8, VAR_9;

 if (!VAR_4 || !VAR_5 || !VAR_6 || !VAR_7)
  return -VAR_3;






 switch (VAR_6->iclass) {
 case 136: {
  uint64_t VAR_10;
  int VAR_11;

  VAR_8 = FUNC_0(VAR_5, &VAR_11);
  if (VAR_8 < 0)
   return VAR_8;

  VAR_10 = VAR_6->ip + VAR_6->size;
  if (VAR_11)
   VAR_10 += (uint64_t) (int64_t)
    VAR_7->variant.branch.displacement;

  *VAR_4 = VAR_10;
  return VAR_8;
 }

 case 128: {
  int VAR_12;


  VAR_8 = FUNC_0(VAR_5, &VAR_12);
  if (VAR_8 < 0) {
   if (VAR_8 != -VAR_1)
    return VAR_8;

   break;
  }




  if (!VAR_12)
   return -VAR_2;

  VAR_9 = FUNC_2(&VAR_5->retstack, VAR_4);
  if (VAR_9 < 0)
   return VAR_9;

  return VAR_8;
 }

 case 131:
 case 137:

  if (VAR_7->variant.branch.is_direct)
   return -VAR_3;

  break;

 case 134:
 case 132:
 case 133:
  break;

 case 129:
 case 130:
  return -VAR_3;

 case 135:
  return -VAR_0;
 }






 return FUNC_1(VAR_5, VAR_4);
}
