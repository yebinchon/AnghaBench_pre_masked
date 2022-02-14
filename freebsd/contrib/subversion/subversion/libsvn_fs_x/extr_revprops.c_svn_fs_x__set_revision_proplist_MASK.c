
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_2__ ;
typedef struct TYPE_11__ TYPE_1__ ;


typedef int svn_revnum_t ;
typedef scalar_t__ svn_node_kind_t ;
struct TYPE_11__ {int flush_to_disk; } ;
typedef TYPE_1__ svn_fs_x__data_t ;
typedef int svn_fs_x__batch_fsync_t ;
struct TYPE_12__ {TYPE_1__* fsap_data; } ;
typedef TYPE_2__ svn_fs_t ;
typedef int svn_error_t ;
typedef int svn_boolean_t ;
typedef int apr_pool_t ;
typedef int apr_hash_t ;
typedef int apr_array_header_t ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int * VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (int **,int ,int *) ;
 int FUNC_2 (int ,TYPE_2__*,int *) ;
 int FUNC_3 (TYPE_2__*,int ) ;
 char* FUNC_4 (TYPE_2__*,int ,int *) ;
 int FUNC_5 (TYPE_2__*,int ,int *) ;
 int FUNC_6 (int ,scalar_t__*,int *) ;
 scalar_t__ VAR_3 ;
 int FUNC_7 (TYPE_2__*,char const*,char const*,char const*,int *,int,int *,int *) ;
 int FUNC_8 (char const**,char const**,TYPE_2__*,int ,int *,int *,int *,int *) ;
 int FUNC_9 (char const**,char const**,int **,TYPE_2__*,int ,int *,int *,int *,int *) ;

svn_error_t *
FUNC_10(svn_fs_t *VAR_4,
                                svn_revnum_t VAR_5,
                                apr_hash_t *VAR_6,
                                apr_pool_t *VAR_7)
{
  svn_boolean_t VAR_8;
  svn_boolean_t VAR_9 = VAR_0;
  const char *VAR_10;
  const char *VAR_11;
  const char *VAR_12;
  apr_array_header_t *VAR_13 = ((void*)0);
  svn_fs_x__batch_fsync_t *VAR_14;
  svn_fs_x__data_t *VAR_15 = VAR_4->fsap_data;

  FUNC_0(FUNC_2(VAR_5, VAR_4, VAR_7));


  FUNC_0(FUNC_1(&VAR_14, VAR_15->flush_to_disk,
                                       VAR_7));


  VAR_8 = FUNC_3(VAR_4, VAR_5);




  if (VAR_8)
    {
      VAR_9 = VAR_2;
    }
  else
    {
      svn_node_kind_t VAR_16;
      FUNC_0(FUNC_6(FUNC_5(VAR_4, VAR_5,
                                                        VAR_7),
                                &VAR_16, VAR_7));
      VAR_9 = VAR_16 != VAR_3;
    }


  if (VAR_8)
    FUNC_0(FUNC_9(&VAR_10, &VAR_11, &VAR_13,
                                 VAR_4, VAR_5, VAR_6, VAR_14, VAR_7,
                                 VAR_7));
  else
    FUNC_0(FUNC_8(&VAR_10, &VAR_11,
                                     VAR_4, VAR_5, VAR_6, VAR_14,
                                     VAR_7, VAR_7));






  VAR_12 = FUNC_4(VAR_4, VAR_5, VAR_7);


  FUNC_0(FUNC_7(VAR_4, VAR_10, VAR_11, VAR_12,
                                VAR_13, VAR_9, VAR_14,
                                VAR_7));

  return VAR_1;
}
