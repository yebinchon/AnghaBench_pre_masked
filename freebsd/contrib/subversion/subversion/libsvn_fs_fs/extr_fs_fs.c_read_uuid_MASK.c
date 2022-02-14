
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {void* uuid; int pool; TYPE_2__* fsap_data; } ;
typedef TYPE_1__ svn_fs_t ;
typedef int svn_error_t ;
struct TYPE_6__ {scalar_t__ format; void* instance_id; } ;
typedef TYPE_2__ fs_fs_data_t ;
typedef int buf ;
typedef int apr_size_t ;
typedef int apr_pool_t ;
typedef int apr_file_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ) ;
 scalar_t__ VAR_4 ;
 int * VAR_5 ;
 void* FUNC_1 (int ,char*) ;
 int FUNC_2 (TYPE_1__*,int *) ;
 int FUNC_3 (int *,int *) ;
 int FUNC_4 (int **,int ,int,int ,int *) ;
 int FUNC_5 (int *,char*,int*,int *) ;

__attribute__((used)) static svn_error_t *
FUNC_6(svn_fs_t *VAR_6,
          apr_pool_t *VAR_7)
{
  fs_fs_data_t *VAR_8 = VAR_6->fsap_data;
  apr_file_t *VAR_9;
  char VAR_10[VAR_3 + 2];
  apr_size_t VAR_11;


  FUNC_0(FUNC_4(&VAR_9, FUNC_2(VAR_6, VAR_7),
                           VAR_2 | VAR_0, VAR_1,
                           VAR_7));

  VAR_11 = sizeof(VAR_10);
  FUNC_0(FUNC_5(VAR_9, VAR_10, &VAR_11, VAR_7));
  VAR_6->uuid = FUNC_1(VAR_6->pool, VAR_10);


  if (VAR_8->format >= VAR_4)
    {
      VAR_11 = sizeof(VAR_10);
      FUNC_0(FUNC_5(VAR_9, VAR_10, &VAR_11,
                                      VAR_7));
      VAR_8->instance_id = FUNC_1(VAR_6->pool, VAR_10);
    }
  else
    {
      VAR_8->instance_id = VAR_6->uuid;
    }

  FUNC_0(FUNC_3(VAR_9, VAR_7));

  return VAR_5;
}
