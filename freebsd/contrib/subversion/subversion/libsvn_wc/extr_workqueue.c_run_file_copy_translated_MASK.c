
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int work_item_baton_t ;
typedef int svn_wc__db_t ;
typedef int svn_subst_eol_style_t ;
struct TYPE_9__ {TYPE_3__* next; int len; int data; TYPE_1__* children; } ;
typedef TYPE_4__ svn_skel_t ;
typedef int svn_error_t ;
typedef int svn_cancel_func_t ;
typedef int svn_boolean_t ;
typedef int apr_pool_t ;
typedef int apr_hash_t ;
struct TYPE_8__ {TYPE_2__* next; int len; int data; } ;
struct TYPE_7__ {int len; int data; } ;
struct TYPE_6__ {TYPE_4__* next; } ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int * VAR_1 ;
 int VAR_2 ;
 char* FUNC_1 (int *,int ,int ) ;
 int FUNC_2 (char const*,char const*,char const*,int ,int *,int ,int ,int ,void*,int *) ;
 int FUNC_3 (char const**,int *,char const*,char const*,int *,int *) ;
 int FUNC_4 (int *,char const**,int **,int *,int *,char const*,int *,int ,int *,int *) ;

__attribute__((used)) static svn_error_t *
FUNC_5(work_item_baton_t *VAR_3,
                         svn_wc__db_t *VAR_4,
                         const svn_skel_t *VAR_5,
                         const char *VAR_6,
                         svn_cancel_func_t VAR_7,
                         void *VAR_8,
                         apr_pool_t *VAR_9)
{
  const svn_skel_t *VAR_10 = VAR_5->children->next;
  const char *VAR_11, *VAR_12, *VAR_13;
  const char *VAR_14;
  svn_subst_eol_style_t VAR_15;
  const char *VAR_16;
  apr_hash_t *VAR_17;
  svn_boolean_t VAR_18;

  VAR_14 = FUNC_1(VAR_9, VAR_10->data, VAR_10->len);
  FUNC_0(FUNC_3(&VAR_11, VAR_4, VAR_6,
                                  VAR_14, VAR_9, VAR_9));

  VAR_14 = FUNC_1(VAR_9, VAR_10->next->data,
                               VAR_10->next->len);
  FUNC_0(FUNC_3(&VAR_12, VAR_4, VAR_6,
                                  VAR_14, VAR_9, VAR_9));

  VAR_14 = FUNC_1(VAR_9, VAR_10->next->next->data,
                                VAR_10->next->next->len);
  FUNC_0(FUNC_3(&VAR_13, VAR_4, VAR_6,
                                  VAR_14, VAR_9, VAR_9));

  FUNC_0(FUNC_4(&VAR_15, &VAR_16,
                                     &VAR_17,
                                     &VAR_18,
                                     VAR_4, VAR_11, ((void*)0), VAR_0,
                                     VAR_9, VAR_9));

  FUNC_0(FUNC_2(VAR_12, VAR_13,
                                        VAR_16, VAR_2 ,
                                        VAR_17, VAR_2 ,
                                        VAR_18,
                                        VAR_7, VAR_8,
                                        VAR_9));
  return VAR_1;
}
