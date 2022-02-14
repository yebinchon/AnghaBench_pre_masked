
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {size_t lg_pagesize; } ;


 TYPE_1__ VAR_0 ;

__attribute__((used)) static inline size_t
FUNC_0 (char *VAR_1, char *VAR_2)
{
  return (size_t) (VAR_2 - VAR_1) >> VAR_0.lg_pagesize;
}
