
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int work_item_baton_t ;
typedef int svn_wc__db_t ;
struct TYPE_6__ {TYPE_3__* next; int len; int data; TYPE_1__* children; } ;
typedef TYPE_2__ svn_skel_t ;
typedef scalar_t__ svn_revnum_t ;
typedef int svn_error_t ;
typedef int svn_cancel_func_t ;
typedef int svn_boolean_t ;
typedef int apr_pool_t ;
typedef scalar_t__ apr_int64_t ;
struct TYPE_7__ {struct TYPE_7__* next; } ;
struct TYPE_5__ {TYPE_2__* next; } ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int) ;
 scalar_t__ VAR_1 ;
 int FUNC_2 (scalar_t__) ;
 int * VAR_2 ;
 int VAR_3 ;
 char* FUNC_3 (int *,int ,int ) ;
 int FUNC_4 (scalar_t__*,TYPE_3__*,int *) ;
 int FUNC_5 (int *,int *,scalar_t__*,int *,int *,int *,int *,int *,int *,int *,int *,int *,int *,int *,int *,int *,int *,char const*,int *,int *) ;
 int FUNC_6 (int *,char const*,int ,int ,int ,scalar_t__,int *,int *,int *) ;
 int FUNC_7 (char const**,int *,char const*,char const*,int *,int *) ;

__attribute__((used)) static svn_error_t *
FUNC_8(work_item_baton_t *VAR_4,
                svn_wc__db_t *VAR_5,
                const svn_skel_t *VAR_6,
                const char *VAR_7,
                svn_cancel_func_t VAR_8,
                void *VAR_9,
                apr_pool_t *VAR_10)
{
  const svn_skel_t *VAR_11 = VAR_6->children->next;
  const char *VAR_12;
  const char *VAR_13;
  svn_revnum_t VAR_14 = VAR_1;
  apr_int64_t VAR_15;

  VAR_12 = FUNC_3(VAR_10, VAR_11->data, VAR_11->len);
  FUNC_0(FUNC_7(&VAR_13, VAR_5, VAR_7,
                                  VAR_12, VAR_10, VAR_10));
  FUNC_0(FUNC_4(&VAR_15, VAR_11->next, VAR_10));

  if (VAR_11->next->next)
    {
      VAR_14 = (svn_revnum_t)VAR_15;

      FUNC_0(FUNC_4(&VAR_15, VAR_11->next->next, VAR_10));
    }
  else
    {
      svn_boolean_t VAR_16;

      FUNC_1(VAR_3 <= 28);

      VAR_16 = (VAR_15 != 0);

      if (VAR_16)
        {
          FUNC_0(FUNC_5(((void*)0), ((void*)0),
                                           &VAR_14, ((void*)0),
                                           ((void*)0), ((void*)0), ((void*)0),
                                           ((void*)0), ((void*)0), ((void*)0), ((void*)0), ((void*)0), ((void*)0),
                                           ((void*)0), ((void*)0), ((void*)0),
                                           VAR_5, VAR_13,
                                           VAR_10, VAR_10));
        }
    }

  FUNC_0(FUNC_6(VAR_5, VAR_13,
                                 VAR_0 ,
                                 FUNC_2(VAR_14), VAR_0,
                                 VAR_14,
                                 ((void*)0), ((void*)0), VAR_10));

  return VAR_2;
}
