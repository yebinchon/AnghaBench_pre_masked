
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct hda_gen_spec {int loopback_list; int paths; } ;


 int FUNC_0 (struct hda_gen_spec*) ;
 int FUNC_1 (int *) ;

void FUNC_2(struct hda_gen_spec *VAR_0)
{
 if (!VAR_0)
  return;
 FUNC_0(VAR_0);
 FUNC_1(&VAR_0->paths);
 FUNC_1(&VAR_0->loopback_list);
}
