
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pt_block_decoder {int iext; int insn; int ip; int enabled; int process_insn; } ;


 int FUNC_0 (struct pt_block_decoder*) ;
 int FUNC_1 (struct pt_block_decoder*,int *,int *) ;
 int FUNC_2 (int *,int *,int *) ;
 int VAR_0 ;
 int VAR_1 ;

__attribute__((used)) static int FUNC_3(struct pt_block_decoder *VAR_2)
{
 int VAR_3;

 if (!VAR_2)
  return -VAR_1;


 if (!VAR_2->process_insn)
  return 0;


 if (!VAR_2->enabled)
  return FUNC_0(VAR_2);

 VAR_3 = FUNC_2(&VAR_2->ip, &VAR_2->insn, &VAR_2->iext);
 if (VAR_3 < 0) {
  if (VAR_3 != -VAR_0)
   return VAR_3;

  VAR_3 = FUNC_1(VAR_2, &VAR_2->insn,
         &VAR_2->iext);
  if (VAR_3 < 0)
   return VAR_3;
 }

 return FUNC_0(VAR_2);
}
