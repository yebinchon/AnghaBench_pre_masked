
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_7__ {TYPE_3__* children; } ;
typedef TYPE_2__ svn_skel_t ;
typedef int svn_boolean_t ;
struct TYPE_8__ {TYPE_1__* next; } ;
struct TYPE_6__ {scalar_t__ is_atom; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (TYPE_2__*) ;
 scalar_t__ FUNC_1 (TYPE_3__*,char*) ;

__attribute__((used)) static svn_boolean_t
FUNC_2(svn_skel_t *VAR_2)
{
  int VAR_3 = FUNC_0(VAR_2);

  if ((VAR_3 == 2)
      && FUNC_1(VAR_2->children, "revision")
      && VAR_2->children->next->is_atom)
    return VAR_1;

  return VAR_0;
}
