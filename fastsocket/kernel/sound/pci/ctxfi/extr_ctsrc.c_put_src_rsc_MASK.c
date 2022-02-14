
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct src_mgr {int mgr_lock; int mgr; } ;
struct TYPE_6__ {TYPE_1__* ops; } ;
struct src {scalar_t__ mode; int multi; TYPE_2__ rsc; } ;
struct TYPE_5__ {int (* index ) (TYPE_2__*) ;int (* master ) (TYPE_2__*) ;} ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (struct src*) ;
 int FUNC_1 (int *,int,int ) ;
 int FUNC_2 (int *,unsigned long) ;
 int FUNC_3 (int *,unsigned long) ;
 int FUNC_4 (struct src*,struct src_mgr*) ;
 int FUNC_5 (TYPE_2__*) ;
 int FUNC_6 (TYPE_2__*) ;
 int FUNC_7 (TYPE_2__*) ;

__attribute__((used)) static int FUNC_8(struct src_mgr *VAR_1, struct src *VAR_2)
{
 unsigned long VAR_3;

 FUNC_2(&VAR_1->mgr_lock, VAR_3);
 VAR_2->rsc.ops->master(&VAR_2->rsc);
 if (VAR_0 == VAR_2->mode)
  FUNC_1(&VAR_1->mgr, VAR_2->multi,
     VAR_2->rsc.ops->index(&VAR_2->rsc));
 else
  FUNC_1(&VAR_1->mgr, 1, VAR_2->rsc.ops->index(&VAR_2->rsc));

 FUNC_3(&VAR_1->mgr_lock, VAR_3);
 FUNC_4(VAR_2, VAR_1);
 FUNC_0(VAR_2);

 return 0;
}
