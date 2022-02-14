
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pt_insn_decoder {int ip; int query; } ;


 int FUNC_0 (struct pt_insn_decoder*) ;
 int FUNC_1 (struct pt_insn_decoder*,int) ;
 int FUNC_2 (int *,int *) ;
 int VAR_0 ;

int FUNC_3(struct pt_insn_decoder *VAR_1)
{
 int VAR_2;

 if (!VAR_1)
  return -VAR_0;

 FUNC_0(VAR_1);

 VAR_2 = FUNC_2(&VAR_1->query, &VAR_1->ip);

 return FUNC_1(VAR_1, VAR_2);
}
