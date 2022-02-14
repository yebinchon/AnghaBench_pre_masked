
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int svn_revnum_t ;
struct TYPE_4__ {TYPE_2__* fsap_data; } ;
typedef TYPE_1__ svn_fs_history_t ;
typedef int svn_error_t ;
struct TYPE_5__ {int revision; int path; } ;
typedef TYPE_2__ base_history_data_t ;
typedef int apr_pool_t ;


 int * VAR_0 ;
 char* FUNC_0 (int *,int ) ;

__attribute__((used)) static svn_error_t *
FUNC_1(const char **VAR_1,
                      svn_revnum_t *VAR_2,
                      svn_fs_history_t *VAR_3,
                      apr_pool_t *VAR_4)
{
  base_history_data_t *VAR_5 = VAR_3->fsap_data;

  *VAR_1 = FUNC_0(VAR_4, VAR_5->path);
  *VAR_2 = VAR_5->revision;
  return VAR_0;
}
