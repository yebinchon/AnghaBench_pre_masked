
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct ib_cm_device {int dummy; } ;
struct TYPE_2__ {void* context; struct ib_cm_device* device; } ;
struct cm_id_private {int cond; int mut; TYPE_1__ id; } ;


 int FUNC_0 (struct cm_id_private*) ;
 struct cm_id_private* FUNC_1 (int) ;
 int FUNC_2 (struct cm_id_private*,int ,int) ;
 scalar_t__ FUNC_3 (int *,int *) ;
 int FUNC_4 (int *,int *) ;

__attribute__((used)) static struct cm_id_private *FUNC_5(struct ib_cm_device *VAR_0,
         void *VAR_1)
{
 struct cm_id_private *VAR_2;

 VAR_2 = FUNC_1(sizeof *VAR_2);
 if (!VAR_2)
  return ((void*)0);

 FUNC_2(VAR_2, 0, sizeof *VAR_2);
 VAR_2->id.device = VAR_0;
 VAR_2->id.context = VAR_1;
 FUNC_4(&VAR_2->mut, ((void*)0));
 if (FUNC_3(&VAR_2->cond, ((void*)0)))
  goto err;

 return VAR_2;

err: FUNC_0(VAR_2);
 return ((void*)0);
}
