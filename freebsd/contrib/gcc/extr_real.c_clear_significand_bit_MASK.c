
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {unsigned long* sig; } ;
typedef TYPE_1__ REAL_VALUE_TYPE ;


 unsigned int VAR_0 ;

__attribute__((used)) static inline void
FUNC_0 (REAL_VALUE_TYPE *VAR_1, unsigned int VAR_2)
{
  VAR_1->sig[VAR_2 / VAR_0]
    &= ~((unsigned long)1 << (VAR_2 % VAR_0));
}
