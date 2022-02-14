
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_7__ {int sdb; } ;
typedef TYPE_1__ svn_wc__db_wcroot_t ;
typedef int svn_wc__db_t ;
struct TYPE_8__ {int have_recurse; int items; TYPE_1__* wcroot; } ;
typedef TYPE_2__ svn_wc__db_commit_queue_t ;
typedef int svn_error_t ;
typedef int commit_queue_item_t ;
typedef int apr_pool_t ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int * VAR_1 ;
 int FUNC_2 (TYPE_1__*) ;
 int FUNC_3 (int *,int,int) ;
 TYPE_2__* FUNC_4 (int *,int) ;
 int FUNC_5 (char const*) ;
 int FUNC_6 (TYPE_1__**,char const**,int *,char const*,int *,int *) ;

svn_error_t *
FUNC_7(svn_wc__db_commit_queue_t **VAR_2,
                               svn_wc__db_t *VAR_3,
                               const char *VAR_4,
                               apr_pool_t *VAR_5,
                               apr_pool_t *VAR_6)
{
  svn_wc__db_wcroot_t *VAR_7;
  const char *VAR_8;
  svn_wc__db_commit_queue_t *VAR_9;

  FUNC_1(FUNC_5(VAR_4));

  FUNC_0(FUNC_6(&VAR_7, &VAR_8, VAR_3,
                              VAR_4, VAR_5, VAR_6));
  FUNC_2(VAR_7);

  VAR_9 = FUNC_4(VAR_5, sizeof(*VAR_9));

  FUNC_1(VAR_7->sdb);

  VAR_9->wcroot = VAR_7;
  VAR_9->items = FUNC_3(VAR_5, 64,
                            sizeof(commit_queue_item_t*));
  VAR_9->have_recurse = VAR_0;

  *VAR_2 = VAR_9;
  return VAR_1;
}
