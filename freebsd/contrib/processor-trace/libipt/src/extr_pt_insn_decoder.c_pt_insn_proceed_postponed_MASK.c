
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pt_insn_decoder {int iext; int insn; int enabled; int process_insn; } ;


 int FUNC_0 (struct pt_insn_decoder*) ;
 int FUNC_1 (struct pt_insn_decoder*,int *,int *) ;
 int VAR_0 ;

__attribute__((used)) static int FUNC_2(struct pt_insn_decoder *VAR_1)
{
 int VAR_2;

 if (!VAR_1)
  return -VAR_0;

 if (!VAR_1->process_insn)
  return -VAR_0;


 if (!VAR_1->enabled)
  return FUNC_0(VAR_1);

 VAR_2 = FUNC_1(VAR_1, &VAR_1->insn, &VAR_1->iext);
 if (VAR_2 < 0)
  return VAR_2;

 return FUNC_0(VAR_1);
}
