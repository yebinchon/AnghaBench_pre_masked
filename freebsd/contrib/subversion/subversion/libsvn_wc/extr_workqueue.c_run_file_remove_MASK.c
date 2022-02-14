
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int work_item_baton_t ;
typedef int svn_wc__db_t ;
struct TYPE_5__ {int len; int data; TYPE_1__* children; } ;
typedef TYPE_2__ svn_skel_t ;
typedef int svn_error_t ;
typedef int svn_cancel_func_t ;
typedef int apr_pool_t ;
struct TYPE_4__ {TYPE_2__* next; } ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 char* FUNC_1 (int *,int ,int ) ;
 int * FUNC_2 (int ) ;
 int FUNC_3 (char const*,int ,int *) ;
 int FUNC_4 (char const**,int *,char const*,char const*,int *,int *) ;

__attribute__((used)) static svn_error_t *
FUNC_5(work_item_baton_t *VAR_1,
                svn_wc__db_t *VAR_2,
                const svn_skel_t *VAR_3,
                const char *VAR_4,
                svn_cancel_func_t VAR_5,
                void *VAR_6,
                apr_pool_t *VAR_7)
{
  const svn_skel_t *VAR_8 = VAR_3->children->next;
  const char *VAR_9;
  const char *VAR_10;

  VAR_9 = FUNC_1(VAR_7, VAR_8->data, VAR_8->len);
  FUNC_0(FUNC_4(&VAR_10, VAR_2, VAR_4,
                                  VAR_9, VAR_7, VAR_7));


  return FUNC_2(FUNC_3(VAR_10, VAR_0,
                                             VAR_7));
}
