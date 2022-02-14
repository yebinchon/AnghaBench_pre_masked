
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int pool; int file; } ;
typedef TYPE_1__ svn_fs_x__revision_file_t ;
typedef int svn_error_t ;
typedef int apr_size_t ;


 int FUNC_0 (int ) ;
 int FUNC_1 (TYPE_1__*) ;
 int * FUNC_2 (int ) ;
 int FUNC_3 (int ,void*,int ,int *,int *,int ) ;

svn_error_t *
FUNC_4(svn_fs_x__revision_file_t *VAR_0,
                        void *VAR_1,
                        apr_size_t VAR_2)
{
  FUNC_0(FUNC_1(VAR_0));
  return FUNC_2(FUNC_3(VAR_0->file, VAR_1, VAR_2,
                                                ((void*)0), ((void*)0), VAR_0->pool));
}
