
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct xfrm_state {TYPE_2__* type; } ;
struct sk_buff {TYPE_1__* sp; } ;
struct flowi {int dummy; } ;
struct TYPE_4__ {int (* reject ) (struct xfrm_state*,struct sk_buff*,struct flowi*) ;} ;
struct TYPE_3__ {int len; struct xfrm_state** xvec; } ;


 int FUNC_0 (struct xfrm_state*,struct sk_buff*,struct flowi*) ;

__attribute__((used)) static inline int
FUNC_1(int VAR_0, struct sk_buff *VAR_1, struct flowi *VAR_2)
{
 struct xfrm_state *VAR_3;

 if (!VAR_1->sp || VAR_0 < 0 || VAR_0 >= VAR_1->sp->len)
  return 0;
 VAR_3 = VAR_1->sp->xvec[VAR_0];
 if (!VAR_3->type->reject)
  return 0;
 return VAR_3->type->reject(VAR_3, VAR_1, VAR_2);
}
