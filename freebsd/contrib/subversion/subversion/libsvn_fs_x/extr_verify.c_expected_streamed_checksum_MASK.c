
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int svn_fs_x__revision_file_t ;
struct TYPE_6__ {int size; } ;
typedef TYPE_1__ svn_fs_x__p2l_entry_t ;
typedef int svn_error_t ;
struct TYPE_7__ {scalar_t__ digest; } ;
typedef TYPE_2__ svn_checksum_t ;
typedef int svn_checksum_ctx_t ;
typedef int buffer ;
typedef int apr_uint32_t ;
typedef int apr_size_t ;
typedef int apr_pool_t ;
typedef int apr_off_t ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int * VAR_1 ;
 int FUNC_1 (int *,TYPE_1__*,int ,int *) ;
 int FUNC_2 (int const) ;
 int * FUNC_3 (int ,int *) ;
 int FUNC_4 (TYPE_2__**,int *,int *) ;
 int VAR_2 ;
 int FUNC_5 (int *,unsigned char*,int) ;
 int FUNC_6 (int *,unsigned char*,int) ;

__attribute__((used)) static svn_error_t *
FUNC_7(svn_fs_x__revision_file_t *VAR_3,
                           svn_fs_x__p2l_entry_t *VAR_4,
                           apr_pool_t *VAR_5)
{
  unsigned char VAR_6[VAR_0];
  svn_checksum_t *VAR_7;
  svn_checksum_ctx_t *VAR_8
    = FUNC_3(VAR_2, VAR_5);
  apr_off_t VAR_9 = VAR_4->size;

  while (VAR_9 > 0)
    {
      apr_size_t VAR_10 = VAR_9 > sizeof(VAR_6)
                         ? sizeof(VAR_6)
                         : (apr_size_t)VAR_9;
      FUNC_0(FUNC_6(VAR_3, VAR_6, VAR_10));
      FUNC_0(FUNC_5(VAR_8, VAR_6, VAR_10));
      VAR_9 -= VAR_10;
    }

  FUNC_0(FUNC_4(&VAR_7, VAR_8, VAR_5));
  FUNC_0(FUNC_1(VAR_3, VAR_4,
                            FUNC_2(*(const apr_uint32_t *)VAR_7->digest),
                            VAR_5));

  return VAR_1;
}
