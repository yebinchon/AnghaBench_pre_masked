
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_7__ {int pool; int fs; } ;
typedef TYPE_1__ trail_t ;
struct TYPE_8__ {int data; int len; } ;
typedef TYPE_2__ svn_string_t ;
typedef int svn_fs_id_t ;
typedef int svn_error_t ;
struct change_txn_prop_args {char const* id; TYPE_2__* value; int name; int fs; } ;
struct begin_txn_args {int flags; int base_rev; int * txn_p; } ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int * VAR_6 ;
 int VAR_7 ;
 int FUNC_1 () ;
 int FUNC_2 (int ,char const*,int ,int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int const**,int ,int ,TYPE_1__*,int ) ;
 int FUNC_5 (char const**,int ,int const*,TYPE_1__*,int ) ;
 void* FUNC_6 (char*,int ) ;
 int FUNC_7 (int ,int ) ;
 int FUNC_8 (struct change_txn_prop_args*,TYPE_1__*) ;

__attribute__((used)) static svn_error_t *
FUNC_9(void *VAR_8, trail_t *VAR_9)
{
  struct begin_txn_args *VAR_10 = VAR_8;
  const svn_fs_id_t *VAR_11;
  const char *VAR_12;

  FUNC_0(FUNC_4(&VAR_11, VAR_9->fs, VAR_10->base_rev,
                                    VAR_9, VAR_9->pool));
  FUNC_0(FUNC_5(&VAR_12, VAR_9->fs, VAR_11,
                                 VAR_9, VAR_9->pool));

  if (VAR_10->flags & VAR_1)
    {
      struct change_txn_prop_args VAR_13;
      VAR_13.fs = VAR_9->fs;
      VAR_13.id = VAR_12;
      VAR_13.name = VAR_4;
      VAR_13.value = FUNC_6("true", VAR_9->pool);

      FUNC_0(FUNC_8(&VAR_13, VAR_9));
    }

  if (VAR_10->flags & VAR_0)
    {
      struct change_txn_prop_args VAR_14;
      VAR_14.fs = VAR_9->fs;
      VAR_14.id = VAR_12;
      VAR_14.name = VAR_3;
      VAR_14.value = FUNC_6("true", VAR_9->pool);

      FUNC_0(FUNC_8(&VAR_14, VAR_9));
    }






  {
    struct change_txn_prop_args VAR_15;
    svn_string_t VAR_16;
    VAR_15.fs = VAR_9->fs;
    VAR_15.id = VAR_12;
    VAR_15.name = VAR_7;
    VAR_16.data = FUNC_7(FUNC_1(), VAR_9->pool);
    VAR_16.len = FUNC_3(VAR_16.data);
    VAR_15.value = &VAR_16;
    FUNC_0(FUNC_8(&VAR_15, VAR_9));
  }

  if (VAR_10->flags & VAR_2)
    {
      struct change_txn_prop_args VAR_17;
      VAR_17.fs = VAR_9->fs;
      VAR_17.id = VAR_12;
      VAR_17.name = VAR_5;
      VAR_17.value = FUNC_6("0", VAR_9->pool);

      FUNC_0(FUNC_8(&VAR_17, VAR_9));
    }

  *VAR_10->txn_p = FUNC_2(VAR_9->fs, VAR_12, VAR_10->base_rev, VAR_9->pool);
  return VAR_6;
}
