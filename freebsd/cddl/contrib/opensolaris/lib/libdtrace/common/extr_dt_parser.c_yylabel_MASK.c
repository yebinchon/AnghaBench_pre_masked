
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {char const* pcb_region; } ;


 int FUNC_0 (char*,char const*) ;
 TYPE_1__* VAR_0 ;

void
FUNC_1(const char *VAR_1)
{
 FUNC_0("set label to <%s>\n", VAR_1 ? VAR_1 : "NULL");
 VAR_0->pcb_region = VAR_1;
}
