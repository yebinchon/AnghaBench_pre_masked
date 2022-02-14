
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_19__ TYPE_5__ ;
typedef struct TYPE_18__ TYPE_4__ ;
typedef struct TYPE_17__ TYPE_3__ ;
typedef struct TYPE_16__ TYPE_2__ ;
typedef struct TYPE_15__ TYPE_1__ ;


struct TYPE_17__ {TYPE_2__* vtable; } ;
typedef TYPE_3__ svn_fs_root_t ;
typedef int svn_fs_path_change_iterator_t ;
struct TYPE_15__ {char* data; int len; } ;
struct TYPE_18__ {TYPE_1__ path; int text_mod; int prop_mod; int node_kind; int mergeinfo_mod; int copyfrom_path; int copyfrom_rev; scalar_t__ copyfrom_known; int change_kind; } ;
typedef TYPE_4__ svn_fs_path_change3_t ;
struct TYPE_19__ {int text_mod; int prop_mod; int node_kind; int mergeinfo_mod; int copyfrom_path; int copyfrom_rev; scalar_t__ copyfrom_known; } ;
typedef TYPE_5__ svn_fs_path_change2_t ;
typedef int svn_fs_id_t ;
typedef int svn_error_t ;
typedef int svn_boolean_t ;
typedef int apr_pool_t ;
typedef int apr_hash_t ;
struct TYPE_16__ {int (* paths_changed ) (int **,TYPE_3__*,int *) ;} ;


 int FUNC_0 (int ) ;
 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_1 (int ) ;
 int * VAR_1 ;
 int FUNC_2 (int *,int ) ;
 int FUNC_3 (int *,char*,int ) ;
 int FUNC_4 (int **,TYPE_3__*,int *) ;
 int FUNC_5 (TYPE_3__**,char const**,TYPE_3__*,char const*,int *,int *) ;
 int FUNC_6 (int const**,TYPE_3__*,char const*,int *) ;
 TYPE_5__* FUNC_7 (int const*,int ,int *) ;
 int VAR_2 ;
 int FUNC_8 (TYPE_4__**,int *) ;
 int FUNC_9 (int **,TYPE_3__*,int *,int *) ;
 int * FUNC_10 (int *) ;
 int FUNC_11 (int *,int ,TYPE_5__*) ;
 int * FUNC_12 (int *) ;
 int FUNC_13 (int *) ;

svn_error_t *
FUNC_14(apr_hash_t **VAR_3,
                      svn_fs_root_t *VAR_4,
                      apr_pool_t *VAR_5)
{
  svn_boolean_t VAR_6 = !VAR_4->vtable->paths_changed
                          || VAR_0;

  if (VAR_6)
    {
      apr_pool_t *VAR_7 = FUNC_12(VAR_5);
      apr_hash_t *VAR_8 = FUNC_10(VAR_5);

      svn_fs_path_change_iterator_t *VAR_9;
      svn_fs_path_change3_t *VAR_10;

      FUNC_0(FUNC_9(&VAR_9, VAR_4, VAR_7,
                                    VAR_7));

      FUNC_0(FUNC_8(&VAR_10, VAR_9));
      while (VAR_10)
        {
          svn_fs_path_change2_t *VAR_11;
          const svn_fs_id_t *VAR_12;
          const char *VAR_13 = VAR_10->path.data;
          svn_fs_root_t *VAR_14 = VAR_4;


          if (VAR_10->change_kind == VAR_2)
            FUNC_0(FUNC_5(&VAR_14, &VAR_13,
                                             VAR_14, VAR_13,
                                             VAR_7, VAR_7));

          FUNC_0(FUNC_6(&VAR_12, VAR_14, VAR_13, VAR_5));

          VAR_11 = FUNC_7(VAR_12, VAR_10->change_kind,
                                            VAR_5);
          VAR_11->copyfrom_known = VAR_10->copyfrom_known;
          if ( VAR_11->copyfrom_known
              && FUNC_1(VAR_10->copyfrom_rev))
            {
              VAR_11->copyfrom_rev = VAR_10->copyfrom_rev;
              VAR_11->copyfrom_path = FUNC_2(VAR_5, VAR_10->copyfrom_path);
            }
          VAR_11->mergeinfo_mod = VAR_10->mergeinfo_mod;
          VAR_11->node_kind = VAR_10->node_kind;
          VAR_11->prop_mod = VAR_10->prop_mod;
          VAR_11->text_mod = VAR_10->text_mod;

          FUNC_11(VAR_8, FUNC_3(VAR_5, VAR_10->path.data,
                                                VAR_10->path.len), VAR_11);


          FUNC_0(FUNC_8(&VAR_10, VAR_9));
        }
      FUNC_13(VAR_7);

      *VAR_3 = VAR_8;
    }
  else
    {
      FUNC_0(VAR_4->vtable->paths_changed(VAR_3, VAR_4, VAR_5));
    }

  return VAR_1;
}
