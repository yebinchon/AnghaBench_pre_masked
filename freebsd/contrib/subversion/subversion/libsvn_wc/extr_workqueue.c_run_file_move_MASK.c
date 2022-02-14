
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_15__ TYPE_4__ ;
typedef struct TYPE_14__ TYPE_3__ ;
typedef struct TYPE_13__ TYPE_2__ ;
typedef struct TYPE_12__ TYPE_1__ ;


typedef int work_item_baton_t ;
typedef int svn_wc__db_t ;
struct TYPE_14__ {TYPE_2__* next; int len; int data; TYPE_1__* children; } ;
typedef TYPE_3__ svn_skel_t ;
struct TYPE_15__ {int apr_err; } ;
typedef TYPE_4__ svn_error_t ;
typedef int svn_cancel_func_t ;
typedef int apr_pool_t ;
struct TYPE_13__ {int len; int data; } ;
struct TYPE_12__ {TYPE_3__* next; } ;


 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (TYPE_4__*) ;
 TYPE_4__* VAR_0 ;
 char* FUNC_2 (int *,int ,int ) ;
 int FUNC_3 (TYPE_4__*) ;
 TYPE_4__* FUNC_4 (char const*,char const*,int *) ;
 TYPE_4__* FUNC_5 (char const**,int *,char const*,char const*,int *,int *) ;

__attribute__((used)) static svn_error_t *
FUNC_6(work_item_baton_t *VAR_1,
              svn_wc__db_t *VAR_2,
              const svn_skel_t *VAR_3,
              const char *VAR_4,
              svn_cancel_func_t VAR_5,
              void *VAR_6,
              apr_pool_t *VAR_7)
{
  const svn_skel_t *VAR_8 = VAR_3->children->next;
  const char *VAR_9, *VAR_10;
  const char *VAR_11;
  svn_error_t *VAR_12;

  VAR_11 = FUNC_2(VAR_7, VAR_8->data, VAR_8->len);
  FUNC_1(FUNC_5(&VAR_9, VAR_2, VAR_4, VAR_11,
                                  VAR_7, VAR_7));
  VAR_11 = FUNC_2(VAR_7, VAR_8->next->data,
                                 VAR_8->next->len);
  FUNC_1(FUNC_5(&VAR_10, VAR_2, VAR_4, VAR_11,
                                  VAR_7, VAR_7));




  VAR_12 = FUNC_4(VAR_9, VAR_10, VAR_7);


  if (VAR_12 && FUNC_0(VAR_12->apr_err))
    FUNC_3(VAR_12);
  else
    FUNC_1(VAR_12);

  return VAR_0;
}
