
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef int trail_t ;
struct TYPE_7__ {TYPE_2__* fsap_data; } ;
typedef TYPE_1__ svn_fs_t ;
typedef int svn_fs_id_t ;
typedef int svn_error_t ;
typedef int node_revision_t ;
struct TYPE_8__ {scalar_t__ format; } ;
typedef TYPE_2__ base_fs_data_t ;
typedef int apr_pool_t ;


 int FUNC_0 (int ) ;
 scalar_t__ VAR_0 ;
 int * VAR_1 ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int **,TYPE_1__*,char const*,char const*,int *,int *) ;
 int FUNC_3 (TYPE_1__*,int *,int *,int *,int *) ;
 int FUNC_4 (TYPE_1__*,int ,int *,int *,int *) ;

svn_error_t *
FUNC_5(const svn_fs_id_t **VAR_2,
                         svn_fs_t *VAR_3,
                         node_revision_t *VAR_4,
                         const char *VAR_5,
                         const char *VAR_6,
                         trail_t *VAR_7,
                         apr_pool_t *VAR_8)
{
  svn_fs_id_t *VAR_9;
  base_fs_data_t *VAR_10 = VAR_3->fsap_data;


  FUNC_0(FUNC_2(&VAR_9, VAR_3, VAR_5, VAR_6, VAR_7, VAR_8));


  FUNC_0(FUNC_3(VAR_3, VAR_9, VAR_4, VAR_7, VAR_8));



  if (VAR_10->format >= VAR_0)
    {
      FUNC_0(FUNC_4(VAR_3, FUNC_1(VAR_9),
                                          VAR_9, VAR_7, VAR_8));
    }

  *VAR_2 = VAR_9;
  return VAR_1;
}
