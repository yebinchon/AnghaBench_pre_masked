
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {struct TYPE_6__ const* next; int is_atom; TYPE_2__* children; } ;
typedef TYPE_1__ const svn_skel_t ;
typedef int svn_boolean_t ;
struct TYPE_7__ {TYPE_1__ const* next; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (TYPE_1__ const*) ;
 int FUNC_1 (TYPE_1__ const*) ;
 int FUNC_2 (TYPE_2__*,char*) ;

__attribute__((used)) static svn_boolean_t
FUNC_3(const svn_skel_t *VAR_1)
{
  int VAR_2;

  if (FUNC_1(VAR_1) != 8
      || !FUNC_2(VAR_1->children, "conflict"))
    return VAR_0;


  VAR_1 = VAR_1->children->next;
  for (VAR_2 = 5; VAR_2--; VAR_1 = VAR_1->next)
    if (!VAR_1->is_atom)
      return VAR_0;


  return (FUNC_0(VAR_1)
          && FUNC_0(VAR_1->next));
}
