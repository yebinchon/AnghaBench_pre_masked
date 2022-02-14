
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_7__ {TYPE_1__* elements; } ;
typedef TYPE_2__ svn_priority_queue__t ;
struct TYPE_6__ {int nelts; } ;


 scalar_t__ FUNC_0 (TYPE_2__*,int,int) ;
 int FUNC_1 (TYPE_2__*,int,int) ;

__attribute__((used)) static void
FUNC_2(svn_priority_queue__t *VAR_0,
               int VAR_1)
{
  while (2 * VAR_1 + 2 < VAR_0->elements->nelts)
    {
      int VAR_2 = FUNC_0(VAR_0, 2 * VAR_1 + 1, 2 * VAR_1 + 2)
                ? 2 * VAR_1 + 1
                : 2 * VAR_1 + 2;

      if (FUNC_0(VAR_0, VAR_1, VAR_2))
        return;

      FUNC_1(VAR_0, VAR_1, VAR_2);
      VAR_1 = VAR_2;
    }

  if ( 2 * VAR_1 + 1 < VAR_0->elements->nelts
      && FUNC_0(VAR_0, 2 * VAR_1 + 1, VAR_1))
    FUNC_1(VAR_0, 2 * VAR_1 + 1, VAR_1);
}
