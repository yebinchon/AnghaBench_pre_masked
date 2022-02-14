
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef int svn_lock_t ;
typedef int svn_error_t ;
struct TYPE_8__ {int size; int last_author; int time; int created_rev; int kind; } ;
typedef TYPE_1__ svn_dirent_t ;
struct TYPE_9__ {int * wc_info; int size; int * lock; int last_changed_author; int last_changed_date; int last_changed_rev; int repos_root_URL; int repos_UUID; int kind; int rev; int URL; } ;
typedef TYPE_2__ svn_client_info2_t ;
struct TYPE_10__ {int repos_root_url; int repos_uuid; int rev; int url; } ;
typedef TYPE_3__ svn_client__pathrev_t ;
typedef int apr_pool_t ;


 int * VAR_0 ;
 TYPE_2__* FUNC_0 (int *,int) ;

__attribute__((used)) static svn_error_t *
FUNC_1(svn_client_info2_t **VAR_1,
                       const svn_dirent_t *VAR_2,
                       svn_lock_t *VAR_3,
                       const svn_client__pathrev_t *VAR_4,
                       apr_pool_t *VAR_5)
{
  svn_client_info2_t *VAR_6 = FUNC_0(VAR_5, sizeof(*VAR_6));

  VAR_6->URL = VAR_4->url;
  VAR_6->rev = VAR_4->rev;
  VAR_6->kind = VAR_2->kind;
  VAR_6->repos_UUID = VAR_4->repos_uuid;
  VAR_6->repos_root_URL = VAR_4->repos_root_url;
  VAR_6->last_changed_rev = VAR_2->created_rev;
  VAR_6->last_changed_date = VAR_2->time;
  VAR_6->last_changed_author = VAR_2->last_author;
  VAR_6->lock = VAR_3;
  VAR_6->size = VAR_2->size;

  VAR_6->wc_info = ((void*)0);

  *VAR_1 = VAR_6;
  return VAR_0;
}
