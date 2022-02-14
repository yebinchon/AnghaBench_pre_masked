
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_7__ {int pool; TYPE_4__* db_txn; TYPE_2__* fs; } ;
typedef TYPE_1__ trail_t ;
struct TYPE_8__ {TYPE_3__* fsap_data; } ;
typedef TYPE_2__ svn_fs_t ;
typedef int svn_error_t ;
struct TYPE_9__ {int in_txn_trail; } ;
typedef TYPE_3__ base_fs_data_t ;
struct TYPE_10__ {int (* abort ) (TYPE_4__*) ;} ;


 int FUNC_0 (TYPE_2__*,int ,int ) ;
 int VAR_0 ;
 int FUNC_1 (char*) ;
 int FUNC_2 (int ) ;
 int * VAR_1 ;
 int FUNC_3 (TYPE_4__*) ;
 int FUNC_4 (int ) ;

__attribute__((used)) static svn_error_t *
FUNC_5(trail_t *VAR_2)
{
  svn_fs_t *VAR_3 = VAR_2->fs;
  base_fs_data_t *VAR_4 = VAR_3->fsap_data;

  if (VAR_2->db_txn)
    {
      VAR_4->in_txn_trail = VAR_0;
      FUNC_2(FUNC_0(VAR_3, FUNC_1("aborting Berkeley DB transaction"),
                       VAR_2->db_txn->abort(VAR_2->db_txn)));
    }
  FUNC_4(VAR_2->pool);

  return VAR_1;
}
