
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef scalar_t__ svn_revnum_t ;
struct TYPE_7__ {scalar_t__ rev; TYPE_1__* fs; } ;
typedef TYPE_2__ svn_fs_root_t ;
typedef int svn_error_t ;
struct TYPE_8__ {int dag_node_cache; } ;
typedef TYPE_3__ fs_fs_data_t ;
typedef int dag_node_t ;
typedef int apr_size_t ;
typedef int apr_pool_t ;
struct TYPE_6__ {TYPE_3__* fsap_data; } ;


 int FUNC_0 (int ) ;
 int * VAR_0 ;
 int * FUNC_1 (int ,char const*,int ) ;
 int FUNC_2 (TYPE_2__*,char const*,int *,int *) ;
 scalar_t__ FUNC_3 (char const*,char const*) ;
 int FUNC_4 (int *) ;
 char* FUNC_5 (int *) ;
 int FUNC_6 (scalar_t__*,int *,int *) ;

__attribute__((used)) static svn_error_t *
FUNC_7(dag_node_t **VAR_1,
                    svn_fs_root_t *VAR_2,
                    const char *VAR_3,
                    apr_size_t VAR_4,
                    apr_pool_t *VAR_5)
{
  fs_fs_data_t *VAR_6 = VAR_2->fs->fsap_data;



  dag_node_t *VAR_7
    = FUNC_1(VAR_6->dag_node_cache, VAR_3, VAR_4);


  if (VAR_7 && !FUNC_4(VAR_7))
    {



      const char *VAR_8
        = FUNC_5(VAR_7);
      svn_revnum_t VAR_9;
      FUNC_0(FUNC_6(&VAR_9, VAR_7, VAR_5));


      if (VAR_9 == VAR_2->rev && FUNC_3(VAR_8, VAR_3) == 0)
        {

          FUNC_0(FUNC_2(VAR_2, VAR_3, VAR_7, VAR_5));

          *VAR_1 = VAR_7;
          return VAR_0;
        }
    }

  *VAR_1 = ((void*)0);
  return VAR_0;
}
