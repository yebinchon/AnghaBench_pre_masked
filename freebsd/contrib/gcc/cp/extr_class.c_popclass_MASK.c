
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__ names_used; int access; int type; int name; } ;


 int VAR_0 ;
 size_t VAR_1 ;
 int VAR_2 ;
 TYPE_1__* VAR_3 ;
 int VAR_4 ;
 int FUNC_0 () ;
 int FUNC_1 (scalar_t__) ;

void
FUNC_2 (void)
{
  FUNC_0 ();

  VAR_1--;
  VAR_2 = VAR_3[VAR_1].name;
  VAR_4 = VAR_3[VAR_1].type;
  VAR_0 = VAR_3[VAR_1].access;
  if (VAR_3[VAR_1].names_used)
    FUNC_1 (VAR_3[VAR_1].names_used);
}
