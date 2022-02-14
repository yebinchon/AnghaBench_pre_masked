
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pt_insn_ext {int size; int iclass; int raw; int truncated; int ip; int mode; } ;
struct pt_insn {int size; int iclass; int raw; int truncated; int ip; int mode; } ;
struct pt_block_decoder {int ip; int asid; int image; int mode; } ;
struct pt_block {int truncated; int size; int iclass; int raw; } ;
typedef int insn ;
typedef int iext ;


 int FUNC_0 (int ,int ,int ) ;
 int FUNC_1 (struct pt_insn_ext*,int ,int) ;
 int FUNC_2 (struct pt_block_decoder*,struct pt_insn_ext*,struct pt_insn_ext*) ;
 int FUNC_3 (struct pt_block_decoder*,struct pt_insn_ext*,struct pt_insn_ext*) ;
 int FUNC_4 (struct pt_insn_ext*,struct pt_insn_ext*,int ,int *) ;
 int FUNC_5 (int *,struct pt_insn_ext*,struct pt_insn_ext*) ;
 int VAR_0 ;
 int VAR_1 ;

__attribute__((used)) static int FUNC_6(struct pt_block_decoder *VAR_2,
        struct pt_block *VAR_3)
{
 struct pt_insn_ext VAR_4;
 struct pt_insn VAR_5;
 int VAR_6;

 if (!VAR_2 || !VAR_3)
  return -VAR_1;

 FUNC_1(&VAR_4, 0, sizeof(VAR_4));
 FUNC_1(&VAR_5, 0, sizeof(VAR_5));

 VAR_5.mode = VAR_2->mode;
 VAR_5.ip = VAR_2->ip;

 VAR_6 = FUNC_4(&VAR_5, &VAR_4, VAR_2->image, &VAR_2->asid);
 if (VAR_6 < 0)
  return VAR_6;


 if (!VAR_5.truncated)
  return -VAR_1;


 FUNC_0(VAR_3->raw, VAR_5.raw, VAR_5.size);
 VAR_3->iclass = VAR_5.iclass;
 VAR_3->size = VAR_5.size;
 VAR_3->truncated = 1;


 VAR_6 = FUNC_2(VAR_2, &VAR_5, &VAR_4);
 if (VAR_6 < 0)
  return VAR_6;






 VAR_6 = FUNC_5(&VAR_2->ip, &VAR_5, &VAR_4);
 if (VAR_6 < 0) {
  if (VAR_6 != -VAR_0)
   return VAR_6;

  return FUNC_3(VAR_2, &VAR_5, &VAR_4);
 }

 return 0;
}
