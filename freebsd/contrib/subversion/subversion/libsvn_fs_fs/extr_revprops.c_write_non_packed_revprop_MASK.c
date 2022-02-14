
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int svn_stream_t ;
typedef int svn_revnum_t ;
struct TYPE_5__ {TYPE_2__* fsap_data; } ;
typedef TYPE_1__ svn_fs_t ;
typedef int svn_error_t ;
struct TYPE_6__ {scalar_t__ flush_to_disk; } ;
typedef TYPE_2__ fs_fs_data_t ;
typedef int apr_pool_t ;
typedef int apr_hash_t ;
typedef int apr_file_t ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int * VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (char const*,int *) ;
 char* FUNC_2 (TYPE_1__*,int ,int *) ;
 int FUNC_3 (int *,int *,int ,int *) ;
 int FUNC_4 (int *,int *) ;
 int VAR_3 ;
 int FUNC_5 (int *,int *) ;
 int FUNC_6 (int **,char const**,int ,int ,int *,int *) ;
 int FUNC_7 (int *) ;
 int * FUNC_8 (int *,int ,int *) ;

__attribute__((used)) static svn_error_t *
FUNC_9(const char **VAR_4,
                         const char **VAR_5,
                         svn_fs_t *VAR_6,
                         svn_revnum_t VAR_7,
                         apr_hash_t *VAR_8,
                         apr_pool_t *VAR_9)
{
  fs_fs_data_t *VAR_10 = VAR_6->fsap_data;
  apr_file_t *VAR_11;
  svn_stream_t *VAR_12;
  *VAR_4 = FUNC_2(VAR_6, VAR_7, VAR_9);



  FUNC_0(FUNC_6(&VAR_11, VAR_5,
                                   FUNC_1(*VAR_4, VAR_9),
                                   VAR_3, VAR_9, VAR_9));
  VAR_12 = FUNC_8(VAR_11, VAR_2, VAR_9);
  FUNC_0(FUNC_3(VAR_8, VAR_12, VAR_0, VAR_9));
  FUNC_0(FUNC_7(VAR_12));


  if (VAR_10->flush_to_disk)
    FUNC_0(FUNC_5(VAR_11, VAR_9));
  FUNC_0(FUNC_4(VAR_11, VAR_9));

  return VAR_1;
}
