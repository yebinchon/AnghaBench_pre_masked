
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct witness_lock_order_key {scalar_t__ from; scalar_t__ to; } ;



__attribute__((used)) static __inline int
FUNC_0(const struct witness_lock_order_key *VAR_0,
    const struct witness_lock_order_key *VAR_1)
{

 return (VAR_0->from == VAR_1->from && VAR_0->to == VAR_1->to);
}
