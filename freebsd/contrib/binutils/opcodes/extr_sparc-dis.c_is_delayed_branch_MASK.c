
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {TYPE_2__* opcode; struct TYPE_4__* next; } ;
typedef TYPE_1__ sparc_opcode_hash ;
struct TYPE_5__ {unsigned long match; unsigned long lose; int flags; } ;
typedef TYPE_2__ sparc_opcode ;


 int VAR_0 ;
 size_t FUNC_0 (unsigned long) ;
 TYPE_1__** VAR_1 ;

__attribute__((used)) static int
FUNC_1 (unsigned long VAR_2)
{
  sparc_opcode_hash *VAR_3;

  for (VAR_3 = VAR_1[FUNC_0 (VAR_2)]; VAR_3; VAR_3 = VAR_3->next)
    {
      const sparc_opcode *VAR_4 = VAR_3->opcode;

      if ((VAR_4->match & VAR_2) == VAR_4->match
   && (VAR_4->lose & VAR_2) == 0)
 return VAR_4->flags & VAR_0;
    }
  return 0;
}
