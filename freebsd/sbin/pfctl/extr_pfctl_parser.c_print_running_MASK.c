
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pf_status {scalar_t__ running; } ;


 int FUNC_0 (char*,char*) ;

void
FUNC_1(struct pf_status *VAR_0)
{
 FUNC_0("%s\n", VAR_0->running ? "Enabled" : "Disabled");
}
