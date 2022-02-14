
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_15__ TYPE_3__ ;
typedef struct TYPE_14__ TYPE_2__ ;
typedef struct TYPE_13__ TYPE_1__ ;


struct TYPE_14__ {TYPE_1__* report; scalar_t__ spillbuf; int inner_handler_baton; TYPE_3__* (* inner_handler ) (int *,int *,int ,int *) ;} ;
typedef TYPE_2__ update_delay_baton_t ;
struct TYPE_15__ {scalar_t__ apr_err; } ;
typedef TYPE_3__ svn_error_t ;
typedef void* svn_boolean_t ;
typedef int serf_request_t ;
typedef int serf_bucket_t ;
typedef scalar_t__ apr_status_t ;
typedef scalar_t__ apr_size_t ;
typedef int apr_pool_t ;
struct TYPE_13__ {scalar_t__ num_active_fetches; scalar_t__ num_active_propfinds; void* report_received; int pool; scalar_t__ send_all_mode; } ;


 scalar_t__ FUNC_0 (scalar_t__) ;
 scalar_t__ FUNC_1 (scalar_t__) ;
 scalar_t__ VAR_0 ;
 void* VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ FUNC_2 (scalar_t__) ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_3 (int ) ;
 TYPE_3__* VAR_6 ;
 void* VAR_7 ;
 TYPE_3__* FUNC_4 (TYPE_2__*,int *,char const*,scalar_t__,void*,int ,int *) ;
 scalar_t__ FUNC_5 (int *,int,char const**,scalar_t__*) ;
 int FUNC_6 (int *) ;
 TYPE_3__* FUNC_7 (int *,int *,int ,int *) ;
 int FUNC_8 (TYPE_3__*) ;
 TYPE_3__* FUNC_9 (TYPE_3__*) ;
 int FUNC_10 (int *) ;
 int * FUNC_11 (int *) ;
 int FUNC_12 (int *) ;
 TYPE_3__* FUNC_13 (scalar_t__,int *) ;
 scalar_t__ FUNC_14 (int ,int ,int ) ;
 int FUNC_15 (scalar_t__,char const*,scalar_t__,int *) ;

__attribute__((used)) static svn_error_t *
FUNC_16(serf_request_t *VAR_8,
                     serf_bucket_t *VAR_9,
                     void *VAR_10,
                     apr_pool_t *VAR_11)
{
  update_delay_baton_t *VAR_12 = VAR_10;
  apr_status_t VAR_13;
  apr_pool_t *VAR_14 = ((void*)0);

  if (! VAR_12->spillbuf)
    {
      if (VAR_12->report->send_all_mode)
        {






          return FUNC_9(VAR_12->inner_handler(VAR_8, VAR_9,
                                                    VAR_12->inner_handler_baton,
                                                    VAR_11));
        }

      while ((VAR_12->report->num_active_fetches + VAR_12->report->num_active_propfinds)
                 < VAR_3)
        {
          const char *VAR_15;
          apr_size_t VAR_16;
          svn_boolean_t VAR_17 = VAR_1;
          svn_error_t *VAR_18;

          VAR_13 = FUNC_5(VAR_9, VAR_2, &VAR_15, &VAR_16);
          if (FUNC_2(VAR_13))
            return FUNC_13(VAR_13, ((void*)0));
          else if (FUNC_1(VAR_13))
            VAR_12->report->report_received = VAR_17 = VAR_7;

          if (!VAR_14)
            VAR_14 = FUNC_11(VAR_11);
          else
            FUNC_10(VAR_14);

          if (VAR_16 == 0 && !VAR_17)
            return FUNC_13(VAR_13, ((void*)0));

          VAR_18 = FUNC_4(VAR_12, VAR_8, VAR_15, VAR_16, VAR_17,
                               FUNC_6(VAR_8),
                               VAR_14);

          if (VAR_18 && FUNC_2(VAR_18->apr_err))
            return FUNC_9(VAR_18);
          else if (VAR_18 && FUNC_0(VAR_18->apr_err))
            {
              FUNC_8(VAR_18);
            }
          else if (VAR_18 && (FUNC_1(VAR_18->apr_err)))
            {
              FUNC_12(VAR_14);
              return FUNC_9(VAR_18);
            }
          else
            {

              return FUNC_9(VAR_18);
            }
        }


      VAR_12->spillbuf = FUNC_14(VAR_4,
                                           VAR_5,
                                           VAR_12->report->pool);
    }


  do
    {
      const char *VAR_19;
      apr_size_t VAR_20;


      VAR_13 = FUNC_5(VAR_9, 8*VAR_2, &VAR_19, &VAR_20);

      if (!FUNC_2(VAR_13))
        FUNC_3(FUNC_15(VAR_12->spillbuf, VAR_19, VAR_20, VAR_11));
    }
  while (VAR_13 == VAR_0);

  if (FUNC_1(VAR_13))
    VAR_12->report->report_received = VAR_7;




  if (VAR_13)
    return FUNC_13(VAR_13, ((void*)0));
  else
    return VAR_6;
}
