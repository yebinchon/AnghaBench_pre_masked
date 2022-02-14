
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {char* emulation_name; int (* list_options ) (int *) ;} ;
typedef TYPE_1__ ld_emulation_xfer_type ;
typedef int FILE ;


 char* FUNC_0 (char*) ;
 int FUNC_1 (int *,char*,...) ;
 TYPE_1__** VAR_0 ;
 int FUNC_2 (int *) ;

void
FUNC_3 (FILE *VAR_1)
{
  ld_emulation_xfer_type **VAR_2;
  int VAR_3 = 0;

  for (VAR_2 = VAR_0; *VAR_2; VAR_2++)
    {
      ld_emulation_xfer_type *VAR_4 = *VAR_2;

      if (VAR_4->list_options)
 {
   FUNC_1 (VAR_1, "%s: \n", VAR_4->emulation_name);

   VAR_4->list_options (VAR_1);

   VAR_3 = 1;
 }
    }

  if (! VAR_3)
    FUNC_1 (VAR_1, FUNC_0("  no emulation specific options.\n"));
}
