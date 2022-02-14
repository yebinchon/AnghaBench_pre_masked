
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_15__ TYPE_2__ ;
typedef struct TYPE_14__ TYPE_1__ ;


struct TYPE_14__ {int fs; } ;
typedef TYPE_1__ trail_t ;
typedef int svn_revnum_t ;
typedef int svn_fs_root_t ;
struct TYPE_15__ {scalar_t__ apr_err; } ;
typedef TYPE_2__ svn_error_t ;
typedef int dag_node_t ;
typedef int apr_pool_t ;


 int FUNC_0 (int ) ;
 scalar_t__ VAR_0 ;
 int VAR_1 ;
 TYPE_2__* VAR_2 ;
 TYPE_2__* FUNC_1 (int **,int *,char const*,TYPE_1__*,int *) ;
 int * FUNC_2 (int ,int ,int *,int *) ;
 int FUNC_3 (TYPE_2__*) ;
 TYPE_2__* FUNC_4 (TYPE_2__*) ;
 int FUNC_5 (int *,int *,TYPE_1__*,int *) ;
 int FUNC_6 (int **,int ,int ,TYPE_1__*,int *) ;
 int FUNC_7 (int *,int ,TYPE_1__*,int *) ;

svn_error_t *
FUNC_8(svn_revnum_t *VAR_3,
                                  const char *VAR_4,
                                  trail_t *VAR_5,
                                  apr_pool_t *VAR_6)
{
  svn_revnum_t VAR_7, VAR_8;
  svn_fs_root_t *VAR_9;
  dag_node_t *VAR_10, *VAR_11;
  svn_error_t *VAR_12;


  FUNC_0(FUNC_7(&VAR_7, VAR_5->fs, VAR_5, VAR_6));


  FUNC_0(FUNC_6(&VAR_10, VAR_5->fs, VAR_7,
                                         VAR_5, VAR_6));
  VAR_9 = FUNC_2(VAR_5->fs, VAR_7, VAR_10, VAR_6);


  VAR_12 = FUNC_1(&VAR_11, VAR_9, VAR_4, VAR_5, VAR_6);
  if (VAR_12 && (VAR_12->apr_err == VAR_0))
    {
      FUNC_3(VAR_12);
      *VAR_3 = VAR_1;
      return VAR_2;
    }
  else if (VAR_12)
    return FUNC_4(VAR_12);


  FUNC_0(FUNC_5(&VAR_8, VAR_11,
                                        VAR_5, VAR_6));

  *VAR_3 = VAR_8;
  return VAR_2;
}
