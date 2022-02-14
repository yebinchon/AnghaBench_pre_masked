
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {char* emulation_name; } ;
typedef TYPE_1__ ld_emulation_xfer_type ;
typedef scalar_t__ bfd_boolean ;
typedef int FILE ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (int *,char*,...) ;
 TYPE_1__** VAR_2 ;

void
FUNC_1 (FILE *VAR_3)
{
  ld_emulation_xfer_type **VAR_4 = VAR_2;
  bfd_boolean VAR_5 = VAR_1;

  for (; *VAR_4; VAR_4++)
    {
      if (VAR_5)
 VAR_5 = VAR_0;
      else
 FUNC_0 (VAR_3, " ");
      FUNC_0 (VAR_3, "%s", (*VAR_4)->emulation_name);
    }
}
