
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int * uuid; int * fsap_data; int * vtable; int * access_ctx; int * config; int * warning_baton; int warning; int * path; int * pool; } ;
typedef TYPE_1__ svn_fs_t ;
typedef int apr_pool_t ;
typedef int apr_hash_t ;


 TYPE_1__* FUNC_0 (int *,int) ;
 int VAR_0 ;

__attribute__((used)) static svn_fs_t *
FUNC_1(apr_hash_t *VAR_1, apr_pool_t *VAR_2)
{
  svn_fs_t *VAR_3 = FUNC_0(VAR_2, sizeof(*VAR_3));
  VAR_3->pool = VAR_2;
  VAR_3->path = ((void*)0);
  VAR_3->warning = VAR_0;
  VAR_3->warning_baton = ((void*)0);
  VAR_3->config = VAR_1;
  VAR_3->access_ctx = ((void*)0);
  VAR_3->vtable = ((void*)0);
  VAR_3->fsap_data = ((void*)0);
  VAR_3->uuid = ((void*)0);
  return VAR_3;
}
