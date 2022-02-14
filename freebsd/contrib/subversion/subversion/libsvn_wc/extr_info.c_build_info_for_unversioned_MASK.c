
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {void* recorded_size; int depth; void* copyfrom_rev; } ;
typedef TYPE_1__ svn_wc_info_t ;
struct TYPE_5__ {TYPE_1__* wc_info; int * lock; int * last_changed_author; scalar_t__ last_changed_date; void* last_changed_rev; void* size; int kind; void* rev; int * repos_root_URL; int * repos_UUID; int * URL; } ;
typedef TYPE_2__ svn_wc__info2_t ;
typedef int svn_error_t ;
typedef int apr_pool_t ;


 void* VAR_0 ;
 void* VAR_1 ;
 int * VAR_2 ;
 void* FUNC_0 (int *,int) ;
 int VAR_3 ;
 int VAR_4 ;

__attribute__((used)) static svn_error_t *
FUNC_1(svn_wc__info2_t **VAR_5,
                           apr_pool_t *VAR_6)
{
  svn_wc__info2_t *VAR_7 = FUNC_0(VAR_6, sizeof(*VAR_7));
  svn_wc_info_t *VAR_8 = FUNC_0(VAR_6, sizeof (*VAR_8));

  VAR_7->URL = ((void*)0);
  VAR_7->repos_UUID = ((void*)0);
  VAR_7->repos_root_URL = ((void*)0);
  VAR_7->rev = VAR_1;
  VAR_7->kind = VAR_4;
  VAR_7->size = VAR_0;
  VAR_7->last_changed_rev = VAR_1;
  VAR_7->last_changed_date = 0;
  VAR_7->last_changed_author = ((void*)0);
  VAR_7->lock = ((void*)0);

  VAR_7->wc_info = VAR_8;

  VAR_8->copyfrom_rev = VAR_1;
  VAR_8->depth = VAR_3;
  VAR_8->recorded_size = VAR_0;

  *VAR_5 = VAR_7;
  return VAR_2;
}
