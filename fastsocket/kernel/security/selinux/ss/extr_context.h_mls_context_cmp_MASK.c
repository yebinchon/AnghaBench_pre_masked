
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {TYPE_1__* level; } ;
struct context {TYPE_2__ range; } ;
struct TYPE_3__ {scalar_t__ sens; int cat; } ;


 scalar_t__ FUNC_0 (int *,int *) ;
 int VAR_0 ;

__attribute__((used)) static inline int FUNC_1(struct context *VAR_1, struct context *VAR_2)
{
 if (!VAR_0)
  return 1;

 return ((VAR_1->range.level[0].sens == VAR_2->range.level[0].sens) &&
  FUNC_0(&VAR_1->range.level[0].cat, &VAR_2->range.level[0].cat) &&
  (VAR_1->range.level[1].sens == VAR_2->range.level[1].sens) &&
  FUNC_0(&VAR_1->range.level[1].cat, &VAR_2->range.level[1].cat));
}
