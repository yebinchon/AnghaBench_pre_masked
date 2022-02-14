
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {scalar_t__ used; int * record_map; int * result_pool; int member_0; } ;
typedef TYPE_1__ work_item_baton_t ;
typedef int svn_wc__db_t ;
typedef int svn_skel_t ;
typedef int svn_error_t ;
typedef int (* svn_cancel_func_t ) (void*) ;
typedef scalar_t__ apr_uint64_t ;
typedef int apr_pool_t ;
struct TYPE_5__ {char* data; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (char*) ;
 int FUNC_1 (int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int * VAR_3 ;
 scalar_t__ VAR_4 ;
 int FUNC_2 (char*) ;
 int * FUNC_3 (TYPE_1__*,int *,char const*,int *,int (*) (void*),void*,int *) ;
 char* FUNC_4 (char*) ;
 int FUNC_5 (int*,char const*) ;
 int FUNC_6 (char const*,int *) ;
 int * FUNC_7 (int ,int *,char*) ;
 int * FUNC_8 (int ,int *,int ,int ,int,char const*) ;
 int FUNC_9 (int *) ;
 void* FUNC_10 (int *) ;
 int FUNC_11 (int *) ;
 TYPE_2__* FUNC_12 (int *,int *) ;
 int FUNC_13 (scalar_t__*,int **,int *,char const*,scalar_t__,int *,int *) ;
 int FUNC_14 (scalar_t__*,int **,int *,char const*,scalar_t__,int *,int *,int *) ;

svn_error_t *
FUNC_15(svn_wc__db_t *VAR_5,
               const char *VAR_6,
               svn_cancel_func_t VAR_7,
               void *VAR_8,
               apr_pool_t *VAR_9)
{
  apr_pool_t *VAR_10 = FUNC_10(VAR_9);
  apr_uint64_t VAR_11 = 0;
  work_item_baton_t VAR_12 = { 0 };
  VAR_12.result_pool = FUNC_10(VAR_9);
  while (VAR_4)
    {
      apr_uint64_t VAR_13;
      svn_skel_t *VAR_14;
      svn_error_t *VAR_15;

      FUNC_9(VAR_10);

      if (! VAR_12.used)
        {



          FUNC_1(FUNC_13(&VAR_13, &VAR_14, VAR_5, VAR_6,
                                           VAR_11, VAR_10, VAR_10));
        }
      else
        {



          FUNC_1(FUNC_14(&VAR_13, &VAR_14,
                                                      VAR_5, VAR_6,
                                                      VAR_11, VAR_12.record_map,
                                                      VAR_10,
                                                      VAR_12.result_pool));

          FUNC_9(VAR_12.result_pool);
          VAR_12.record_map = ((void*)0);
          VAR_12.used = VAR_0;
        }




      if (VAR_7)
        FUNC_1(VAR_7(VAR_8));



      if (VAR_14 == ((void*)0))
        break;

      VAR_15 = FUNC_3(&VAR_12, VAR_5, VAR_6, VAR_14,
                               VAR_7, VAR_8, VAR_10);
      if (VAR_15)
        {
          const char *VAR_16 = FUNC_12(VAR_14, VAR_9)->data;

          return FUNC_8(VAR_2, VAR_15,
                                   FUNC_2("Failed to run the WC DB work queue "
                                     "associated with '%s', work item %d %s"),
                                   FUNC_6(VAR_6,
                                                          VAR_9),
                                   (int)VAR_13, VAR_16);
        }



      VAR_11 = VAR_13;
    }

  FUNC_11(VAR_10);
  return VAR_3;
}
