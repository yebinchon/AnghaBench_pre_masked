
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int notationName; } ;
typedef TYPE_1__ NotationList ;


 int FUNC_0 (int ,int ) ;

__attribute__((used)) static int
FUNC_1(const void *VAR_0, const void *VAR_1)
{
  const NotationList * const VAR_2 = *(NotationList **)VAR_0;
  const NotationList * const VAR_3 = *(NotationList **)VAR_1;

  return FUNC_0(VAR_2->notationName, VAR_3->notationName);
}
