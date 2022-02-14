
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int start; int end; } ;
typedef TYPE_1__ pst_syms_struct ;


 TYPE_1__* VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (TYPE_1__*,int) ;

__attribute__((used)) static void
FUNC_1 (int VAR_3, int VAR_4)
{
  if (++VAR_1 > VAR_2)
    {
      VAR_0 = (pst_syms_struct *) FUNC_0 (VAR_0,
         2 * VAR_2 * sizeof (pst_syms_struct));
      VAR_2 *= 2;
    }
  VAR_0[VAR_1 - 1].start = VAR_3;
  VAR_0[VAR_1 - 1].end = VAR_4;
}
