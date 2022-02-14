
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int hw; } ;
struct amixer_mgr {TYPE_1__ mgr; } ;
struct amixer_desc {int msr; } ;
struct TYPE_4__ {int * ops; } ;
struct amixer {int * sum; int * input; int * ops; TYPE_2__ rsc; int * idx; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct amixer*,int *,int ,int *) ;
 int FUNC_1 (TYPE_2__*,int ,int ,int ,int ) ;

__attribute__((used)) static int FUNC_2(struct amixer *VAR_3,
      const struct amixer_desc *VAR_4,
      struct amixer_mgr *VAR_5)
{
 int VAR_6;

 VAR_6 = FUNC_1(&VAR_3->rsc, VAR_3->idx[0],
   VAR_0, VAR_4->msr, VAR_5->mgr.hw);
 if (VAR_6)
  return VAR_6;


 VAR_3->rsc.ops = &VAR_1;
 VAR_3->ops = &VAR_2;
 VAR_3->input = ((void*)0);
 VAR_3->sum = ((void*)0);

 FUNC_0(VAR_3, ((void*)0), 0, ((void*)0));

 return 0;
}
