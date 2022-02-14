
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_25__ TYPE_5__ ;
typedef struct TYPE_24__ TYPE_4__ ;
typedef struct TYPE_23__ TYPE_3__ ;
typedef struct TYPE_22__ TYPE_2__ ;
typedef struct TYPE_21__ TYPE_1__ ;
typedef struct TYPE_20__ TYPE_14__ ;


struct TYPE_22__ {int pool; TYPE_1__* fs; } ;
typedef TYPE_2__ trail_t ;
struct TYPE_23__ {char* txn; int txn_flags; int fs; int is_txn_root; } ;
typedef TYPE_3__ svn_fs_root_t ;
typedef int svn_error_t ;
struct delete_args {char* path; TYPE_3__* root; } ;
struct TYPE_24__ {int node; int entry; TYPE_14__* parent; } ;
typedef TYPE_4__ parent_path_t ;
struct TYPE_25__ {scalar_t__ format; } ;
typedef TYPE_5__ base_fs_data_t ;
typedef int apr_int64_t ;
struct TYPE_21__ {TYPE_5__* fsap_data; } ;
struct TYPE_20__ {int node; } ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int * FUNC_1 (TYPE_3__*) ;
 int VAR_4 ;
 int FUNC_2 (char*) ;
 int * FUNC_3 (int ,char const*,char const*,int ,int ,int ,int ,TYPE_2__*,int ) ;
 int FUNC_4 (TYPE_14__*,int ,char const*,TYPE_2__*,int ) ;
 int FUNC_5 (TYPE_3__*,TYPE_14__*,char const*,TYPE_2__*,int ) ;
 int FUNC_6 (TYPE_4__**,TYPE_3__*,char const*,int ,char const*,TYPE_2__*,int ) ;
 int * FUNC_7 (int ,int *,int ) ;
 int FUNC_8 (char const*,int ,TYPE_2__*,int ) ;
 int FUNC_9 (int ,int ,char const*,TYPE_2__*,int ) ;
 int FUNC_10 (int ) ;
 int FUNC_11 (int *,int *,int ,TYPE_2__*,int ) ;
 int VAR_5 ;

__attribute__((used)) static svn_error_t *
FUNC_12(void *VAR_6,
                trail_t *VAR_7)
{
  struct delete_args *VAR_8 = VAR_6;
  svn_fs_root_t *VAR_9 = VAR_8->root;
  const char *VAR_10 = VAR_8->path;
  parent_path_t *VAR_11;
  const char *VAR_12 = VAR_9->txn;
  base_fs_data_t *VAR_13 = VAR_7->fs->fsap_data;

  if (! VAR_9->is_txn_root)
    return FUNC_1(VAR_9);

  FUNC_0(FUNC_6(&VAR_11, VAR_9, VAR_10, 0, VAR_12,
                    VAR_7, VAR_7->pool));


  if (! VAR_11->parent)
    return FUNC_7(VAR_1, ((void*)0),
                            FUNC_2("The root directory cannot be deleted"));



  if (VAR_9->txn_flags & VAR_3)
    {
      FUNC_0(FUNC_8(VAR_10, VAR_4,
                                                  VAR_7, VAR_7->pool));
    }


  FUNC_0(FUNC_5(VAR_9, VAR_11->parent, VAR_10,
                            VAR_7, VAR_7->pool));



  if (VAR_13->format >= VAR_2)
    {
      apr_int64_t VAR_14;
      FUNC_0(FUNC_11(((void*)0), &VAR_14,
                                                   VAR_11->node,
                                                   VAR_7, VAR_7->pool));
      FUNC_0(FUNC_4(VAR_11->parent,
                                             -VAR_14, VAR_12,
                                             VAR_7, VAR_7->pool));
    }


  FUNC_0(FUNC_9(VAR_11->parent->node,
                                  VAR_11->entry,
                                  VAR_12, VAR_7, VAR_7->pool));



  return FUNC_3(VAR_9->fs, VAR_12, VAR_10,
                    FUNC_10(VAR_11->node),
                    VAR_5, VAR_0, VAR_0, VAR_7,
                    VAR_7->pool);
}
