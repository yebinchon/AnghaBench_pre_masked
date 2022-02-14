
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {scalar_t__ revision; scalar_t__ number; } ;
struct TYPE_5__ {scalar_t__ offset; scalar_t__ size; scalar_t__ type; scalar_t__ fnv1_checksum; TYPE_1__ item; } ;
typedef TYPE_2__ svn_fs_fs__p2l_entry_t ;
typedef int svn_error_t ;
typedef scalar_t__ apr_uint64_t ;
typedef int apr_pool_t ;
typedef int apr_file_t ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int) ;
 scalar_t__ VAR_0 ;
 int * VAR_1 ;
 int FUNC_2 (int *,scalar_t__,int *) ;

svn_error_t *
FUNC_3(apr_file_t *VAR_2,
                                     const svn_fs_fs__p2l_entry_t *VAR_3,
                                     apr_pool_t *VAR_4)
{
  apr_uint64_t VAR_5;







  FUNC_1(VAR_3->offset >= 0);
  FUNC_1(VAR_3->size >= 0);
  FUNC_1( VAR_3->item.revision >= 0
                 || VAR_3->item.revision == VAR_0);

  VAR_5 = VAR_3->item.revision == VAR_0
           ? 0
           : ((apr_uint64_t)VAR_3->item.revision + 1);




  FUNC_0(FUNC_2(VAR_2, VAR_3->offset,
                                      VAR_4));
  FUNC_0(FUNC_2(VAR_2, VAR_3->size,
                                      VAR_4));
  FUNC_0(FUNC_2(VAR_2, VAR_3->type,
                                      VAR_4));
  FUNC_0(FUNC_2(VAR_2, VAR_3->fnv1_checksum,
                                      VAR_4));
  FUNC_0(FUNC_2(VAR_2, VAR_5,
                                      VAR_4));
  FUNC_0(FUNC_2(VAR_2, VAR_3->item.number,
                                      VAR_4));

  return VAR_1;
}
