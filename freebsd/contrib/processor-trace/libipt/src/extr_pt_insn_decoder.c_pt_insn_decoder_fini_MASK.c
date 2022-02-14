
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pt_insn_decoder {int query; int default_image; int scache; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;

void FUNC_3(struct pt_insn_decoder *VAR_0)
{
 if (!VAR_0)
  return;

 FUNC_1(&VAR_0->scache);
 FUNC_0(&VAR_0->default_image);
 FUNC_2(&VAR_0->query);
}
