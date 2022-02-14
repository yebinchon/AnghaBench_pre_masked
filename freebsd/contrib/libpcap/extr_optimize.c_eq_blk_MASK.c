
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {scalar_t__ succ; } ;
struct TYPE_4__ {scalar_t__ succ; } ;
struct TYPE_6__ {scalar_t__ code; scalar_t__ k; } ;
struct block {int stmts; TYPE_2__ ef; TYPE_1__ et; TYPE_3__ s; } ;


 int FUNC_0 (int ,int ) ;

__attribute__((used)) static inline int
FUNC_1(struct block *VAR_0, struct block *VAR_1)
{
 if (VAR_0->s.code == VAR_1->s.code &&
     VAR_0->s.k == VAR_1->s.k &&
     VAR_0->et.succ == VAR_1->et.succ &&
     VAR_0->ef.succ == VAR_1->ef.succ)
  return FUNC_0(VAR_0->stmts, VAR_1->stmts);
 return 0;
}
