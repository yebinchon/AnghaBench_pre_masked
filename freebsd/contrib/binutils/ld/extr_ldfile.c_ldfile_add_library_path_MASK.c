
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_4__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int sysrooted; int name; struct TYPE_5__* next; scalar_t__ cmdline; } ;
typedef TYPE_1__ search_dirs_type ;
typedef scalar_t__ bfd_boolean ;
struct TYPE_6__ {scalar_t__ only_cmd_line_lib_dirs; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,char const*,int *) ;
 TYPE_4__ VAR_2 ;
 int FUNC_1 (char const*,int ) ;
 int VAR_3 ;
 TYPE_1__** VAR_4 ;
 TYPE_1__* FUNC_2 (int) ;
 int FUNC_3 (char const*) ;

void
FUNC_4 (const char *VAR_5, bfd_boolean VAR_6)
{
  search_dirs_type *VAR_7;

  if (!VAR_6 && VAR_2.only_cmd_line_lib_dirs)
    return;

  VAR_7 = FUNC_2 (sizeof (search_dirs_type));
  VAR_7->next = ((void*)0);
  VAR_7->cmdline = VAR_6;
  *VAR_4 = VAR_7;
  VAR_4 = &VAR_7->next;



  if (VAR_5[0] == '=')
    {
      VAR_7->name = FUNC_0 (VAR_3, VAR_5 + 1, ((void*)0));
      VAR_7->sysrooted = VAR_1;
    }
  else
    {
      VAR_7->name = FUNC_3 (VAR_5);
      VAR_7->sysrooted = FUNC_1 (VAR_5, VAR_0);
    }
}
