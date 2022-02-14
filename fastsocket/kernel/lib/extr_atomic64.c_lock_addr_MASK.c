
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int spinlock_t ;
typedef int atomic64_t ;
struct TYPE_2__ {int lock; } ;


 unsigned long VAR_0 ;
 int VAR_1 ;
 TYPE_1__* VAR_2 ;

__attribute__((used)) static inline spinlock_t *FUNC_0(const atomic64_t *VAR_3)
{
 unsigned long VAR_4 = (unsigned long) VAR_3;

 VAR_4 >>= VAR_0;
 VAR_4 ^= (VAR_4 >> 8) ^ (VAR_4 >> 16);
 return &VAR_2[VAR_4 & (VAR_1 - 1)].lock;
}
