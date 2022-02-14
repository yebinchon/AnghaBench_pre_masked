
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct TYPE_9__ {scalar_t__ kind; } ;
typedef TYPE_1__ transaction_t ;
struct TYPE_10__ {int pool; } ;
typedef TYPE_2__ trail_t ;
struct TYPE_11__ {int id; int fs; } ;
typedef TYPE_3__ svn_fs_txn_t ;
typedef int svn_error_t ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (TYPE_1__**,int ,int ,int ,TYPE_2__*,int ) ;
 int * FUNC_2 (int ,TYPE_1__*,int ,TYPE_2__*,int ) ;
 int * FUNC_3 (int ,int ) ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;

__attribute__((used)) static svn_error_t *
FUNC_4(void *VAR_3, trail_t *VAR_4)
{
  svn_fs_txn_t *VAR_5 = VAR_3;
  transaction_t *VAR_6;



  FUNC_0(FUNC_1(&VAR_6, VAR_5->fs, VAR_5->id, VAR_0, VAR_4, VAR_4->pool));
  if (VAR_6->kind != VAR_2)
    return FUNC_3(VAR_5->fs, VAR_5->id);

  VAR_6->kind = VAR_1;
  return FUNC_2(VAR_5->fs, VAR_6, VAR_5->id, VAR_4, VAR_4->pool);
}
