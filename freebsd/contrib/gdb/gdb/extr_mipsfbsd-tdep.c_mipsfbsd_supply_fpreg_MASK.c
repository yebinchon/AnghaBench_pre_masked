
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int fp_implementation_revision; } ;


 scalar_t__ FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 TYPE_1__* FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int,char*) ;

void
FUNC_4 (char *VAR_2, int VAR_3)
{
  int VAR_4;

  for (VAR_4 = VAR_0;
       VAR_4 <= FUNC_1 (VAR_1)->fp_implementation_revision;
       VAR_4++)
    {
      if (VAR_3 == VAR_4 || VAR_3 == -1)
 {
   if (FUNC_0 (VAR_4))
     FUNC_3 (VAR_4, ((void*)0));
   else
            FUNC_3 (VAR_4,
  VAR_2 + ((VAR_4 - VAR_0) * FUNC_2 (VAR_1)));
 }
    }
}
