
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {scalar_t__ vma; } ;
typedef TYPE_1__ asection ;
typedef scalar_t__ CORE_ADDR ;


 scalar_t__ FUNC_0 (TYPE_1__*) ;

__attribute__((used)) static int
FUNC_1 (asection *VAR_0, asection *VAR_1)
{


  CORE_ADDR VAR_2 = VAR_0->vma;
  CORE_ADDR VAR_3 = VAR_0->vma + FUNC_0 (VAR_0);
  CORE_ADDR VAR_4 = VAR_1->vma;
  CORE_ADDR VAR_5 = VAR_1->vma + FUNC_0 (VAR_1);

  return (VAR_2 < VAR_5 && VAR_4 < VAR_3);
}
