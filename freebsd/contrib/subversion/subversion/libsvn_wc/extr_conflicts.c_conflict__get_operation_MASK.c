
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {struct TYPE_6__* children; TYPE_1__* next; } ;
typedef TYPE_2__ svn_skel_t ;
typedef int svn_error_t ;
struct TYPE_5__ {int is_atom; } ;


 int FUNC_0 (int) ;
 int * VAR_0 ;

__attribute__((used)) static svn_error_t *
FUNC_1(svn_skel_t **VAR_1,
                        const svn_skel_t *VAR_2)
{
  FUNC_0(VAR_2
                 && VAR_2->children
                 && VAR_2->children->next
                 && !VAR_2->children->next->is_atom);

  *VAR_1 = VAR_2->children;

  if (!(*VAR_1)->children)
    *VAR_1 = ((void*)0);

  return VAR_0;
}
