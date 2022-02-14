
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int tree ;
struct TYPE_2__ {unsigned int stack_alignment_needed; } ;


 unsigned int VAR_0 ;
 unsigned int FUNC_0 (int ) ;
 unsigned int FUNC_1 (int ,unsigned int) ;
 unsigned int VAR_1 ;
 int FUNC_2 (int ) ;
 TYPE_1__* VAR_2 ;

__attribute__((used)) static unsigned int
FUNC_3 (tree VAR_3)
{
  unsigned int VAR_4;

  VAR_4 = FUNC_0 (VAR_3);
  VAR_4 = FUNC_1 (FUNC_2 (VAR_3), VAR_4);
  if (VAR_4 > VAR_1)
    VAR_4 = VAR_1;
  if (VAR_2->stack_alignment_needed < VAR_4)
    VAR_2->stack_alignment_needed = VAR_4;

  return VAR_4 / VAR_0;
}
