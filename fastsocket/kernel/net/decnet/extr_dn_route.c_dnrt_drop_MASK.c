
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {int rcu_head; } ;
struct TYPE_3__ {TYPE_2__ dst; } ;
struct dn_route {TYPE_1__ u; } ;


 int FUNC_0 (int *,int ) ;
 int VAR_0 ;
 int FUNC_1 (TYPE_2__*) ;

__attribute__((used)) static inline void FUNC_2(struct dn_route *VAR_1)
{
 FUNC_1(&VAR_1->u.dst);
 FUNC_0(&VAR_1->u.dst.rcu_head, VAR_0);
}
