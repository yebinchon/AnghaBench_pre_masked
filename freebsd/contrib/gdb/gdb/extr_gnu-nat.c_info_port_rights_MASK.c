
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct value {int dummy; } ;
struct inf {TYPE_1__* task; } ;
typedef int mach_port_type_t ;
typedef scalar_t__ error_t ;
struct TYPE_2__ {int port; } ;


 int VAR_0 ;
 struct inf* FUNC_0 () ;
 int FUNC_1 (char*,...) ;
 struct value* FUNC_2 (char**) ;
 scalar_t__ FUNC_3 (long,int ,int ,int ,int ) ;
 scalar_t__ FUNC_4 (int ,int ,int ,int ) ;
 char* FUNC_5 (scalar_t__) ;
 int VAR_1 ;
 long FUNC_6 (struct value*) ;
 int FUNC_7 (struct value*) ;
 struct value* FUNC_8 () ;

__attribute__((used)) static void
FUNC_9 (char *VAR_2, mach_port_type_t VAR_3)
{
  struct inf *VAR_4 = FUNC_0 ();
  struct value *VAR_5 = FUNC_8 ();

  if (VAR_2)

    {
      while (*VAR_2)
 {
   struct value *VAR_6 = FUNC_2 (&VAR_2);
   long VAR_7 = FUNC_6 (VAR_6);
   error_t VAR_8 =
   FUNC_3 (VAR_7, 0, VAR_4->task->port, VAR_0,
      VAR_1);
   if (VAR_8)
     FUNC_1 ("%ld: %s.", VAR_7, FUNC_5 (VAR_8));
 }
    }
  else

    {
      error_t VAR_9 =
      FUNC_4 (VAR_4->task->port, VAR_3, VAR_0,
        VAR_1);
      if (VAR_9)
 FUNC_1 ("%s.", FUNC_5 (VAR_9));
    }

  FUNC_7 (VAR_5);
}
