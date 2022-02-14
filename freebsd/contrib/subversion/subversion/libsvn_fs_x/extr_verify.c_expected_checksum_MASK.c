
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int svn_fs_x__revision_file_t ;
struct TYPE_3__ {scalar_t__ fnv1_checksum; int size; int offset; } ;
typedef TYPE_1__ svn_fs_x__p2l_entry_t ;
typedef int svn_error_t ;
typedef scalar_t__ apr_uint32_t ;
typedef int apr_pool_t ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int * VAR_1 ;
 int FUNC_1 (char*) ;
 int FUNC_2 (int *,int ) ;
 int * FUNC_3 (int ,int *,int ,int ,int ,char const*) ;
 int FUNC_4 (char const**,int *,int *) ;

__attribute__((used)) static svn_error_t *
FUNC_5(svn_fs_x__revision_file_t *VAR_2,
                  svn_fs_x__p2l_entry_t *VAR_3,
                  apr_uint32_t VAR_4,
                  apr_pool_t *VAR_5)
{
  if (VAR_4 != VAR_3->fnv1_checksum)
    {
      const char *VAR_6;

      FUNC_0(FUNC_4(&VAR_6, VAR_2, VAR_5));
      return FUNC_3(VAR_0, ((void*)0),
                               FUNC_1("Checksum mismatch in item at offset %s of "
                                 "length %s bytes in file %s"),
                               FUNC_2(VAR_5, VAR_3->offset),
                               FUNC_2(VAR_5, VAR_3->size),
                               VAR_6);
    }

  return VAR_1;
}
