
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int svn_revnum_t ;
struct TYPE_5__ {TYPE_2__* fsap_data; } ;
typedef TYPE_1__ svn_fs_t ;
typedef int svn_error_t ;
struct TYPE_6__ {int flush_to_disk; } ;
typedef TYPE_2__ fs_fs_data_t ;
typedef size_t apr_size_t ;
typedef int apr_pool_t ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int * VAR_1 ;
 size_t FUNC_1 (char*,int ) ;
 char* FUNC_2 (TYPE_1__*,int *) ;
 int FUNC_3 (char const*,char*,size_t,char const*,int ,int *) ;

svn_error_t *
FUNC_4(svn_fs_t *VAR_2,
                                  svn_revnum_t VAR_3,
                                  apr_pool_t *VAR_4)
{
  fs_fs_data_t *VAR_5 = VAR_2->fsap_data;
  const char *VAR_6;
  char VAR_7[VAR_0];
  apr_size_t VAR_8 = FUNC_1(VAR_7, VAR_3);
  VAR_7[VAR_8] = '\n';

  VAR_6 = FUNC_2(VAR_2, VAR_4);

  FUNC_0(FUNC_3(VAR_6, VAR_7, VAR_8 + 1,
                               VAR_6 ,
                               VAR_5->flush_to_disk, VAR_4));

  return VAR_1;
}
