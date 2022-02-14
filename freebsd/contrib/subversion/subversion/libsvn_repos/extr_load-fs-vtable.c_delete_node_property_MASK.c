
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int svn_error_t ;
struct revision_baton {TYPE_1__* pb; int txn_root; scalar_t__ skipped; } ;
struct node_baton {int pool; int path; struct revision_baton* rb; } ;
struct TYPE_2__ {int validate_props; } ;


 int * VAR_0 ;
 int * FUNC_0 (int ,int ,char const*,int *,int ,int ) ;

__attribute__((used)) static svn_error_t *
FUNC_1(void *VAR_1,
                     const char *VAR_2)
{
  struct node_baton *VAR_3 = VAR_1;
  struct revision_baton *VAR_4 = VAR_3->rb;


  if (VAR_4->skipped)
    return VAR_0;

  return FUNC_0(VAR_4->txn_root, VAR_3->path, VAR_2, ((void*)0),
                          VAR_4->pb->validate_props, VAR_3->pool);
}
