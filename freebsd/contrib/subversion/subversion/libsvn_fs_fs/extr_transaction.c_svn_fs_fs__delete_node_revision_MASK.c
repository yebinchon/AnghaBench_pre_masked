
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_7__ ;
typedef struct TYPE_13__ TYPE_3__ ;
typedef struct TYPE_12__ TYPE_2__ ;
typedef struct TYPE_11__ TYPE_1__ ;


struct TYPE_11__ {TYPE_3__* fsap_data; } ;
typedef TYPE_1__ svn_fs_t ;
typedef int svn_fs_id_t ;
typedef int svn_error_t ;
struct TYPE_12__ {scalar_t__ kind; scalar_t__ data_rep; scalar_t__ prop_rep; } ;
typedef TYPE_2__ node_revision_t ;
struct TYPE_13__ {scalar_t__ txn_dir_cache; } ;
typedef TYPE_3__ fs_fs_data_t ;
typedef int apr_pool_t ;
struct TYPE_14__ {char* data; } ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 scalar_t__ FUNC_1 (scalar_t__) ;
 int * FUNC_2 (scalar_t__,char const*,int *,int *) ;
 int * FUNC_3 (TYPE_2__**,TYPE_1__*,int const*,int *,int *) ;
 TYPE_7__* FUNC_4 (int const*,int *) ;
 int FUNC_5 (TYPE_1__*,int const*,int *) ;
 int FUNC_6 (TYPE_1__*,int const*,int *) ;
 int FUNC_7 (TYPE_1__*,int const*,int *) ;
 int * FUNC_8 (int ,int ,int *) ;
 scalar_t__ VAR_1 ;

svn_error_t *
FUNC_9(svn_fs_t *VAR_2,
                                const svn_fs_id_t *VAR_3,
                                apr_pool_t *VAR_4)
{
  node_revision_t *VAR_5;

  FUNC_0(FUNC_3(&VAR_5, VAR_2, VAR_3, VAR_4, VAR_4));


  if (VAR_5->prop_rep && FUNC_1(VAR_5->prop_rep))
    FUNC_0(FUNC_8(FUNC_6(VAR_2, VAR_3, VAR_4),
                                VAR_0, VAR_4));


  if (VAR_5->data_rep && FUNC_1(VAR_5->data_rep)
      && VAR_5->kind == VAR_1)
    {
      fs_fs_data_t *VAR_6 = VAR_2->fsap_data;
      FUNC_0(FUNC_8(FUNC_5(VAR_2, VAR_3,
                                                                    VAR_4),
                                  VAR_0, VAR_4));


      if (VAR_6->txn_dir_cache)
        {
          const char *VAR_7 = FUNC_4(VAR_3, VAR_4)->data;
          FUNC_0(FUNC_2(VAR_6->txn_dir_cache, VAR_7, ((void*)0), VAR_4));
        }
    }

  return FUNC_8(FUNC_7(VAR_2, VAR_3, VAR_4),
                             VAR_0, VAR_4);
}
