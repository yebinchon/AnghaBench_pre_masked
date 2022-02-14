
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {void* instance_id; } ;
typedef TYPE_1__ svn_fs_x__data_t ;
struct TYPE_6__ {int pool; void* uuid; TYPE_1__* fsap_data; } ;
typedef TYPE_2__ svn_fs_t ;
typedef int svn_error_t ;
typedef int buf ;
typedef int apr_size_t ;
typedef int apr_pool_t ;
typedef int apr_file_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ) ;
 int * VAR_4 ;
 void* FUNC_1 (int ,char*) ;
 int FUNC_2 (TYPE_2__*,int *) ;
 int FUNC_3 (int *,int *) ;
 int FUNC_4 (int **,int ,int,int ,int *) ;
 int FUNC_5 (int *,char*,int*,int *) ;

__attribute__((used)) static svn_error_t *
FUNC_6(svn_fs_t *VAR_5,
          apr_pool_t *VAR_6)
{
  svn_fs_x__data_t *VAR_7 = VAR_5->fsap_data;
  apr_file_t *VAR_8;
  char VAR_9[VAR_3 + 2];
  apr_size_t VAR_10;


  FUNC_0(FUNC_4(&VAR_8, FUNC_2(VAR_5, VAR_6),
                           VAR_2 | VAR_0, VAR_1,
                           VAR_6));

  VAR_10 = sizeof(VAR_9);
  FUNC_0(FUNC_5(VAR_8, VAR_9, &VAR_10, VAR_6));
  VAR_5->uuid = FUNC_1(VAR_5->pool, VAR_9);


  VAR_10 = sizeof(VAR_9);
  FUNC_0(FUNC_5(VAR_8, VAR_9, &VAR_10,
                                  VAR_6));
  VAR_7->instance_id = FUNC_1(VAR_5->pool, VAR_9);

  FUNC_0(FUNC_3(VAR_8, VAR_6));

  return VAR_4;
}
