
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct rate_control_ref {TYPE_3__* ops; TYPE_2__* local; int priv; } ;
struct TYPE_6__ {int (* free ) (int ) ;} ;
struct TYPE_4__ {int * rcdir; } ;
struct TYPE_5__ {TYPE_1__ debugfs; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (TYPE_3__*) ;
 int FUNC_2 (struct rate_control_ref*) ;
 int FUNC_3 (int ) ;

__attribute__((used)) static void FUNC_4(struct rate_control_ref *VAR_0)
{
 VAR_0->ops->free(VAR_0->priv);






 FUNC_1(VAR_0->ops);
 FUNC_2(VAR_0);
}
