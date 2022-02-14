
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_7__ {scalar_t__ kind; int base_id; } ;
typedef TYPE_1__ transaction_t ;
struct TYPE_8__ {int pool; int fs; } ;
typedef TYPE_2__ trail_t ;
typedef int svn_revnum_t ;
typedef int svn_error_t ;
struct open_txn_args {int name; int * txn_p; } ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int VAR_1 ;
 int * VAR_2 ;
 int FUNC_1 (TYPE_1__**,int ,int ,int ,TYPE_2__*,int ) ;
 int FUNC_2 (int ,int ,int ,int ) ;
 char* FUNC_3 (int ) ;
 int FUNC_4 (int *,int ,char const*,TYPE_2__*,int ) ;
 scalar_t__ VAR_3 ;

__attribute__((used)) static svn_error_t *
FUNC_5(void *VAR_4, trail_t *VAR_5)
{
  struct open_txn_args *VAR_6 = VAR_4;
  transaction_t *VAR_7;
  svn_revnum_t VAR_8 = VAR_1;
  const char *VAR_9;

  FUNC_0(FUNC_1(&VAR_7, VAR_5->fs, VAR_6->name, VAR_0, VAR_5, VAR_5->pool));
  if (VAR_7->kind != VAR_3)
    {
      VAR_9 = FUNC_3(VAR_7->base_id);
      FUNC_0(FUNC_4(&VAR_8, VAR_5->fs, VAR_9,
                                            VAR_5, VAR_5->pool));
    }

  *VAR_6->txn_p = FUNC_2(VAR_5->fs, VAR_6->name, VAR_8, VAR_5->pool);
  return VAR_2;
}
