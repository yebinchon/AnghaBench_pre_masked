
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct pt_insn_ext {int dummy; } ;
struct pt_insn_decoder {int ip; int asid; int image; int mode; } ;
struct pt_insn {int dummy; } ;
struct TYPE_3__ {int ip; int aborted; } ;
struct TYPE_4__ {TYPE_1__ tsx; } ;
struct pt_event {TYPE_2__ variant; } ;


 int VAR_0 ;
 int FUNC_0 (struct pt_insn const*,struct pt_insn_ext const*) ;
 int FUNC_1 (int ,int ,int ,int ,int *,int ) ;
 int VAR_1 ;

__attribute__((used)) static int FUNC_2(struct pt_insn_decoder *VAR_2,
    const struct pt_event *VAR_3,
    const struct pt_insn *VAR_4,
    const struct pt_insn_ext *VAR_5)
{
 int VAR_6;

 if (!VAR_2 || !VAR_3 || !VAR_4 || !VAR_5)
  return -VAR_1;


 if (!VAR_3->variant.tsx.aborted)
  return 0;


 if (!FUNC_0(VAR_4, VAR_5))
  return 0;






 VAR_6 = FUNC_1(VAR_2->ip, VAR_3->variant.tsx.ip,
          VAR_2->mode, VAR_2->image,
          &VAR_2->asid, VAR_0);
 if (VAR_6 > 0)
  return 0;







 VAR_2->ip = VAR_3->variant.tsx.ip;

 return 1;
}
