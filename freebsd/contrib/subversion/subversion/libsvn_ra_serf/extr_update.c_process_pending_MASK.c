
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_3__ ;
typedef struct TYPE_13__ TYPE_2__ ;
typedef struct TYPE_12__ TYPE_1__ ;


struct TYPE_13__ {int * spillbuf; TYPE_1__* report; } ;
typedef TYPE_2__ update_delay_baton_t ;
struct TYPE_14__ {int apr_err; } ;
typedef TYPE_3__ svn_error_t ;
typedef int svn_boolean_t ;
typedef int serf_bucket_alloc_t ;
typedef int apr_size_t ;
typedef int apr_pool_t ;
struct TYPE_12__ {scalar_t__ num_active_fetches; scalar_t__ num_active_propfinds; int report_received; } ;


 scalar_t__ FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (int ) ;
 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_2 (int ) ;
 TYPE_3__* VAR_2 ;
 int VAR_3 ;
 TYPE_3__* FUNC_3 (TYPE_2__*,int *,char const*,int ,int ,int *,int *) ;
 int * FUNC_4 (int *,int *,int *) ;
 int FUNC_5 (TYPE_3__*) ;
 TYPE_3__* FUNC_6 (TYPE_3__*) ;
 int FUNC_7 (int *) ;
 int * FUNC_8 (int *) ;
 int FUNC_9 (int *) ;
 int FUNC_10 (char const**,int *,int *,int *) ;

__attribute__((used)) static svn_error_t *
FUNC_11(update_delay_baton_t *VAR_4,
                apr_pool_t *VAR_5)
{
  apr_pool_t *VAR_6 = ((void*)0);
  serf_bucket_alloc_t *VAR_7 = ((void*)0);

  while ((VAR_4->report->num_active_fetches + VAR_4->report->num_active_propfinds)
            < VAR_1)
    {
      const char *VAR_8;
      apr_size_t VAR_9;
      svn_boolean_t VAR_10;
      svn_error_t *VAR_11;

      if (!VAR_6)
        {
          VAR_6 = FUNC_8(VAR_5);
          VAR_7 = FUNC_4(VAR_5, ((void*)0), ((void*)0));
        }
      else
        FUNC_7(VAR_6);

      FUNC_2(FUNC_10(&VAR_8, &VAR_9, VAR_4->spillbuf, VAR_6));

      if (VAR_8 == ((void*)0) && !VAR_4->report->report_received)
        break;
      else if (VAR_8 == ((void*)0))
        VAR_10 = VAR_3;
      else
        VAR_10 = VAR_0;

      VAR_11 = FUNC_3(VAR_4, ((void*)0) , VAR_8, VAR_9,
                           VAR_10, VAR_7, VAR_6);

      if (VAR_11 && FUNC_0(VAR_11->apr_err))
        {
          FUNC_5(VAR_11);
        }
      else if (VAR_11 && FUNC_1(VAR_11->apr_err))
        {
          FUNC_5(VAR_11);

          FUNC_9(VAR_6);
          VAR_4->spillbuf = ((void*)0);
          return VAR_2;
        }
      else if (VAR_11)
        return FUNC_6(VAR_11);
    }

  if (VAR_6)
    FUNC_9(VAR_6);

  return VAR_2;
}
