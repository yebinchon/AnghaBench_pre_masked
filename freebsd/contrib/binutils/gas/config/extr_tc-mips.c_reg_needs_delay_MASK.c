
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_7__ {TYPE_1__* insn_mo; } ;
struct TYPE_6__ {int noreorder; } ;
struct TYPE_5__ {unsigned long pinfo; } ;


 unsigned int FUNC_0 (int ,TYPE_3__) ;
 unsigned long VAR_0 ;
 unsigned long VAR_1 ;
 unsigned long VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 TYPE_3__* VAR_6 ;
 int FUNC_1 (unsigned long) ;
 TYPE_2__ VAR_7 ;

__attribute__((used)) static int
FUNC_2 (unsigned int VAR_8)
{
  unsigned long VAR_9;

  VAR_9 = VAR_6[0].insn_mo->pinfo;
  if (! VAR_7.noreorder
      && (((VAR_9 & VAR_1)
    && ! VAR_5)
   || ((VAR_9 & VAR_0)
       && ! VAR_4)))
    {



      FUNC_1 (VAR_9 & VAR_2);
      if (VAR_8 == FUNC_0 (VAR_3, VAR_6[0]))
 return 1;
    }

  return 0;
}
