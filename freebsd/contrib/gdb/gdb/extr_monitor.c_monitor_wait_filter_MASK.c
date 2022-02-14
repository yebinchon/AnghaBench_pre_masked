
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct target_waitstatus {int dummy; } ;
struct TYPE_2__ {int flags; } ;


 int VAR_0 ;
 TYPE_1__* VAR_1 ;
 int FUNC_0 (int ,char*,char*) ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_1 (char*,int) ;
 int FUNC_2 (char) ;
 scalar_t__ VAR_4 ;

__attribute__((used)) static void
FUNC_3 (char *VAR_5,
       int VAR_6,
       int *VAR_7,
       struct target_waitstatus *VAR_8)
{
  int VAR_9;
  do
    {
      VAR_9 = FUNC_1 (VAR_5, VAR_6);
      *VAR_7 = VAR_9;

      if (VAR_9 <= 0)
 FUNC_0 (VAR_2, "monitor_wait:  excessive response from monitor: %s.", VAR_5);
    }
  while (VAR_9 < 0);



  if (VAR_3 || VAR_4
      || VAR_1->flags & VAR_0)
    {
      int VAR_10;

      for (VAR_10 = 0; VAR_10 < VAR_9 - 1; VAR_10++)
 if (VAR_5[VAR_10] == 0x0f)
   FUNC_2 (VAR_5[++VAR_10]);
    }
}
