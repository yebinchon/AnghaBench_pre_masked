
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_16__ TYPE_3__ ;
typedef struct TYPE_15__ TYPE_1__ ;


struct TYPE_15__ {TYPE_3__* err; int kind; } ;
typedef TYPE_1__ svn_wc_notify_t ;
typedef int (* svn_wc_notify_func2_t ) (void*,TYPE_1__*,int *) ;
typedef int svn_wc_context_t ;
struct TYPE_16__ {scalar_t__ apr_err; } ;
typedef TYPE_3__ svn_error_t ;
typedef int svn_cancel_func_t ;
typedef int apr_pool_t ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 TYPE_3__* VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (char const**,char const**,char const*,int *) ;
 int FUNC_2 (TYPE_3__*) ;
 TYPE_3__* FUNC_3 (TYPE_3__*) ;
 int VAR_5 ;
 TYPE_3__* FUNC_4 (char const*,char const*,int ,int *) ;
 int FUNC_5 (int *,char const**,char const*,char const*,char*,int ,int *,int *) ;
 TYPE_3__* FUNC_6 (char const*,int ,int *) ;
 int VAR_6 ;
 int FUNC_7 (int *,int *,char const*,int ,int *,int *) ;
 TYPE_3__* FUNC_8 (int *,char const*,char const*,int ,int ,void*,int *) ;
 TYPE_3__* FUNC_9 (int *,char const*,char const*,int *) ;
 TYPE_1__* FUNC_10 (char const*,int ,int *) ;
 int VAR_7 ;

__attribute__((used)) static svn_error_t *
FUNC_11(svn_wc_context_t *VAR_8,
                      const char *VAR_9,
                      const char *VAR_10,
                      svn_cancel_func_t VAR_11,
                      void *VAR_12,
                      svn_wc_notify_func2_t VAR_13,
                      void *VAR_14,
                      apr_pool_t *VAR_15)
{
  svn_error_t *VAR_16 = VAR_3;

  FUNC_0(FUNC_7(((void*)0), VAR_8, VAR_10,
                                     VAR_0, VAR_15, VAR_15));

  VAR_16 = FUNC_8(VAR_8, VAR_9, VAR_10, VAR_0,
                                VAR_11, VAR_12, VAR_15);
  if (VAR_16 && (VAR_16->apr_err == VAR_1))
    {
      const char *VAR_17;
      const char *VAR_18;
      const char *VAR_19;

      FUNC_2(VAR_16);
      VAR_16 = VAR_3;

      FUNC_1(&VAR_17, &VAR_18, VAR_10, VAR_15);


      FUNC_0(FUNC_5(((void*)0), &VAR_19,
                                         VAR_17, VAR_18, ".OLD",
                                         VAR_5,
                                         VAR_15, VAR_15));
      FUNC_2(FUNC_6(VAR_19, VAR_4, VAR_15));



      VAR_16 = FUNC_9(VAR_8, VAR_10, VAR_19,
                              VAR_15);

      if (VAR_16 && VAR_16->apr_err == VAR_2)
        {
          FUNC_2(VAR_16);



          VAR_16 = FUNC_4(VAR_10, VAR_19, VAR_0, VAR_15);
        }


      if (VAR_13)
        {
          svn_wc_notify_t *VAR_20;

          VAR_20 = FUNC_10(VAR_16 ? VAR_10 : VAR_19,
                                        VAR_7,
                                        VAR_15);
          VAR_20->kind = VAR_6;
          VAR_20->err = VAR_16;

          VAR_13(VAR_14, VAR_20, VAR_15);
        }
    }

  return FUNC_3(VAR_16);
}
