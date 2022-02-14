
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ uint64_t ;
struct TYPE_4__ {int displacement; int is_direct; } ;
struct TYPE_3__ {TYPE_2__ branch; } ;
struct pt_insn_ext {TYPE_1__ variant; } ;
struct pt_insn {int iclass; scalar_t__ size; scalar_t__ ip; } ;
typedef int int64_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;






int FUNC_0(uint64_t *VAR_4, const struct pt_insn *VAR_5,
      const struct pt_insn_ext *VAR_6)
{
 uint64_t VAR_7;

 if (!VAR_5 || !VAR_6)
  return -VAR_3;

 VAR_7 = VAR_5->ip + VAR_5->size;

 switch (VAR_5->iclass) {
 case 128:
 case 129:
  break;

 case 132:
 case 130:
  if (VAR_6->variant.branch.is_direct) {
   VAR_7 += (uint64_t) (int64_t)
    VAR_6->variant.branch.displacement;
   break;
  }

  VAR_0;
 default:
  return -VAR_2;

 case 131:
  return -VAR_1;
 }

 if (VAR_4)
  *VAR_4 = VAR_7;

 return 0;
}
