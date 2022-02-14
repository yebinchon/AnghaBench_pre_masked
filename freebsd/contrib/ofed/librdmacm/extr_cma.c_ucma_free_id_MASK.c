
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {struct cma_id_private* path_rec; } ;
struct TYPE_3__ {int channel; TYPE_2__ route; } ;
struct cma_id_private {struct cma_id_private* connect; scalar_t__ connect_len; TYPE_1__ id; scalar_t__ sync; int mut; int cond; scalar_t__ cma_dev; } ;


 int FUNC_0 (struct cma_id_private*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (scalar_t__) ;
 int FUNC_5 (struct cma_id_private*) ;

__attribute__((used)) static void FUNC_6(struct cma_id_private *VAR_0)
{
 FUNC_5(VAR_0);
 if (VAR_0->cma_dev)
  FUNC_4(VAR_0->cma_dev);
 FUNC_1(&VAR_0->cond);
 FUNC_2(&VAR_0->mut);
 if (VAR_0->id.route.path_rec)
  FUNC_0(VAR_0->id.route.path_rec);

 if (VAR_0->sync)
  FUNC_3(VAR_0->id.channel);
 if (VAR_0->connect_len)
  FUNC_0(VAR_0->connect);
 FUNC_0(VAR_0);
}
