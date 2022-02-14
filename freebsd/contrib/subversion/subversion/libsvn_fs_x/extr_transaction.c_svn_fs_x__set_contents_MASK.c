
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int svn_stream_t ;
struct TYPE_4__ {scalar_t__ kind; } ;
typedef TYPE_1__ svn_fs_x__noderev_t ;
typedef int svn_fs_t ;
typedef int svn_error_t ;
typedef int apr_pool_t ;


 int VAR_0 ;
 int FUNC_0 (char*) ;
 int * FUNC_1 (int **,int *,TYPE_1__*,int *) ;
 int * FUNC_2 (int ,int *,int ) ;
 scalar_t__ VAR_1 ;

svn_error_t *
FUNC_3(svn_stream_t **VAR_2,
                       svn_fs_t *VAR_3,
                       svn_fs_x__noderev_t *VAR_4,
                       apr_pool_t *VAR_5)
{
  if (VAR_4->kind != VAR_1)
    return FUNC_2(VAR_0, ((void*)0),
                            FUNC_0("Can't set text contents of a directory"));

  return FUNC_1(VAR_2, VAR_3, VAR_4, VAR_5);
}
