
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_7__ {struct TYPE_7__* next; struct TYPE_7__* children; scalar_t__ is_atom; } ;
typedef TYPE_1__ svn_skel_t ;
typedef int svn_boolean_t ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (TYPE_1__*) ;
 int FUNC_2 (TYPE_1__*) ;
 scalar_t__ FUNC_3 (TYPE_1__*,char*) ;

__attribute__((used)) static svn_boolean_t
FUNC_4(svn_skel_t *VAR_2)
{
  int VAR_3 = FUNC_2(VAR_2);
  svn_skel_t *VAR_4;
  int VAR_5;



  if (VAR_3 < 2)
    return VAR_0;



  VAR_4 = VAR_2->children;
  VAR_5 = FUNC_2(VAR_4);
  if (! (((VAR_5 == 2)
          && (VAR_4->children->is_atom)
          && (VAR_4->children->next->is_atom))
         || ((VAR_5 == 3)
             && (VAR_4->children->is_atom)
             && (VAR_4->children->next->is_atom)
             && (FUNC_0(VAR_4->children->next->next)))
         || ((VAR_5 == 4)
             && (VAR_4->children->is_atom)
             && (VAR_4->children->next->is_atom)
             && (FUNC_0(VAR_4->children->next->next))
             && (FUNC_0(VAR_4->children->next->next->next)))))
    return VAR_0;


  if ((VAR_3 == 2)
      && (FUNC_3(VAR_4->children, "fulltext")))
    return VAR_1;


  if ((VAR_3 >= 2)
      && (FUNC_3(VAR_4->children, "delta")))
    {

      svn_skel_t *VAR_6 = VAR_2->children->next;


      while (VAR_6)
        {
          if (! FUNC_1(VAR_6))
            return VAR_0;
          VAR_6 = VAR_6->next;
        }


      return VAR_1;
    }

  return VAR_0;
}
