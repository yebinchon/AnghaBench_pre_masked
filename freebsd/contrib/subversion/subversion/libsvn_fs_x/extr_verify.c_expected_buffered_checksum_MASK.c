
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int svn_fs_x__revision_file_t ;
struct TYPE_4__ {int size; } ;
typedef TYPE_1__ svn_fs_x__p2l_entry_t ;
typedef int svn_error_t ;
typedef int apr_size_t ;
typedef int apr_pool_t ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int) ;
 int * VAR_1 ;
 int FUNC_2 (int *,TYPE_1__*,int ,int *) ;
 int FUNC_3 (unsigned char*,int ) ;
 int FUNC_4 (int *,unsigned char*,int ) ;

__attribute__((used)) static svn_error_t *
FUNC_5(svn_fs_x__revision_file_t *VAR_2,
                           svn_fs_x__p2l_entry_t *VAR_3,
                           apr_pool_t *VAR_4)
{
  unsigned char VAR_5[VAR_0];
  FUNC_1(VAR_3->size <= VAR_0);

  FUNC_0(FUNC_4(VAR_2, VAR_5, (apr_size_t)VAR_3->size));
  FUNC_0(FUNC_2(VAR_2, VAR_3,
                            FUNC_3(VAR_5, (apr_size_t)VAR_3->size),
                            VAR_4));

  return VAR_1;
}
