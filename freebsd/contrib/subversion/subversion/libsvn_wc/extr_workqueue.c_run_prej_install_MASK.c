
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef int work_item_baton_t ;
typedef int svn_wc__db_t ;
struct TYPE_8__ {struct TYPE_8__* next; int len; int data; TYPE_1__* children; } ;
typedef TYPE_2__ svn_skel_t ;
typedef int svn_error_t ;
typedef int svn_cancel_func_t ;
typedef int apr_pool_t ;
struct TYPE_7__ {TYPE_2__* next; } ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int * VAR_1 ;
 char* FUNC_1 (int *,int ,int ) ;
 int FUNC_2 (char const*,char const*,int ,int *) ;
 int FUNC_3 (char const**,int *,int *,int *,int *,int *,char const*,TYPE_2__*,int *,int *) ;
 int FUNC_4 (char const**,int *,char const*,TYPE_2__ const*,int ,void*,int *,int *) ;
 int FUNC_5 (char const**,int *,char const*,char const*,int *,int *) ;
 int FUNC_6 (TYPE_2__**,int *,int *,int *,char const*,int *,int *) ;

__attribute__((used)) static svn_error_t *
FUNC_7(work_item_baton_t *VAR_2,
                 svn_wc__db_t *VAR_3,
                 const svn_skel_t *VAR_4,
                 const char *VAR_5,
                 svn_cancel_func_t VAR_6,
                 void *VAR_7,
                 apr_pool_t *VAR_8)
{
  const svn_skel_t *VAR_9 = VAR_4->children->next;
  const char *VAR_10;
  const char *VAR_11;
  svn_skel_t *VAR_12;
  const svn_skel_t *VAR_13;
  const char *VAR_14;
  const char *VAR_15;

  VAR_10 = FUNC_1(VAR_8, VAR_9->data, VAR_9->len);
  FUNC_0(FUNC_5(&VAR_11, VAR_3, VAR_5,
                                  VAR_10, VAR_8, VAR_8));

  FUNC_0(FUNC_6(&VAR_12, ((void*)0), ((void*)0), VAR_3, VAR_11,
                                   VAR_8, VAR_8));

  FUNC_0(FUNC_3(&VAR_15,
                                              ((void*)0), ((void*)0), ((void*)0), ((void*)0),
                                              VAR_3, VAR_11, VAR_12,
                                              VAR_8, VAR_8));

  if (VAR_9->next != ((void*)0))
    VAR_13 = VAR_9->next;
  else
    VAR_13 = ((void*)0);


  FUNC_0(FUNC_4(&VAR_14,
                                  VAR_3, VAR_11,
                                  VAR_13,
                                  VAR_6, VAR_7,
                                  VAR_8, VAR_8));


  FUNC_0(FUNC_2(VAR_14,
                              VAR_15, VAR_0,
                              VAR_8));

  return VAR_1;
}
