
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {int proplist; } ;
typedef TYPE_1__ transaction_t ;
struct TYPE_7__ {int pool; int fs; } ;
typedef TYPE_2__ trail_t ;
typedef int svn_error_t ;
struct revision_proplist_args {int * table_p; int rev; } ;


 int FUNC_0 (int ) ;
 int * VAR_0 ;
 int FUNC_1 (TYPE_1__**,int *,int ,int ,TYPE_2__*,int ) ;

__attribute__((used)) static svn_error_t *
FUNC_2(void *VAR_1, trail_t *VAR_2)
{
  struct revision_proplist_args *VAR_3 = VAR_1;
  transaction_t *VAR_4;

  FUNC_0(FUNC_1(&VAR_4, ((void*)0), VAR_2->fs, VAR_3->rev, VAR_2, VAR_2->pool));
  *(VAR_3->table_p) = VAR_4->proplist;
  return VAR_0;
}
