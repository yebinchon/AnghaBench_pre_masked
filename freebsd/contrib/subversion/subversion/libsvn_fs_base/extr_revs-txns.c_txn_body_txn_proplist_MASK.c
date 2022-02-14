
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {scalar_t__ kind; int proplist; } ;
typedef TYPE_1__ transaction_t ;
struct TYPE_7__ {int fs; int pool; } ;
typedef TYPE_2__ trail_t ;
typedef int svn_error_t ;
struct txn_proplist_args {int * table_p; int id; } ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int * VAR_1 ;
 int FUNC_1 (TYPE_1__**,int ,int ,int ,TYPE_2__*,int ) ;
 int * FUNC_2 (int ,int ) ;
 scalar_t__ VAR_2 ;

__attribute__((used)) static svn_error_t *
FUNC_3(void *VAR_3, trail_t *VAR_4)
{
  transaction_t *VAR_5;
  struct txn_proplist_args *VAR_6 = VAR_3;

  FUNC_0(FUNC_1(&VAR_5, VAR_4->fs, VAR_6->id, VAR_0, VAR_4, VAR_4->pool));
  if (VAR_5->kind != VAR_2)
    return FUNC_2(VAR_4->fs, VAR_6->id);

  *(VAR_6->table_p) = VAR_5->proplist;
  return VAR_1;
}
