
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sk_buff {int dummy; } ;
struct mesh_path {int sdata; int frame_queue; } ;


 int FUNC_0 (int ,struct sk_buff*) ;
 struct sk_buff* FUNC_1 (int *) ;

void FUNC_2(struct mesh_path *VAR_0)
{
 struct sk_buff *VAR_1;

 while ((VAR_1 = FUNC_1(&VAR_0->frame_queue)) != ((void*)0))
  FUNC_0(VAR_0->sdata, VAR_1);
}
