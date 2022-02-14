
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_7__ {TYPE_3__* children; struct TYPE_7__* next; } ;
typedef TYPE_2__ svn_skel_t ;
typedef int svn_error_t ;
struct TYPE_8__ {TYPE_1__* next; } ;
struct TYPE_6__ {TYPE_2__* children; int is_atom; } ;


 int FUNC_0 (int) ;
 int * VAR_0 ;
 scalar_t__ FUNC_1 (TYPE_3__*,char const*) ;

__attribute__((used)) static svn_error_t *
FUNC_2(svn_skel_t **VAR_1,
                       const svn_skel_t *VAR_2,
                       const char *VAR_3)
{
  svn_skel_t *VAR_4;

  FUNC_0(VAR_2
                 && VAR_2->children
                 && VAR_2->children->next
                 && !VAR_2->children->next->is_atom);

  for(VAR_4 = VAR_2->children->next->children;
      VAR_4;
      VAR_4 = VAR_4->next)
    {
      if (FUNC_1(VAR_4->children, VAR_3))
        {
          *VAR_1 = VAR_4;
          return VAR_0;
        }
    }

  *VAR_1 = ((void*)0);

  return VAR_0;
}
