
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int svn_stream_t ;
typedef int svn_fs_t ;
struct TYPE_4__ {int number; int revision; } ;
struct TYPE_5__ {void* offset; int fnv1_checksum; TYPE_1__ item; int type; void* size; } ;
typedef TYPE_2__ svn_fs_fs__p2l_entry_t ;
typedef int svn_fs_fs__id_part_t ;
typedef int svn_error_t ;
typedef int svn_checksum_ctx_t ;
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
 int FUNC_1 (int *,int *,int *) ;
 int * FUNC_2 (int **,int *,int *) ;
 int FUNC_3 (int *,int const*,void*,int ,int *) ;
 int FUNC_4 (int *,int const*,TYPE_2__*,int *) ;
 scalar_t__ FUNC_5 (int *) ;
 int FUNC_6 (int *,int *,int *,int ,int *) ;
 int FUNC_7 (void**,int *,int *) ;
 int * FUNC_8 (int *,int ,int *) ;

__attribute__((used)) static svn_error_t *
FUNC_9(apr_off_t *VAR_5,
                              apr_file_t *VAR_6,
                              svn_fs_t *VAR_7,
                              const svn_fs_fs__id_part_t *VAR_8,
                              apr_hash_t *VAR_9,
                              apr_pool_t *VAR_10)
{
  apr_off_t VAR_11;
  svn_stream_t *VAR_12;
  svn_checksum_ctx_t *VAR_13;

  FUNC_0(FUNC_7(&VAR_11, VAR_6, VAR_10));


  VAR_12 = FUNC_8(VAR_6, VAR_4, VAR_10);
  if (FUNC_5(VAR_7))
    VAR_12 = FUNC_2(&VAR_13, VAR_12, VAR_10);
  else
    VAR_13 = ((void*)0);

  FUNC_0(FUNC_6(VAR_12, VAR_7, VAR_9, VAR_4, VAR_10));

  *VAR_5 = VAR_11;


  if (FUNC_5(VAR_7))
    {
      svn_fs_fs__p2l_entry_t VAR_14;

      VAR_14.offset = VAR_11;
      FUNC_0(FUNC_7(&VAR_11, VAR_6, VAR_10));
      VAR_14.size = VAR_11 - VAR_14.offset;
      VAR_14.type = VAR_1;
      VAR_14.item.revision = VAR_2;
      VAR_14.item.number = VAR_0;
      FUNC_0(FUNC_1(&VAR_14.fnv1_checksum,
                                      VAR_13,
                                      VAR_10));

      FUNC_0(FUNC_4(VAR_7, VAR_8, &VAR_14, VAR_10));
      FUNC_0(FUNC_3(VAR_7, VAR_8, VAR_14.offset,
                                    VAR_0, VAR_10));
    }

  return VAR_3;
}
