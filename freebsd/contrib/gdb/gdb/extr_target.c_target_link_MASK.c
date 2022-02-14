
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int (* to_lookup_symbol ) (char*,scalar_t__*) ;int to_shortname; } ;
typedef scalar_t__ CORE_ADDR ;


 scalar_t__ FUNC_0 (int ,char*) ;
 TYPE_1__ VAR_0 ;
 int FUNC_1 (char*,char*) ;
 int FUNC_2 (char*,scalar_t__*) ;

void
FUNC_3 (char *VAR_1, CORE_ADDR *VAR_2)
{
  if (FUNC_0 (VAR_0.to_shortname, "rombug"))
    {
      (VAR_0.to_lookup_symbol) (VAR_1, VAR_2);
      if (*VAR_2 == 0)
 FUNC_1 ("Unable to link to %s and get relocation in rombug", VAR_1);
    }
  else
    *VAR_2 = (CORE_ADDR) -1;
}
