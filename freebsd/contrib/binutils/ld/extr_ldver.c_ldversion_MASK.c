
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {char* emulation_name; } ;
typedef TYPE_1__ ld_emulation_xfer_type ;


 char* VAR_0 ;
 char* FUNC_0 (char*) ;
 int FUNC_1 (int ,char*,char*) ;
 TYPE_1__** VAR_1 ;
 int FUNC_2 (char*,...) ;
 int VAR_2 ;

void
FUNC_3 (int VAR_3)
{

  FUNC_1 (VAR_2, FUNC_0("GNU ld %s\n"), VAR_0);

  if (VAR_3 & 2)
    {
      FUNC_2 (FUNC_0("Copyright 2007 Free Software Foundation, Inc.\n"));
      FUNC_2 (FUNC_0("This program is free software; you may redistribute it under the terms of\nthe GNU General Public License.  This program has absolutely no warranty.\n"));


    }

  if (VAR_3 & 1)
    {
      ld_emulation_xfer_type **VAR_4 = VAR_1;

      FUNC_2 (FUNC_0("  Supported emulations:\n"));
      while (*VAR_4)
 {
   FUNC_2 ("   %s\n", (*VAR_4)->emulation_name);
   VAR_4++;
 }
    }
}
