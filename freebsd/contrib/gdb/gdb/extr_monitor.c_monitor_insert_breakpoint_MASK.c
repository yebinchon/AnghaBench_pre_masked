
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int flags; int num_breakpoints; int * set_break; } ;
typedef scalar_t__ CORE_ADDR ;


 scalar_t__ FUNC_0 (scalar_t__) ;
 int VAR_0 ;
 scalar_t__* VAR_1 ;
 int VAR_2 ;
 TYPE_1__* VAR_3 ;
 int FUNC_1 (char*,...) ;
 unsigned char* FUNC_2 (int ,scalar_t__*,int*) ;
 int FUNC_3 (char*,int ) ;
 int FUNC_4 (int *,int ) ;
 int FUNC_5 (int *,scalar_t__) ;
 int FUNC_6 (scalar_t__,char*,int) ;
 int FUNC_7 (scalar_t__) ;

__attribute__((used)) static int
FUNC_8 (CORE_ADDR VAR_4, char *VAR_5)
{
  int VAR_6;
  const unsigned char *VAR_7;
  int VAR_8;

  FUNC_3 ("MON inst bkpt %s\n", FUNC_7 (VAR_4));
  if (VAR_3->set_break == ((void*)0))
    FUNC_1 ("No set_break defined for this monitor");

  if (VAR_3->flags & VAR_0)
    VAR_4 = FUNC_0 (VAR_4);


  VAR_7 = FUNC_2 (VAR_2, &VAR_4, &VAR_8);

  for (VAR_6 = 0; VAR_6 < VAR_3->num_breakpoints; VAR_6++)
    {
      if (VAR_1[VAR_6] == 0)
 {
   VAR_1[VAR_6] = VAR_4;
   FUNC_6 (VAR_4, VAR_5, VAR_8);
   FUNC_5 (VAR_3->set_break, VAR_4);
   FUNC_4 (((void*)0), 0);
   return 0;
 }
    }

  FUNC_1 ("Too many breakpoints (> %d) for monitor.", VAR_3->num_breakpoints);
}
