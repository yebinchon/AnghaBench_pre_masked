
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


typedef scalar_t__ svn_revnum_t ;
typedef int svn_fs_t ;
struct TYPE_9__ {int * fs; } ;
typedef TYPE_1__ svn_fs_root_t ;
typedef int svn_fs_id_t ;
typedef int svn_error_t ;
struct TYPE_10__ {int * node; } ;
typedef TYPE_2__ parent_path_t ;
typedef int dag_node_t ;
typedef int apr_pool_t ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int * VAR_1 ;
 int FUNC_1 (scalar_t__*,char const**,int *,TYPE_2__*,int *) ;
 int FUNC_2 (TYPE_2__**,TYPE_1__*,char const*,int,int ,int *) ;
 int VAR_2 ;
 int VAR_3 ;
 char* FUNC_3 (char const*,int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int const**,int *) ;
 int FUNC_6 (scalar_t__*,int *,int *) ;
 int FUNC_7 (int ,int ) ;
 int FUNC_8 (TYPE_1__**,int *,scalar_t__,int *) ;

__attribute__((used)) static svn_error_t *FUNC_9(svn_fs_root_t **VAR_4,
                                    const char **VAR_5,
                                    svn_fs_root_t *VAR_6,
                                    const char *VAR_7,
                                    apr_pool_t *VAR_8)
{
  svn_fs_t *VAR_9 = VAR_6->fs;
  parent_path_t *VAR_10, *VAR_11;
  svn_revnum_t VAR_12, VAR_13;
  const char *VAR_14;
  svn_fs_root_t *VAR_15;
  dag_node_t *VAR_16;


  *VAR_4 = ((void*)0);
  *VAR_5 = ((void*)0);

  VAR_7 = FUNC_3(VAR_7, VAR_8);
  FUNC_0(FUNC_2(&VAR_10, VAR_6, VAR_7, 0, VAR_0, VAR_8));




  FUNC_0(FUNC_1(&VAR_12, &VAR_14,
                                 VAR_9, VAR_10, VAR_8));
  if (VAR_12 == 0)
    return VAR_1;




  FUNC_0(FUNC_8(&VAR_15, VAR_9, VAR_12, VAR_8));
  FUNC_0(FUNC_2(&VAR_11, VAR_15, VAR_7,
                    VAR_3 | VAR_2, VAR_0, VAR_8));
  if (VAR_11 == ((void*)0))
    return VAR_1;

  VAR_16 = VAR_11->node;
  if (! FUNC_7(FUNC_4(VAR_16),
                                    FUNC_4(VAR_10->node)))
    return VAR_1;
  FUNC_0(FUNC_6(&VAR_13, VAR_16, VAR_8));
  if (VAR_13 == VAR_12)
    {
      const svn_fs_id_t *VAR_17;
      FUNC_0(FUNC_5(&VAR_17, VAR_16));
      if (! VAR_17)
        return VAR_1;
    }


  *VAR_4 = VAR_15;
  *VAR_5 = VAR_14;
  return VAR_1;
}
