
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int file; } ;
typedef TYPE_1__ svn_fs_x__revision_file_t ;
typedef int svn_error_t ;
typedef int apr_pool_t ;


 int FUNC_0 (int ) ;
 int FUNC_1 (TYPE_1__*) ;
 int * FUNC_2 (int ) ;
 int FUNC_3 (char const**,int ,int *) ;

svn_error_t *
FUNC_4(const char **VAR_0,
                        svn_fs_x__revision_file_t *VAR_1,
                        apr_pool_t *VAR_2)
{
  FUNC_0(FUNC_1(VAR_1));

  return FUNC_2(FUNC_3(VAR_0, VAR_1->file,
                                              VAR_2));
}
