
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_15__ TYPE_7__ ;
typedef struct TYPE_14__ TYPE_6__ ;
typedef struct TYPE_13__ TYPE_4__ ;
typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


struct TYPE_11__ {TYPE_7__* db_txn; TYPE_3__* fs; } ;
typedef TYPE_2__ trail_t ;
struct TYPE_12__ {TYPE_4__* fsap_data; } ;
typedef TYPE_3__ svn_fs_t ;
typedef int svn_error_t ;
struct TYPE_13__ {TYPE_1__* bdb; int in_txn_trail; } ;
typedef TYPE_4__ base_fs_data_t ;
struct TYPE_15__ {int (* commit ) (TYPE_7__*,int ) ;} ;
struct TYPE_14__ {int (* txn_checkpoint ) (TYPE_6__*,int,int,int ) ;} ;
struct TYPE_10__ {TYPE_6__* env; } ;


 int FUNC_0 (TYPE_3__*,int ,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (char*) ;
 int FUNC_2 (int ) ;
 int * VAR_2 ;
 int FUNC_3 (TYPE_7__*,int ) ;
 int FUNC_4 (TYPE_6__*,int,int,int ) ;
 int * FUNC_5 (TYPE_3__*,char*,int) ;

__attribute__((used)) static svn_error_t *
FUNC_6(trail_t *VAR_3)
{
  int VAR_4;
  svn_fs_t *VAR_5 = VAR_3->fs;
  base_fs_data_t *VAR_6 = VAR_5->fsap_data;




  if (VAR_3->db_txn)
    {


      VAR_6->in_txn_trail = VAR_1;
      FUNC_2(FUNC_0(VAR_5, FUNC_1("committing Berkeley DB transaction"),
                       VAR_3->db_txn->commit(VAR_3->db_txn, 0)));
    }




  VAR_4 = VAR_6->bdb->env->txn_checkpoint(VAR_6->bdb->env, 1024, 5, 0);
  if (VAR_4)
    {



        {
          return FUNC_5
            (VAR_5, "checkpointing after Berkeley DB transaction", VAR_4);
        }
    }

  return VAR_2;
}
