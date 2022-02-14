
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int * core_read_registers; } ;


 scalar_t__ VAR_0 ;
 TYPE_1__* VAR_1 ;
 int FUNC_0 () ;
 int FUNC_1 (int ,char*) ;
 int VAR_2 ;
 scalar_t__ FUNC_2 (scalar_t__) ;
 int FUNC_3 (char*,int,char*,int) ;

__attribute__((used)) static void
FUNC_4 (int VAR_3)
{
  int VAR_4;

  if (!(VAR_0 && FUNC_2 (VAR_0))
      && (VAR_1 == ((void*)0) || VAR_1->core_read_registers == ((void*)0)))
    {
      FUNC_1 (VAR_2,
       "Can't fetch registers from this type of core file\n");
      return;
    }

  FUNC_3 (".reg", 0, "general-purpose", 1);
  FUNC_3 (".reg2", 2, "floating-point", 0);
  FUNC_3 (".reg-xfp", 3, "extended floating-point", 0);

  FUNC_0 ();
}
