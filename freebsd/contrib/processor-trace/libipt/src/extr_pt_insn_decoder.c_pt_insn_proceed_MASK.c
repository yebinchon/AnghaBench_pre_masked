
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ uint64_t ;
struct TYPE_3__ {scalar_t__ displacement; scalar_t__ is_direct; } ;
struct TYPE_4__ {TYPE_1__ branch; } ;
struct pt_insn_ext {TYPE_2__ variant; } ;
struct pt_insn_decoder {int status; int ip; int retstack; } ;
struct pt_insn {int iclass; scalar_t__ size; } ;
typedef scalar_t__ int64_t ;


 int FUNC_0 (struct pt_insn_decoder*,int*) ;
 int FUNC_1 (struct pt_insn_decoder*,int *) ;
 int FUNC_2 (int *,int *) ;
 int FUNC_3 (int *,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;

__attribute__((used)) static int FUNC_4(struct pt_insn_decoder *VAR_5,
      const struct pt_insn *VAR_6,
      const struct pt_insn_ext *VAR_7)
{
 if (!VAR_5 || !VAR_6 || !VAR_7)
  return -VAR_2;


 VAR_5->ip += VAR_6->size;







 switch (VAR_6->iclass) {
 case 129:
 case 130:
  return 0;

 case 136: {
  int VAR_8, VAR_9;

  VAR_8 = FUNC_0(VAR_5, &VAR_9);
  if (VAR_8 < 0)
   return VAR_8;

  VAR_5->status = VAR_8;
  if (!VAR_9)
   return 0;

  break;
 }

 case 137:





  if (VAR_7->variant.branch.displacement ||
      !VAR_7->variant.branch.is_direct)
   FUNC_3(&VAR_5->retstack, VAR_5->ip);

  break;

 case 128: {
  int VAR_10, VAR_11;


  VAR_11 = FUNC_0(VAR_5, &VAR_10);
  if (VAR_11 >= 0) {
   VAR_5->status = VAR_11;




   if (!VAR_10)
    return -VAR_1;

   return FUNC_2(&VAR_5->retstack,
            &VAR_5->ip);
  }

  break;
 }

 case 131:
 case 134:
 case 132:
 case 133:
  break;

 case 135:
  return -VAR_0;
 }






 if (VAR_7->variant.branch.is_direct)
  VAR_5->ip += (uint64_t) (int64_t)
   VAR_7->variant.branch.displacement;
 else {
  int VAR_12;

  VAR_12 = FUNC_1(VAR_5, &VAR_5->ip);

  if (VAR_12 < 0)
   return VAR_12;

  VAR_5->status = VAR_12;


  if (VAR_12 & VAR_4)
   return -VAR_3;
 }

 return 0;
}
