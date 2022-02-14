
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int svn_revnum_t ;
struct TYPE_6__ {TYPE_1__* vtable; } ;
typedef TYPE_2__ svn_ra_session_t ;
typedef int svn_ra_reporter3_t ;
typedef int svn_error_t ;
typedef int svn_depth_t ;
typedef int svn_delta_editor_t ;
typedef int apr_pool_t ;
struct TYPE_5__ {int * (* do_status ) (TYPE_2__*,int const**,void**,char const*,int ,int ,int const*,void*,int *) ;} ;


 int FUNC_0 (int) ;
 int * FUNC_1 (TYPE_2__*,int const**,void**,char const*,int ,int ,int const*,void*,int *) ;
 scalar_t__ FUNC_2 (char const*) ;
 scalar_t__ FUNC_3 (char const*) ;

svn_error_t *FUNC_4(svn_ra_session_t *VAR_0,
                               const svn_ra_reporter3_t **VAR_1,
                               void **VAR_2,
                               const char *VAR_3,
                               svn_revnum_t VAR_4,
                               svn_depth_t VAR_5,
                               const svn_delta_editor_t *VAR_6,
                               void *VAR_7,
                               apr_pool_t *VAR_8)
{
  FUNC_0(FUNC_2(VAR_3)
                 || FUNC_3(VAR_3));
  return VAR_0->vtable->do_status(VAR_0,
                                    VAR_1, VAR_2,
                                    VAR_3, VAR_4, VAR_5,
                                    VAR_6, VAR_7, VAR_8);
}
