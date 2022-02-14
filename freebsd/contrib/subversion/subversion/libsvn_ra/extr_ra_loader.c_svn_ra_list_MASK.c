
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int svn_revnum_t ;
struct TYPE_7__ {TYPE_1__* vtable; } ;
typedef TYPE_2__ svn_ra_session_t ;
typedef int svn_ra_dirent_receiver_t ;
typedef int svn_error_t ;
typedef int svn_depth_t ;
typedef int apr_uint32_t ;
typedef int apr_pool_t ;
typedef int apr_array_header_t ;
struct TYPE_6__ {int * (* list ) (TYPE_2__*,char const*,int ,int const*,int ,int ,int ,void*,int *) ;} ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int * FUNC_2 (TYPE_2__*,char const*,int ,int const*,int ,int ,int ,void*,int *) ;
 int * FUNC_3 (int ,int *,int *) ;
 int FUNC_4 (TYPE_2__*,int ,int *,int *) ;
 int FUNC_5 (char const*) ;

svn_error_t *
FUNC_6(svn_ra_session_t *VAR_2,
            const char *VAR_3,
            svn_revnum_t VAR_4,
            const apr_array_header_t *VAR_5,
            svn_depth_t VAR_6,
            apr_uint32_t VAR_7,
            svn_ra_dirent_receiver_t VAR_8,
            void *VAR_9,
            apr_pool_t *VAR_10)
{
  FUNC_1(FUNC_5(VAR_3));
  if (!VAR_2->vtable->list)
    return FUNC_3(VAR_0, ((void*)0), ((void*)0));

  FUNC_0(FUNC_4(VAR_2, VAR_1,
                                        ((void*)0), VAR_10));

  return VAR_2->vtable->list(VAR_2, VAR_3, VAR_4, VAR_5, VAR_6,
                               VAR_7, VAR_8, VAR_9,
                               VAR_10);
}
