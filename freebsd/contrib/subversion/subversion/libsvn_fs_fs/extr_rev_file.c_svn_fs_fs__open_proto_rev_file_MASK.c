
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int svn_fs_t ;
struct TYPE_4__ {int stream; int start_revision; int is_packed; int * file; } ;
typedef TYPE_1__ svn_fs_fs__revision_file_t ;
typedef int svn_fs_fs__id_part_t ;
typedef int svn_error_t ;
typedef int apr_pool_t ;
typedef int apr_file_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ) ;
 int VAR_4 ;
 int * VAR_5 ;
 int VAR_6 ;
 TYPE_1__* FUNC_1 (int *,int) ;
 int FUNC_2 (int *,int const*,int *) ;
 int FUNC_3 (int **,int ,int,int ,int *) ;
 int FUNC_4 (int *,int ,int *) ;

svn_error_t *
FUNC_5(svn_fs_fs__revision_file_t **VAR_7,
                               svn_fs_t *VAR_8,
                               const svn_fs_fs__id_part_t *VAR_9,
                               apr_pool_t* VAR_10,
                               apr_pool_t *VAR_11)
{
  apr_file_t *VAR_12;
  FUNC_0(FUNC_3(&VAR_12,
                           FUNC_2(VAR_8, VAR_9,
                                                         VAR_11),
                           VAR_2 | VAR_0, VAR_1,
                           VAR_10));

  *VAR_7 = FUNC_1(VAR_10, sizeof(**VAR_7));
  (*VAR_7)->file = VAR_12;
  (*VAR_7)->is_packed = VAR_3;
  (*VAR_7)->start_revision = VAR_4;
  (*VAR_7)->stream = FUNC_4(VAR_12, VAR_6, VAR_10);

  return VAR_5;
}
