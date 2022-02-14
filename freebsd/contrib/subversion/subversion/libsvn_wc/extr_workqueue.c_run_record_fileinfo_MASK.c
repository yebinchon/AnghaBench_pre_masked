
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int work_item_baton_t ;
typedef int svn_wc__db_t ;
struct TYPE_5__ {scalar_t__ next; int len; int data; TYPE_1__* children; } ;
typedef TYPE_2__ svn_skel_t ;
typedef scalar_t__ svn_node_kind_t ;
typedef int svn_error_t ;
typedef int svn_cancel_func_t ;
typedef int svn_boolean_t ;
typedef scalar_t__ apr_time_t ;
typedef int apr_pool_t ;
typedef scalar_t__ apr_int64_t ;
struct TYPE_4__ {TYPE_2__* next; } ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 char* FUNC_1 (int *,int ,int ) ;
 int FUNC_2 (int *,char const*,int ,int *) ;
 int * FUNC_3 (int ) ;
 int FUNC_4 (char const*,scalar_t__*,int *,int *) ;
 int FUNC_5 (scalar_t__,char const*,int *) ;
 scalar_t__ VAR_1 ;
 int FUNC_6 (scalar_t__*,scalar_t__,int *) ;
 int FUNC_7 (char const**,int *,char const*,char const*,int *,int *) ;

__attribute__((used)) static svn_error_t *
FUNC_8(work_item_baton_t *VAR_2,
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
  apr_time_t VAR_12 = 0;

  VAR_10 = FUNC_1(VAR_8, VAR_9->data, VAR_9->len);

  FUNC_0(FUNC_7(&VAR_11, VAR_3, VAR_5,
                                  VAR_10, VAR_8, VAR_8));

  if (VAR_9->next)
    {
      apr_int64_t VAR_13;

      FUNC_0(FUNC_6(&VAR_13, VAR_9->next, VAR_8));
      VAR_12 = (apr_time_t)VAR_13;
    }

  if (VAR_12 != 0)
    {
      svn_node_kind_t VAR_14;
      svn_boolean_t VAR_15;


      FUNC_0(FUNC_4(VAR_11, &VAR_14, &VAR_15,
                                        VAR_8));



      if (VAR_14 == VAR_1 && !VAR_15)
        FUNC_0(FUNC_5(VAR_12, VAR_11,
                                              VAR_8));



    }


  return FUNC_3(FUNC_2(VAR_2, VAR_11,
                                                 VAR_0 ,
                                                 VAR_8));
}
