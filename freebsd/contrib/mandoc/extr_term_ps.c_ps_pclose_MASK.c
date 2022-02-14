
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct termp {scalar_t__ type; TYPE_1__* ps; } ;
struct TYPE_2__ {int flags; scalar_t__ psrow; scalar_t__ lastrow; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (struct termp*,char*) ;

__attribute__((used)) static void
FUNC_1(struct termp *VAR_2)
{







 if ( ! (VAR_0 & VAR_2->ps->flags))
  return;

 if (VAR_1 != VAR_2->type)
  FUNC_0(VAR_2, ") Tj\nET\n");
 else if (VAR_2->ps->psrow == VAR_2->ps->lastrow)
  FUNC_0(VAR_2, ")c\n");
 else {
  FUNC_0(VAR_2, ")s\n");
  VAR_2->ps->lastrow = VAR_2->ps->psrow;
 }

 VAR_2->ps->flags &= ~VAR_0;
}
