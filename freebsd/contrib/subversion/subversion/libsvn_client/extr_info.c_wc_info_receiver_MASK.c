
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {int client_receiver_baton; int * (* client_receiver_func ) (int ,char const*,TYPE_3__*,int *) ;} ;
typedef TYPE_1__ wc_info_receiver_baton_t ;
struct TYPE_7__ {int wc_info; int lock; int last_changed_author; int last_changed_date; int last_changed_rev; int size; int kind; int URL; int rev; int repos_UUID; int repos_root_URL; } ;
typedef TYPE_2__ svn_wc__info2_t ;
typedef int svn_error_t ;
struct TYPE_8__ {int wc_info; int lock; int last_changed_author; int last_changed_date; int last_changed_rev; int size; int kind; int URL; int rev; int repos_UUID; int repos_root_URL; } ;
typedef TYPE_3__ svn_client_info2_t ;
typedef int apr_pool_t ;


 int * FUNC_0 (int ,char const*,TYPE_3__*,int *) ;

__attribute__((used)) static svn_error_t *
FUNC_1(void *VAR_0,
                 const char *VAR_1,
                 const svn_wc__info2_t *VAR_2,
                 apr_pool_t *VAR_3)
{
  wc_info_receiver_baton_t *VAR_4 = VAR_0;
  svn_client_info2_t VAR_5;


  VAR_5.repos_root_URL = VAR_2->repos_root_URL;
  VAR_5.repos_UUID = VAR_2->repos_UUID;
  VAR_5.rev = VAR_2->rev;
  VAR_5.URL = VAR_2->URL;

  VAR_5.kind = VAR_2->kind;
  VAR_5.size = VAR_2->size;
  VAR_5.last_changed_rev = VAR_2->last_changed_rev;
  VAR_5.last_changed_date = VAR_2->last_changed_date;
  VAR_5.last_changed_author = VAR_2->last_changed_author;

  VAR_5.lock = VAR_2->lock;

  VAR_5.wc_info = VAR_2->wc_info;

  return VAR_4->client_receiver_func(VAR_4->client_receiver_baton,
                                 VAR_1, &VAR_5, VAR_3);
}
