
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__ credit; unsigned long prev; scalar_t__ credit_cap; } ;
struct dsthash_ent {TYPE_1__ rateinfo; } ;


 unsigned long VAR_0 ;

__attribute__((used)) static inline void FUNC_0(struct dsthash_ent *VAR_1, unsigned long VAR_2)
{
 VAR_1->rateinfo.credit += (VAR_2 - VAR_1->rateinfo.prev) * VAR_0;
 if (VAR_1->rateinfo.credit > VAR_1->rateinfo.credit_cap)
  VAR_1->rateinfo.credit = VAR_1->rateinfo.credit_cap;
 VAR_1->rateinfo.prev = VAR_2;
}
