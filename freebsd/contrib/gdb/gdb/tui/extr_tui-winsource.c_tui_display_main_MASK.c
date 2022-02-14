
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct symtab_and_line {TYPE_1__* symtab; } ;
struct TYPE_4__ {scalar_t__ count; } ;
struct TYPE_3__ {char* filename; } ;
typedef scalar_t__ CORE_ADDR ;


 struct symtab_and_line FUNC_0 (scalar_t__,int ) ;
 scalar_t__ FUNC_1 () ;
 TYPE_2__* FUNC_2 () ;
 int FUNC_3 (char*) ;
 int FUNC_4 (scalar_t__) ;

void
FUNC_5 (void)
{
  if ((FUNC_2 ())->count > 0)
    {
      CORE_ADDR VAR_0;

      VAR_0 = FUNC_1 ();
      if (VAR_0 != (CORE_ADDR) 0)
 {
   struct symtab_and_line VAR_1;

   FUNC_4 (VAR_0);
   VAR_1 = FUNC_0 (VAR_0, 0);
          if (VAR_1.symtab)
             FUNC_3 (VAR_1.symtab->filename);
          else
             FUNC_3 ("??");
 }
    }
}
