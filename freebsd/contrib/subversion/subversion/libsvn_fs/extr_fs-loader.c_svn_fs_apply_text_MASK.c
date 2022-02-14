
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int svn_stream_t ;
struct TYPE_6__ {TYPE_1__* vtable; } ;
typedef TYPE_2__ svn_fs_root_t ;
typedef int svn_error_t ;
typedef int svn_checksum_t ;
typedef int apr_pool_t ;
struct TYPE_5__ {int (* apply_text ) (int **,TYPE_2__*,char const*,int *,int *) ;} ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int **,TYPE_2__*,char const*,int *,int *) ;
 int VAR_0 ;
 int FUNC_2 (int **,int ,char const*,int *) ;
 int * FUNC_3 (int ) ;

svn_error_t *
FUNC_4(svn_stream_t **VAR_1, svn_fs_root_t *VAR_2,
                  const char *VAR_3, const char *VAR_4,
                  apr_pool_t *VAR_5)
{
  svn_checksum_t *VAR_6;



  FUNC_0(FUNC_2(&VAR_6, VAR_0, VAR_4,
                                 VAR_5));

  return FUNC_3(VAR_2->vtable->apply_text(VAR_1, VAR_2, VAR_3,
                                                  VAR_6, VAR_5));
}
