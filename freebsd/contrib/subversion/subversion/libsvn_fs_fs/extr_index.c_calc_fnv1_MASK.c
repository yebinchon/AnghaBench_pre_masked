
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_7__ {int file; } ;
typedef TYPE_1__ svn_fs_fs__revision_file_t ;
struct TYPE_8__ {int size; scalar_t__ type; int fnv1_checksum; int offset; } ;
typedef TYPE_2__ svn_fs_fs__p2l_entry_t ;
typedef int svn_error_t ;
struct TYPE_9__ {scalar_t__ digest; } ;
typedef TYPE_3__ svn_checksum_t ;
typedef int svn_checksum_ctx_t ;
typedef int buffer ;
typedef int apr_uint32_t ;
typedef int apr_size_t ;
typedef int apr_pool_t ;
typedef int apr_off_t ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 scalar_t__ VAR_1 ;
 int * VAR_2 ;
 int FUNC_1 (int const) ;
 int * FUNC_2 (int ,int *) ;
 int FUNC_3 (TYPE_3__**,int *,int *) ;
 int VAR_3 ;
 int FUNC_4 (int *,unsigned char*,int) ;
 int FUNC_5 (int ,unsigned char*,int,int *,int *,int *) ;
 int FUNC_6 (int ,int ,int *,int *) ;

__attribute__((used)) static svn_error_t *
FUNC_7(svn_fs_fs__p2l_entry_t *VAR_4,
          svn_fs_fs__revision_file_t *VAR_5,
          apr_pool_t *VAR_6)
{
  unsigned char VAR_7[4096];
  svn_checksum_t *VAR_8;
  svn_checksum_ctx_t *VAR_9
    = FUNC_2(VAR_3, VAR_6);
  apr_off_t VAR_10 = VAR_4->size;




  if (VAR_4->type == VAR_1)
    {
      VAR_4->fnv1_checksum = 0;
      return VAR_2;
    }


  FUNC_0(FUNC_6(VAR_5->file, VAR_0, &VAR_4->offset,
                           VAR_6));
  while (VAR_10 > 0)
    {
      apr_size_t VAR_11 = VAR_10 > sizeof(VAR_7)
                         ? sizeof(VAR_7)
                         : (apr_size_t)VAR_10;
      FUNC_0(FUNC_5(VAR_5->file, VAR_7, VAR_11, ((void*)0),
                                     ((void*)0), VAR_6));
      FUNC_0(FUNC_4(VAR_9, VAR_7, VAR_11));
      VAR_10 -= VAR_11;
    }


  FUNC_0(FUNC_3(&VAR_8, VAR_9, VAR_6));
  VAR_4->fnv1_checksum = FUNC_1(*(const apr_uint32_t *)VAR_8->digest);

  return VAR_2;
}
