
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct pt_insn_ext {int iclass; } ;
struct pt_insn {int ip; int mode; } ;
struct TYPE_5__ {int ip; int at; } ;
struct TYPE_4__ {int ip; } ;
struct TYPE_6__ {TYPE_2__ async_disabled; TYPE_1__ disabled; } ;
struct pt_event {TYPE_3__ variant; int type; } ;
struct pt_block_decoder {int asid; int image; int mode; } ;




 int FUNC_0 (struct pt_insn*,struct pt_insn_ext*,int ,int *) ;
 int VAR_0 ;
 int VAR_1 ;

__attribute__((used)) static int FUNC_1(struct pt_block_decoder *VAR_2,
     struct pt_event *VAR_3)
{
 struct pt_insn_ext VAR_4;
 struct pt_insn VAR_5;
 int VAR_6;

 if (!VAR_2 || !VAR_3)
  return -VAR_0;

 VAR_5.mode = VAR_2->mode;
 VAR_5.ip = VAR_3->variant.async_disabled.at;

 VAR_6 = FUNC_0(&VAR_5, &VAR_4, VAR_2->image, &VAR_2->asid);
 if (VAR_6 < 0)
  return 0;

 switch (VAR_4.iclass) {
 default:

  return 0;

 case 129:
 case 128:






  VAR_3->type = VAR_1;
  VAR_3->variant.disabled.ip = VAR_3->variant.async_disabled.ip;

  return 1;
 }
}
