
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {char* name; int cmd; } ;
typedef TYPE_1__ midi_cmdtab ;



char *
FUNC_0(int VAR_0, midi_cmdtab *VAR_1)
{
 while (VAR_1->name != ((void*)0)) {
  if (VAR_0 == VAR_1->cmd)
   return (VAR_1->name);
  VAR_1++;
 }

 return ("unknown");
}
