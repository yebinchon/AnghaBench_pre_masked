
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_4__ ;
typedef struct TYPE_13__ TYPE_3__ ;
typedef struct TYPE_12__ TYPE_2__ ;
typedef struct TYPE_11__ TYPE_1__ ;


struct TYPE_13__ {int len; int data; } ;
typedef TYPE_3__ svn_stringbuf_t ;
struct TYPE_14__ {int len; int data; } ;
typedef TYPE_4__ svn_string_t ;
typedef int svn_repos_t ;
typedef int svn_fs_txn_t ;
typedef int svn_fs_t ;
typedef int svn_error_t ;
struct TYPE_11__ {int number; } ;
struct TYPE_12__ {TYPE_1__ value; } ;
struct svnadmin_opt_state {int use_post_revprop_change_hook; int use_pre_revprop_change_hook; TYPE_2__ start_revision; scalar_t__ txn_id; int repository_path; } ;
typedef int apr_pool_t ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int * VAR_1 ;
 int FUNC_1 (int **,int ,struct svnadmin_opt_state*,int *) ;
 int FUNC_2 (int *,char const*,TYPE_4__*,int *) ;
 int FUNC_3 (int **,int *,scalar_t__,int *) ;
 int * FUNC_4 (int *) ;
 int FUNC_5 (int *,int ,int *,char const*,int *,TYPE_4__*,int ,int ,int *,int *,int *) ;
 TYPE_4__* FUNC_6 (int *) ;
 int FUNC_7 (TYPE_3__**,char const*,int *) ;
 int FUNC_8 (TYPE_4__**,int *,int *,TYPE_4__*,int *,int ,int *,int *) ;

__attribute__((used)) static svn_error_t *
FUNC_9(const char *VAR_2, const char *VAR_3,
            struct svnadmin_opt_state *VAR_4, apr_pool_t *VAR_5)
{
  svn_repos_t *VAR_6;
  svn_string_t *VAR_7;

  if (VAR_3)
    {
      svn_stringbuf_t *VAR_8;

      FUNC_0(FUNC_7(&VAR_8, VAR_3, VAR_5));

      VAR_7 = FUNC_6(VAR_5);
      VAR_7->data = VAR_8->data;
      VAR_7->len = VAR_8->len;

      FUNC_0(FUNC_8(&VAR_7, ((void*)0), ((void*)0), VAR_7,
                                          ((void*)0), VAR_0, VAR_5, VAR_5));
    }
  else
    {
      VAR_7 = ((void*)0);
    }


  FUNC_0(FUNC_1(&VAR_6, VAR_4->repository_path, VAR_4, VAR_5));

  if (VAR_4->txn_id)
    {
      svn_fs_t *VAR_9 = FUNC_4(VAR_6);
      svn_fs_txn_t *VAR_10;

      FUNC_0(FUNC_3(&VAR_10, VAR_9, VAR_4->txn_id, VAR_5));
      FUNC_0(FUNC_2(VAR_10, VAR_2, VAR_7, VAR_5));
    }
  else
    FUNC_0(FUNC_5(
              VAR_6, VAR_4->start_revision.value.number,
              ((void*)0), VAR_2, ((void*)0), VAR_7,
              VAR_4->use_pre_revprop_change_hook,
              VAR_4->use_post_revprop_change_hook,
              ((void*)0), ((void*)0), VAR_5));

  return VAR_1;
}
