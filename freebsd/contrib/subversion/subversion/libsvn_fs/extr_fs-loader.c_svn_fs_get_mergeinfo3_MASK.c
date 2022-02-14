
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int svn_mergeinfo_inheritance_t ;
struct TYPE_6__ {TYPE_1__* vtable; } ;
typedef TYPE_2__ svn_fs_root_t ;
typedef int svn_fs_mergeinfo_receiver_t ;
typedef int svn_error_t ;
typedef int svn_boolean_t ;
typedef int apr_pool_t ;
typedef int apr_array_header_t ;
struct TYPE_5__ {int (* get_mergeinfo ) (TYPE_2__*,int const*,int ,int ,int ,int ,void*,int *) ;} ;


 int FUNC_0 (TYPE_2__*,int const*,int ,int ,int ,int ,void*,int *) ;
 int * FUNC_1 (int ) ;

svn_error_t *
FUNC_2(svn_fs_root_t *VAR_0,
                      const apr_array_header_t *VAR_1,
                      svn_mergeinfo_inheritance_t VAR_2,
                      svn_boolean_t VAR_3,
                      svn_boolean_t VAR_4,
                      svn_fs_mergeinfo_receiver_t VAR_5,
                      void *VAR_6,
                      apr_pool_t *VAR_7)
{
  return FUNC_1(VAR_0->vtable->get_mergeinfo(
    VAR_0, VAR_1, VAR_2, VAR_3, VAR_4,
    VAR_5, VAR_6, VAR_7));
}
