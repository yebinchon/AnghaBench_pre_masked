
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


typedef scalar_t__ svn_revnum_t ;
struct TYPE_9__ {int * node; } ;
typedef TYPE_1__ svn_fs_x__dag_path_t ;
typedef int svn_fs_t ;
struct TYPE_10__ {int * fs; } ;
typedef TYPE_2__ svn_fs_root_t ;
typedef int svn_error_t ;
typedef int dag_node_t ;
typedef int apr_pool_t ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int * VAR_1 ;
 char* FUNC_1 (int *,char const*) ;
 int FUNC_2 (scalar_t__*,char const**,int *,TYPE_1__*) ;
 int FUNC_3 (int *) ;
 scalar_t__ FUNC_4 (int *) ;
 int VAR_2 ;
 int FUNC_5 (int *,int *) ;
 int FUNC_6 (TYPE_1__**,TYPE_2__*,char const*,int ,int ,int *,int *) ;
 int FUNC_7 (int ) ;
 int FUNC_8 (TYPE_2__**,int *,scalar_t__,int *) ;
 int * FUNC_9 (int *) ;
 int FUNC_10 (int *) ;

__attribute__((used)) static svn_error_t *
FUNC_11(svn_fs_root_t **VAR_3,
               const char **VAR_4,
               svn_fs_root_t *VAR_5,
               const char *VAR_6,
               apr_pool_t *VAR_7)
{
  svn_fs_t *VAR_8 = VAR_5->fs;
  svn_fs_x__dag_path_t *VAR_9, *VAR_10;
  svn_revnum_t VAR_11, VAR_12;
  const char *VAR_13;
  svn_fs_root_t *VAR_14;
  dag_node_t *VAR_15;
  apr_pool_t *VAR_16 = FUNC_9(VAR_7);


  *VAR_3 = ((void*)0);
  *VAR_4 = ((void*)0);

  FUNC_0(FUNC_6(&VAR_9, VAR_5, VAR_6, 0, VAR_0,
                                 VAR_16, VAR_16));




  FUNC_0(FUNC_2(&VAR_11, &VAR_13,
                                 VAR_8, VAR_9));
  if (VAR_11 == 0)
    {
      FUNC_10(VAR_16);
      return VAR_1;
    }




  FUNC_0(FUNC_8(&VAR_14, VAR_8, VAR_11, VAR_7));
  FUNC_0(FUNC_6(&VAR_10, VAR_14, VAR_6,
                                 VAR_2, VAR_0,
                                 VAR_16, VAR_16));
  if (VAR_10 == ((void*)0))
    {
      FUNC_10(VAR_16);
      return VAR_1;
    }

  VAR_15 = VAR_10->node;
  if (!FUNC_5(VAR_15, VAR_9->node))
    {
      FUNC_10(VAR_16);
      return VAR_1;
    }
  VAR_12 = FUNC_4(VAR_15);
  if (VAR_12 == VAR_11)
    if (!FUNC_7(FUNC_3(VAR_15)))
      {
        FUNC_10(VAR_16);
        return VAR_1;
      }


  *VAR_3 = VAR_14;
  *VAR_4 = FUNC_1(VAR_7, VAR_13);

  FUNC_10(VAR_16);
  return VAR_1;
}
