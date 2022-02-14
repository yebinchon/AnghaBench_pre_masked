
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_3__ ;
typedef struct TYPE_12__ TYPE_2__ ;
typedef struct TYPE_11__ TYPE_1__ ;


typedef int work_item_baton_t ;
typedef int svn_wc__db_t ;
struct TYPE_12__ {scalar_t__ next; int len; int data; TYPE_1__* children; } ;
typedef TYPE_2__ svn_skel_t ;
struct TYPE_13__ {int apr_err; } ;
typedef TYPE_3__ svn_error_t ;
typedef int svn_cancel_func_t ;
typedef int svn_boolean_t ;
typedef int apr_pool_t ;
typedef scalar_t__ apr_int64_t ;
struct TYPE_11__ {TYPE_2__* next; } ;


 scalar_t__ FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (int ) ;
 int VAR_0 ;
 int FUNC_2 (int ) ;
 scalar_t__ FUNC_3 (int ) ;
 int VAR_1 ;
 char* FUNC_4 (int *,int ,int ) ;
 int FUNC_5 (TYPE_3__*) ;
 TYPE_3__* FUNC_6 (TYPE_3__*) ;
 TYPE_3__* FUNC_7 (char const*,int *) ;
 TYPE_3__* FUNC_8 (char const*,int ,int ,void*,int *) ;
 int FUNC_9 (scalar_t__*,scalar_t__,int *) ;
 int FUNC_10 (char const**,int *,char const*,char const*,int *,int *) ;

__attribute__((used)) static svn_error_t *
FUNC_11(work_item_baton_t *VAR_2,
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
  svn_boolean_t VAR_12;

  VAR_10 = FUNC_4(VAR_8, VAR_9->data, VAR_9->len);
  FUNC_2(FUNC_10(&VAR_11, VAR_3, VAR_5,
                                  VAR_10, VAR_8, VAR_8));

  VAR_12 = VAR_0;
  if (VAR_9->next)
    {
      apr_int64_t VAR_13;
      FUNC_2(FUNC_9(&VAR_13, VAR_9->next, VAR_8));

      VAR_12 = (VAR_13 != 0);
    }


  if (VAR_12)
    return FUNC_6(
                FUNC_8(VAR_11, VAR_1,
                                   VAR_6, VAR_7,
                                   VAR_8));
  else
    {
      svn_error_t *VAR_14;

      VAR_14 = FUNC_7(VAR_11, VAR_8);

      if (VAR_14 && (FUNC_0(VAR_14->apr_err)
                  || FUNC_3(VAR_14->apr_err)
                  || FUNC_1(VAR_14->apr_err)))
        {
          FUNC_5(VAR_14);
          VAR_14 = ((void*)0);
        }

      return FUNC_6(VAR_14);
    }
}
