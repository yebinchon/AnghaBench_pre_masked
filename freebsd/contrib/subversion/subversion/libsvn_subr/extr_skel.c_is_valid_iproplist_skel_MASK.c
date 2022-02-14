
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {struct TYPE_5__* next; int is_atom; struct TYPE_5__* children; } ;
typedef TYPE_1__ svn_skel_t ;
typedef int svn_boolean_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (TYPE_1__ const*) ;

__attribute__((used)) static svn_boolean_t
FUNC_2(const svn_skel_t *VAR_2)
{
  int VAR_3 = FUNC_1(VAR_2);

  if ((VAR_3 >= 0) && (VAR_3 & 1) == 0)
    {
      svn_skel_t *VAR_4;

      for (VAR_4 = VAR_2->children; VAR_4; VAR_4 = VAR_4->next)
        {
          if (!VAR_4->is_atom)
            return VAR_0;

          if (VAR_4->next == ((void*)0))
            return VAR_0;

          VAR_4 = VAR_4->next;

          if (! FUNC_0(VAR_4))
            return VAR_0;
        }

      return VAR_1;
    }

  return VAR_0;
}
