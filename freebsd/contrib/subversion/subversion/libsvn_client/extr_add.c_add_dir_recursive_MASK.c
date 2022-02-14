
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_23__ TYPE_3__ ;
typedef struct TYPE_22__ TYPE_2__ ;
typedef struct TYPE_21__ TYPE_1__ ;


typedef int svn_magic__cookie_t ;
struct TYPE_21__ {scalar_t__ kind; scalar_t__ special; } ;
typedef TYPE_1__ svn_io_dirent2_t ;
struct TYPE_22__ {scalar_t__ apr_err; } ;
typedef TYPE_2__ svn_error_t ;
typedef scalar_t__ svn_depth_t ;
struct TYPE_23__ {int cancel_baton; TYPE_2__* (* cancel_func ) (int ) ;int config; int wc_ctx; int notify_baton2; int notify_func2; } ;
typedef TYPE_3__ svn_client_ctx_t ;
typedef scalar_t__ svn_boolean_t ;
typedef int apr_pool_t ;
typedef int apr_hash_t ;
typedef int apr_hash_index_t ;
typedef int apr_array_header_t ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (TYPE_2__*) ;
 scalar_t__ VAR_1 ;
 TYPE_2__* VAR_2 ;
 scalar_t__ VAR_3 ;
 TYPE_2__* FUNC_1 (char const*,int *,int *,scalar_t__,TYPE_3__*,int *) ;
 int * FUNC_2 (int *,int *) ;
 int * FUNC_3 (int *) ;
 char* FUNC_4 (int *) ;
 TYPE_1__* FUNC_5 (int *) ;
 TYPE_2__* FUNC_6 (int ) ;
 TYPE_2__* FUNC_7 (int ) ;
 TYPE_2__* FUNC_8 (int **,char const*,TYPE_3__*,int *,int *) ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 char* FUNC_9 (char const*,char const*,int *) ;
 int FUNC_10 (TYPE_2__*) ;
 TYPE_2__* FUNC_11 (TYPE_2__*) ;
 TYPE_2__* FUNC_12 (int **,char const*,scalar_t__,int *,int *) ;
 scalar_t__ VAR_7 ;
 scalar_t__ VAR_8 ;
 int FUNC_13 (int *) ;
 int * FUNC_14 (int *) ;
 int FUNC_15 (int *) ;
 TYPE_2__* FUNC_16 (int ,char const*,int *,scalar_t__,int ,int ,int *) ;
 TYPE_2__* FUNC_17 (int **,int ,char const*,int ,int *,int *) ;
 scalar_t__ FUNC_18 (char const*,int *) ;
 scalar_t__ FUNC_19 (char const*,int *,int *) ;

__attribute__((used)) static svn_error_t *
FUNC_20(const char *VAR_9,
                  svn_depth_t VAR_10,
                  svn_boolean_t VAR_11,
                  svn_boolean_t VAR_12,
                  svn_magic__cookie_t *VAR_13,
                  apr_hash_t *VAR_14,
                  svn_boolean_t VAR_15,
                  apr_array_header_t *VAR_16,
                  svn_client_ctx_t *VAR_17,
                  apr_pool_t *VAR_18,
                  apr_pool_t *VAR_19)
{
  svn_error_t *VAR_20;
  apr_pool_t *VAR_21;
  apr_hash_t *VAR_22;
  apr_hash_index_t *VAR_23;
  svn_boolean_t VAR_24 = VAR_0;


  if (VAR_17->cancel_func)
    FUNC_0(VAR_17->cancel_func(VAR_17->cancel_baton));

  VAR_21 = FUNC_14(VAR_19);


  VAR_20 = FUNC_16(VAR_17->wc_ctx, VAR_9, ((void*)0) ,
                              VAR_0 ,
                              VAR_17->notify_func2, VAR_17->notify_baton2,
                              VAR_21);
  if (VAR_20)
    {
      if (VAR_20->apr_err == VAR_1 && VAR_11)
        {
          FUNC_10(VAR_20);
          VAR_24 = VAR_3;
        }
      else if (VAR_20)
        {
          return FUNC_11(VAR_20);
        }
    }



  if (VAR_15)
    FUNC_0(FUNC_17(&VAR_16, VAR_17->wc_ctx, VAR_9,
                                VAR_17->config, VAR_18, VAR_21));
  if (!VAR_24 && VAR_14 == ((void*)0))
    {
      FUNC_0(FUNC_8(&VAR_14, VAR_9,
                                             VAR_17, VAR_19, VAR_21));
    }

  FUNC_0(FUNC_12(&VAR_22, VAR_9, VAR_3, VAR_19,
                              VAR_21));



  for (VAR_23 = FUNC_2(VAR_19, VAR_22); VAR_23; VAR_23 = FUNC_3(VAR_23))
    {
      const char *VAR_25 = FUNC_4(VAR_23);
      svn_io_dirent2_t *VAR_26 = FUNC_5(VAR_23);
      const char *VAR_27;

      FUNC_13(VAR_21);



      if (VAR_17->cancel_func)
        FUNC_0(VAR_17->cancel_func(VAR_17->cancel_baton));


      if (FUNC_18(VAR_25, VAR_21))
        continue;

      if (VAR_16
          && FUNC_19(VAR_25, VAR_16, VAR_21))
        continue;


      VAR_27 = FUNC_9(VAR_9, VAR_25, VAR_21);


      if (VAR_26->kind == VAR_7 && VAR_10 >= VAR_6)
        {
          svn_depth_t VAR_28 = VAR_10;
          if (VAR_10 == VAR_6)
            VAR_28 = VAR_4;





          if (VAR_15 && !VAR_24)
            VAR_15 = VAR_0;

          FUNC_0(FUNC_20(VAR_27, VAR_28,
                                    VAR_11, VAR_12,
                                    VAR_13, VAR_14,
                                    VAR_15, VAR_16, VAR_17,
                                    VAR_18, VAR_21));
        }
      else if ((VAR_26->kind == VAR_8 || VAR_26->special)
               && VAR_10 >= VAR_5)
        {
          VAR_20 = FUNC_1(VAR_27, VAR_13, VAR_14,
                         VAR_12, VAR_17, VAR_21);
          if (VAR_20 && VAR_20->apr_err == VAR_1 && VAR_11)
            FUNC_10(VAR_20);
          else
            FUNC_0(VAR_20);
        }
    }


  FUNC_15(VAR_21);

  return VAR_2;
}
