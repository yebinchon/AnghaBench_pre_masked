
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mem_ref {scalar_t__ prefetch_before; } ;


 scalar_t__ VAR_0 ;

__attribute__((used)) static bool
FUNC_0 (struct mem_ref *VAR_1)
{


  if (VAR_1->prefetch_before != VAR_0)
    return 0;

  return 1;
}
