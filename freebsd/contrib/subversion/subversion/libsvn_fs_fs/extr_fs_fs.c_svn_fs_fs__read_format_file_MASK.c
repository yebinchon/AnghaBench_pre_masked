
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {TYPE_2__* fsap_data; } ;
typedef TYPE_1__ svn_fs_t ;
typedef int svn_error_t ;
typedef int svn_boolean_t ;
struct TYPE_6__ {int format; int max_files_per_dir; int use_log_addressing; } ;
typedef TYPE_2__ fs_fs_data_t ;
typedef int apr_pool_t ;


 int FUNC_0 (int ) ;
 int * VAR_0 ;
 int FUNC_1 (TYPE_1__*,int *) ;
 int FUNC_2 (int*,int*,int *,int ,int *) ;

svn_error_t *
FUNC_3(svn_fs_t *VAR_1, apr_pool_t *VAR_2)
{
  fs_fs_data_t *VAR_3 = VAR_1->fsap_data;
  int VAR_4, VAR_5;
  svn_boolean_t VAR_6;


  FUNC_0(FUNC_2(&VAR_4, &VAR_5, &VAR_6,
                      FUNC_1(VAR_1, VAR_2), VAR_2));


  VAR_3->format = VAR_4;
  VAR_3->max_files_per_dir = VAR_5;
  VAR_3->use_log_addressing = VAR_6;

  return VAR_0;
}
