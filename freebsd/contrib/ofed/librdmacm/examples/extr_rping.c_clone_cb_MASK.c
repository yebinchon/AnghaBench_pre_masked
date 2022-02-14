
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct rping_cb {TYPE_1__* child_cm_id; } ;
struct TYPE_2__ {struct rping_cb* context; } ;


 struct rping_cb* FUNC_0 (int) ;
 int FUNC_1 (struct rping_cb*,int ,int) ;

__attribute__((used)) static struct rping_cb *FUNC_2(struct rping_cb *VAR_0)
{
 struct rping_cb *VAR_1 = FUNC_0(sizeof *VAR_1);
 if (!VAR_1)
  return ((void*)0);
 FUNC_1(VAR_1, 0, sizeof *VAR_1);
 *VAR_1 = *VAR_0;
 VAR_1->child_cm_id->context = VAR_1;
 return VAR_1;
}
