
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct ui_file {int dummy; } ;
struct cmd_list_element {char* doc; char* prefixname; TYPE_2__* hook_post; TYPE_1__* hook_pre; int class; int * func; struct cmd_list_element** prefixlist; } ;
struct TYPE_4__ {int name; } ;
struct TYPE_3__ {int name; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct ui_file*,char*,...) ;
 int FUNC_1 (char*,struct ui_file*) ;
 int FUNC_2 (struct ui_file*) ;
 int FUNC_3 (struct cmd_list_element*,char*,int ,struct ui_file*) ;
 struct cmd_list_element* FUNC_4 (char**,struct cmd_list_element*,char*,int ,int ) ;
 scalar_t__ FUNC_5 (char*,char*) ;

void
FUNC_6 (char *VAR_2, struct ui_file *VAR_3)
{
  struct cmd_list_element *VAR_4;
  extern struct cmd_list_element *VAR_5;

  if (!VAR_2)
    {
      FUNC_3 (VAR_5, "", VAR_0, VAR_3);
      return;
    }

  if (FUNC_5 (VAR_2, "all") == 0)
    {
      FUNC_2 (VAR_3);
      return;
    }

  VAR_4 = FUNC_4 (&VAR_2, VAR_5, "", 0, 0);

  if (VAR_4 == 0)
    return;
  FUNC_1 (VAR_4->doc, VAR_3);
  FUNC_1 ("\n", VAR_3);

  if (VAR_4->prefixlist == 0 && VAR_4->func != ((void*)0))
    return;
  FUNC_0 (VAR_3, "\n");


  if (VAR_4->prefixlist)
    FUNC_3 (*VAR_4->prefixlist, VAR_4->prefixname, VAR_1, VAR_3);


  if (VAR_4->func == ((void*)0))
    FUNC_3 (VAR_5, "", VAR_4->class, VAR_3);

  if (VAR_4->hook_pre || VAR_4->hook_post)
    FUNC_0 (VAR_3,
                      "\nThis command has a hook (or hooks) defined:\n");

  if (VAR_4->hook_pre)
    FUNC_0 (VAR_3,
                      "\tThis command is run after  : %s (pre hook)\n",
                    VAR_4->hook_pre->name);
  if (VAR_4->hook_post)
    FUNC_0 (VAR_3,
                      "\tThis command is run before : %s (post hook)\n",
                    VAR_4->hook_post->name);
}
