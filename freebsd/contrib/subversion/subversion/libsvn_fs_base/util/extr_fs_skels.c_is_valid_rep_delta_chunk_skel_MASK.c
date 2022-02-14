
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {scalar_t__ is_atom; struct TYPE_5__* next; struct TYPE_5__* children; } ;
typedef TYPE_1__ svn_skel_t ;
typedef int svn_boolean_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (TYPE_1__*) ;
 scalar_t__ FUNC_1 (TYPE_1__*,char*) ;

__attribute__((used)) static svn_boolean_t
FUNC_2(svn_skel_t *VAR_2)
{
  int VAR_3;
  svn_skel_t *VAR_4;
  svn_skel_t *VAR_5;


  if ((FUNC_0(VAR_2) != 2)
      || (! VAR_2->children->is_atom))
    return VAR_0;


  VAR_4 = VAR_2->children->next;
  VAR_3 = FUNC_0(VAR_4);
  if ((VAR_3 < 3) || (VAR_3 > 4))
    return VAR_0;
  if (! ((! VAR_4->children->is_atom)
         && (VAR_4->children->next->is_atom)
         && (VAR_4->children->next->next->is_atom)))
    return VAR_0;
  if ((VAR_3 == 4)
      && (! VAR_4->children->next->next->next->is_atom))
    return VAR_0;



  VAR_5 = VAR_4->children;
  if ((FUNC_0(VAR_5) == 3)
      && (FUNC_1(VAR_5->children, "svndiff"))
      && ((FUNC_1(VAR_5->children->next, "0"))
          || (FUNC_1(VAR_5->children->next, "1")))
      && (VAR_5->children->next->next->is_atom))
    return VAR_1;

  return VAR_0;
}
