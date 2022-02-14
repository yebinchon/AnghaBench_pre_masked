
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int svn_revnum_t ;
struct TYPE_6__ {TYPE_1__* vtable; } ;
typedef TYPE_2__ svn_ra_session_t ;
typedef int svn_error_t ;
typedef int apr_pool_t ;
typedef int apr_hash_t ;
struct TYPE_5__ {int * (* get_dir ) (TYPE_2__*,int **,int *,int **,char const*,int ,int ,int *) ;} ;


 int VAR_0 ;
 int FUNC_0 (int) ;
 int * FUNC_1 (TYPE_2__*,int **,int *,int **,char const*,int ,int ,int *) ;

svn_error_t *FUNC_2(svn_ra_session_t *VAR_1,
                            const char *VAR_2,
                            svn_revnum_t VAR_3,
                            apr_hash_t **VAR_4,
                            svn_revnum_t *VAR_5,
                            apr_hash_t **VAR_6,
                            apr_pool_t *VAR_7)
{
  FUNC_0(*VAR_2 != '/');
  return VAR_1->vtable->get_dir(VAR_1, VAR_4, VAR_5, VAR_6,
                                  VAR_2, VAR_3, VAR_0, VAR_7);
}
