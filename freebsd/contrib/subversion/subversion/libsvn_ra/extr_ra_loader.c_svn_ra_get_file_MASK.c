
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int svn_stream_t ;
typedef int svn_revnum_t ;
struct TYPE_6__ {TYPE_1__* vtable; } ;
typedef TYPE_2__ svn_ra_session_t ;
typedef int svn_error_t ;
typedef int apr_pool_t ;
typedef int apr_hash_t ;
struct TYPE_5__ {int * (* get_file ) (TYPE_2__*,char const*,int ,int *,int *,int **,int *) ;} ;


 int FUNC_0 (int ) ;
 int * FUNC_1 (TYPE_2__*,char const*,int ,int *,int *,int **,int *) ;
 int FUNC_2 (char const*) ;

svn_error_t *FUNC_3(svn_ra_session_t *VAR_0,
                             const char *VAR_1,
                             svn_revnum_t VAR_2,
                             svn_stream_t *VAR_3,
                             svn_revnum_t *VAR_4,
                             apr_hash_t **VAR_5,
                             apr_pool_t *VAR_6)
{
  FUNC_0(FUNC_2(VAR_1));
  return VAR_0->vtable->get_file(VAR_0, VAR_1, VAR_2, VAR_3,
                                   VAR_4, VAR_5, VAR_6);
}
