
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int svn_stream_t ;
typedef int svn_revnum_t ;
typedef int svn_fs_x__txn_id_t ;
struct TYPE_4__ {void* offset; int item_count; TYPE_2__* items; int type; void* size; int fnv1_checksum; } ;
typedef TYPE_1__ svn_fs_x__p2l_entry_t ;
struct TYPE_5__ {int member_1; int member_0; } ;
typedef TYPE_2__ svn_fs_x__id_t ;
typedef int svn_fs_t ;
typedef int svn_error_t ;
typedef int apr_pool_t ;
typedef void* apr_off_t ;
typedef int apr_hash_t ;
typedef int apr_file_t ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int * VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (int *,int ,void*,int ,int *) ;
 int FUNC_2 (int *,int ,TYPE_1__*,int *) ;
 int * FUNC_3 (int *,int ,int *) ;
 int FUNC_4 (int *,int *,int *,int ,int *) ;
 int FUNC_5 (void**,int *,int *) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *,int ,int *) ;

__attribute__((used)) static svn_error_t *
FUNC_8(apr_off_t *VAR_5,
                              apr_file_t *VAR_6,
                              svn_fs_t *VAR_7,
                              svn_fs_x__txn_id_t VAR_8,
                              apr_hash_t *VAR_9,
                              svn_revnum_t VAR_10,
                              apr_pool_t *VAR_11)
{
  apr_off_t VAR_12;
  svn_stream_t *VAR_13;
  svn_fs_x__p2l_entry_t VAR_14;
  svn_fs_x__id_t VAR_15
    = {VAR_2, VAR_0};

  FUNC_0(FUNC_5(&VAR_12, VAR_6, VAR_11));


  VAR_13 = FUNC_3(&VAR_14.fnv1_checksum,
                         FUNC_7(VAR_6, VAR_4, VAR_11),
                         VAR_11);
  FUNC_0(FUNC_4(VAR_13, VAR_7, VAR_9, VAR_4,
                                  VAR_11));
  FUNC_0(FUNC_6(VAR_13));

  *VAR_5 = VAR_12;


  VAR_14.offset = VAR_12;
  FUNC_0(FUNC_5(&VAR_12, VAR_6, VAR_11));
  VAR_14.size = VAR_12 - VAR_14.offset;
  VAR_14.type = VAR_1;
  VAR_14.item_count = 1;
  VAR_14.items = &VAR_15;

  FUNC_0(FUNC_2(VAR_7, VAR_8, &VAR_14, VAR_11));
  FUNC_0(FUNC_1(VAR_7, VAR_8, VAR_14.offset,
                                VAR_0, VAR_11));

  return VAR_3;
}
