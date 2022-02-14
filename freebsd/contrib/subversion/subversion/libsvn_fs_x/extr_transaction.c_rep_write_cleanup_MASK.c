
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_4__ ;
typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


typedef int svn_fs_x__txn_id_t ;
struct TYPE_11__ {int apr_err; } ;
typedef TYPE_3__ svn_error_t ;
struct TYPE_12__ {int local_pool; int lockcookie; int fs; int file; int rep_offset; TYPE_2__* noderev; } ;
typedef TYPE_4__ rep_write_baton_t ;
typedef int apr_status_t ;
struct TYPE_9__ {int change_set; } ;
struct TYPE_10__ {TYPE_1__ noderev_id; } ;


 int VAR_0 ;
 int FUNC_0 (TYPE_3__*) ;
 TYPE_3__* FUNC_1 (TYPE_3__*,int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ,int ) ;
 TYPE_3__* FUNC_4 (int ,int ,int ) ;
 int FUNC_5 (int ,int ,int ,int ) ;

__attribute__((used)) static apr_status_t
FUNC_6(void *VAR_1)
{
  svn_error_t *VAR_2;
  rep_write_baton_t *VAR_3 = VAR_1;
  svn_fs_x__txn_id_t VAR_4
    = FUNC_2(VAR_3->noderev->noderev_id.change_set);


  VAR_2 = FUNC_4(VAR_3->file, VAR_3->rep_offset, VAR_3->local_pool);
  VAR_2 = FUNC_1(VAR_2, FUNC_3(VAR_3->file,
                                                        VAR_3->local_pool));





  VAR_2 = FUNC_1(VAR_2,
                                 FUNC_5(VAR_3->fs, VAR_4,
                                                  VAR_3->lockcookie,
                                                  VAR_3->local_pool));
  if (VAR_2)
    {
      apr_status_t VAR_5 = VAR_2->apr_err;
      FUNC_0(VAR_2);
      return VAR_5;
    }

  return VAR_0;
}
