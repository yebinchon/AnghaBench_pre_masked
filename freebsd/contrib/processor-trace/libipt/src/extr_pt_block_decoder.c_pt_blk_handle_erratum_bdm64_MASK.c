
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct pt_insn_ext {int dummy; } ;
struct pt_insn {int ip; int mode; } ;
struct TYPE_3__ {int ip; int aborted; } ;
struct TYPE_4__ {TYPE_1__ tsx; } ;
struct pt_event {TYPE_2__ variant; } ;
struct pt_block_decoder {int ip; int asid; int image; int mode; } ;
struct pt_block {int end_ip; int mode; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (struct pt_block const*) ;
 int FUNC_1 (struct pt_insn*,struct pt_insn_ext*,int ,int *) ;
 int FUNC_2 (struct pt_insn*,struct pt_insn_ext*) ;
 int FUNC_3 (int ,int ,int ,int ,int *,int ) ;
 int VAR_1 ;

__attribute__((used)) static int FUNC_4(struct pt_block_decoder *VAR_2,
           const struct pt_block *VAR_3,
           const struct pt_event *VAR_4)
{
 struct pt_insn_ext VAR_5;
 struct pt_insn VAR_6;
 int VAR_7;

 if (!VAR_2 || !VAR_3 || !VAR_4)
  return -VAR_1;


 if (!VAR_4->variant.tsx.aborted)
  return 0;






 if (FUNC_0(VAR_3))
  return 0;

 VAR_6.mode = VAR_3->mode;
 VAR_6.ip = VAR_3->end_ip;

 VAR_7 = FUNC_1(&VAR_6, &VAR_5, VAR_2->image, &VAR_2->asid);
 if (VAR_7 < 0)
  return 0;

 if (!FUNC_2(&VAR_6, &VAR_5))
  return 0;






 VAR_7 = FUNC_3(VAR_2->ip, VAR_4->variant.tsx.ip,
          VAR_2->mode, VAR_2->image,
          &VAR_2->asid, VAR_0);
 if (VAR_7 > 0)
  return VAR_7;







 VAR_2->ip = VAR_4->variant.tsx.ip;

 return 1;
}
