
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {struct TYPE_4__* next; struct TYPE_4__* children; int is_atom; } ;
typedef TYPE_1__ svn_skel_t ;


 int FUNC_0 (int) ;

void FUNC_1(svn_skel_t *VAR_0, svn_skel_t *VAR_1)
{
  FUNC_0(VAR_0 != ((void*)0) && !VAR_0->is_atom);

  if (VAR_0->children == ((void*)0))
    {
      VAR_0->children = VAR_1;
    }
  else
    {
      VAR_0 = VAR_0->children;
      while (VAR_0->next != ((void*)0))
        VAR_0 = VAR_0->next;
      VAR_0->next = VAR_1;
    }
}
