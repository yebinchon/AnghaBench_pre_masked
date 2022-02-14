
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint64_t ;
struct TYPE_3__ {int displacement; int is_direct; } ;
struct TYPE_4__ {TYPE_1__ branch; } ;
struct pt_insn_ext {TYPE_2__ variant; } ;
struct pt_insn {int iclass; int size; int ip; } ;
struct pt_event {int ip_suppressed; } ;
struct pt_config {int addr_filter; } ;
typedef int int64_t ;


 int FUNC_0 (int *,int ) ;
 int VAR_0 ;



__attribute__((used)) static int FUNC_1(const struct pt_event *VAR_1,
        const struct pt_insn *VAR_2,
        const struct pt_insn_ext *VAR_3,
        const struct pt_config *VAR_4)
{
 uint64_t VAR_5;
 int VAR_6;

 if (!VAR_1 || !VAR_2 || !VAR_3 || !VAR_4)
  return -VAR_0;

 if (!VAR_1->ip_suppressed)
  return 0;

 switch (VAR_2->iclass) {
 case 129:
 case 128:

  if (!VAR_3->variant.branch.is_direct)
   break;


  VAR_5 = VAR_2->ip;
  VAR_5 += VAR_2->size;
  VAR_5 += (uint64_t) (int64_t) VAR_3->variant.branch.displacement;

  VAR_6 = FUNC_0(&VAR_4->addr_filter, VAR_5);
  if (VAR_6 <= 0) {
   if (VAR_6 < 0)
    return VAR_6;

   return 1;
  }
  break;

 default:
  break;
 }

 return 0;
}
