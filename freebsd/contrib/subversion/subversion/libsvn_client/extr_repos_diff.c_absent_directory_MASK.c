
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int svn_error_t ;
struct edit_baton {TYPE_1__* processor; } ;
struct dir_baton {int pdb; struct edit_baton* edit_baton; } ;
typedef int apr_pool_t ;
struct TYPE_2__ {int (* node_absent ) (char const*,int ,TYPE_1__*,int *) ;} ;


 int FUNC_0 (int ) ;
 int * VAR_0 ;
 int FUNC_1 (char const*,int ,TYPE_1__*,int *) ;

__attribute__((used)) static svn_error_t *
FUNC_2(const char *VAR_1,
                 void *VAR_2,
                 apr_pool_t *VAR_3)
{
  struct dir_baton *VAR_4 = VAR_2;
  struct edit_baton *VAR_5 = VAR_4->edit_baton;

  FUNC_0(VAR_5->processor->node_absent(VAR_1, VAR_4->pdb, VAR_5->processor, VAR_3));

  return VAR_0;
}
