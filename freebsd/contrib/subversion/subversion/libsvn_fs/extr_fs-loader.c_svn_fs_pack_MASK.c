
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int svn_fs_t ;
typedef int svn_fs_pack_notify_t ;
typedef int svn_error_t ;
typedef int svn_cancel_func_t ;
struct TYPE_3__ {int (* pack_fs ) (int *,char const*,int ,void*,int ,void*,int ,int *,int ) ;} ;
typedef TYPE_1__ fs_library_vtable_t ;
typedef int apr_pool_t ;


 int FUNC_0 (int ) ;
 int * VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (TYPE_1__**,char const*,int *) ;
 int * FUNC_2 (int *,int *) ;
 int FUNC_3 (int *,char const*,int ,void*,int ,void*,int ,int *,int ) ;

svn_error_t *
FUNC_4(const char *VAR_3,
            svn_fs_pack_notify_t VAR_4,
            void *VAR_5,
            svn_cancel_func_t VAR_6,
            void *VAR_7,
            apr_pool_t *VAR_8)
{
  fs_library_vtable_t *VAR_9;
  svn_fs_t *VAR_10;

  FUNC_0(FUNC_1(&VAR_9, VAR_3, VAR_8));
  VAR_10 = FUNC_2(((void*)0), VAR_8);

  FUNC_0(VAR_9->pack_fs(VAR_10, VAR_3, VAR_4, VAR_5,
                          VAR_6, VAR_7, VAR_2,
                          VAR_8, VAR_1));
  return VAR_0;
}
