
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int root; scalar_t__ count; } ;
struct mesh_area {int qbuf_bak; int histogram; TYPE_1__ all; } ;


 int FUNC_0 (struct mesh_area*) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;

void
FUNC_4(struct mesh_area* VAR_0)
{
 if(!VAR_0)
  return;

 while(VAR_0->all.count)
  FUNC_1(VAR_0->all.root);
 FUNC_3(VAR_0->histogram);
 FUNC_2(VAR_0->qbuf_bak);
 FUNC_0(VAR_0);
}
