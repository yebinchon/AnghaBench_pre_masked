
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct pex_obj {scalar_t__ count; int flags; int next_input; TYPE_1__* funcs; scalar_t__ next_input_name; } ;
struct TYPE_2__ {scalar_t__ (* pipe ) (struct pex_obj*,int*,int) ;int (* close ) (struct pex_obj*,int) ;int * (* fdopenw ) (struct pex_obj*,int,int) ;} ;
typedef int FILE ;


 int VAR_0 ;
 int VAR_1 ;
 size_t VAR_2 ;
 int VAR_3 ;
 size_t VAR_4 ;
 int VAR_5 ;
 scalar_t__ FUNC_0 (struct pex_obj*,int*,int) ;
 int * FUNC_1 (struct pex_obj*,int,int) ;
 int FUNC_2 (struct pex_obj*,int) ;
 int FUNC_3 (struct pex_obj*,int) ;

FILE *
FUNC_4 (struct pex_obj *VAR_6, int VAR_7)
{
  int VAR_8[2];
  FILE *VAR_9;


  if (VAR_6->count > 0)
    goto usage_error;



  if (! (VAR_6->flags & VAR_1))
    goto usage_error;



  if ((VAR_6->next_input >= 0 && VAR_6->next_input != VAR_3)
      || VAR_6->next_input_name)
    goto usage_error;

  if (VAR_6->funcs->pipe (VAR_6, VAR_8, VAR_7 != 0) < 0)
    return ((void*)0);

  VAR_9 = VAR_6->funcs->fdopenw (VAR_6, VAR_8[VAR_4], VAR_7 != 0);
  if (! VAR_9)
    {
      int VAR_10 = VAR_5;
      VAR_6->funcs->close (VAR_6, VAR_8[VAR_2]);
      VAR_6->funcs->close (VAR_6, VAR_8[VAR_4]);
      VAR_5 = VAR_10;
      return ((void*)0);
    }

  VAR_6->next_input = VAR_8[VAR_2];

  return VAR_9;

 usage_error:
  VAR_5 = VAR_0;
  return ((void*)0);
}
