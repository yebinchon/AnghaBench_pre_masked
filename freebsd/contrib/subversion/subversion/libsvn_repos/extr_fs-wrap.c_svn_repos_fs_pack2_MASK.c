
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int db_path; } ;
typedef TYPE_1__ svn_repos_t ;
typedef scalar_t__ svn_repos_notify_func_t ;
typedef int svn_error_t ;
typedef int svn_cancel_func_t ;
struct pack_notify_baton {void* notify_baton; scalar_t__ notify_func; } ;
typedef int apr_pool_t ;


 int * VAR_0 ;
 int * FUNC_0 (int ,int *,struct pack_notify_baton*,int ,void*,int *) ;

svn_error_t *
FUNC_1(svn_repos_t *VAR_1,
                   svn_repos_notify_func_t VAR_2,
                   void *VAR_3,
                   svn_cancel_func_t VAR_4,
                   void *VAR_5,
                   apr_pool_t *VAR_6)
{
  struct pack_notify_baton VAR_7;

  VAR_7.notify_func = VAR_2;
  VAR_7.notify_baton = VAR_3;

  return FUNC_0(VAR_1->db_path,
                     VAR_2 ? VAR_0 : ((void*)0),
                     VAR_2 ? &VAR_7 : ((void*)0),
                     VAR_4, VAR_5, VAR_6);
}
