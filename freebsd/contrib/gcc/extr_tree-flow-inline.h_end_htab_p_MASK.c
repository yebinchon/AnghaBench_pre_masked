
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {scalar_t__ slot; scalar_t__ limit; } ;
typedef TYPE_1__ htab_iterator ;



__attribute__((used)) static inline bool
FUNC_0 (htab_iterator *VAR_0)
{
  if (VAR_0->slot >= VAR_0->limit)
    return 1;
  return 0;
}
