
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_9__ {TYPE_1__* next; struct TYPE_9__* children; scalar_t__ len; scalar_t__ is_atom; } ;
typedef TYPE_2__ svn_skel_t ;
typedef int svn_boolean_t ;
struct TYPE_8__ {scalar_t__ is_atom; TYPE_2__* next; scalar_t__ len; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (TYPE_2__*,TYPE_2__**) ;
 int FUNC_1 (TYPE_2__*) ;
 scalar_t__ FUNC_2 (TYPE_2__*,char*) ;

__attribute__((used)) static svn_boolean_t
FUNC_3(svn_skel_t *VAR_2)
{
  int VAR_3 = FUNC_1(VAR_2);
  svn_skel_t *VAR_4 = VAR_2->children;
  svn_skel_t *VAR_5;

  if (VAR_3 < 1)
    return VAR_0;

  if (! FUNC_0(VAR_4, &VAR_5))
    return VAR_0;

  if (FUNC_2(VAR_5, "dir"))
    {
      if (! ((VAR_3 == 3)
             && VAR_4->next->is_atom
             && VAR_4->next->next->is_atom))
        return VAR_0;
    }
  else if (FUNC_2(VAR_5, "file"))
    {
      if (VAR_3 < 3)
        return VAR_0;

      if (! VAR_4->next->is_atom)
        return VAR_0;



      if (! VAR_4->next->next->is_atom)
        {
          if (! ((FUNC_1(VAR_4->next->next) == 2)
                 && VAR_4->next->next->children->is_atom
                 && VAR_4->next->next->children->len
                 && VAR_4->next->next->children->next->is_atom
                 && VAR_4->next->next->children->next->len))
            return VAR_0;
        }

      if ((VAR_3 > 3) && (! VAR_4->next->next->next->is_atom))
        return VAR_0;

      if (VAR_3 > 4)
        return VAR_0;
    }

  return VAR_1;
}
