
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_2__ ;
typedef struct TYPE_12__ TYPE_1__ ;


struct TYPE_12__ {scalar_t__ apr_err; } ;
typedef TYPE_1__ svn_error_t ;
struct hotcopy_ctx_t {int src_len; scalar_t__ incremental; int dest; int cancel_baton; int (* cancel_func ) (int ) ;} ;
typedef int apr_pool_t ;
struct TYPE_13__ {scalar_t__ filetype; } ;
typedef TYPE_2__ apr_finfo_t ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (int ) ;
 scalar_t__ VAR_3 ;
 TYPE_1__* VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 TYPE_1__* FUNC_1 (char const*,int *) ;
 int FUNC_2 (char const*) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ,char const*,int *) ;
 char* FUNC_5 (int ,char const*,int *) ;
 int FUNC_6 (TYPE_1__*) ;
 TYPE_1__* FUNC_7 (TYPE_1__*) ;
 TYPE_1__* FUNC_8 (char const*,char const*,int ,int *) ;
 TYPE_1__* FUNC_9 (char const*,char const*,int *) ;
 scalar_t__ FUNC_10 (int ,int ) ;

__attribute__((used)) static svn_error_t *FUNC_11(void *VAR_9,
                                      const char *VAR_10,
                                      const apr_finfo_t *VAR_11,
                                      apr_pool_t *VAR_12)
{
  const struct hotcopy_ctx_t *VAR_13 = VAR_9;
  const char *VAR_14;
  const char *VAR_15;

  if (VAR_13->cancel_func)
    FUNC_0(VAR_13->cancel_func(VAR_13->cancel_baton));

  if (FUNC_2(VAR_10) == VAR_13->src_len)
    {
      VAR_14 = "";
    }
  else
    {
      VAR_14 = &VAR_10[VAR_13->src_len+1];


      if (FUNC_10
          (FUNC_4(VAR_5, VAR_14, VAR_12),
           VAR_5) == 0)
        return VAR_4;

      if (FUNC_10
          (FUNC_4(VAR_7, VAR_14,
                                           VAR_12),
           VAR_7) == 0)
        return VAR_4;

      if (FUNC_10
          (FUNC_4(VAR_6, VAR_14, VAR_12),
           VAR_6) == 0)
        return VAR_4;
    }

  VAR_15 = FUNC_5(VAR_13->dest, VAR_14, VAR_12);

  if (VAR_11->filetype == VAR_0)
    {
      svn_error_t *VAR_16;

      VAR_16 = FUNC_1(VAR_15, VAR_12);
      if (VAR_13->incremental && VAR_16 && VAR_16->apr_err == VAR_3)
        {
          FUNC_6(VAR_16);
          VAR_16 = VAR_4;
        }
      return FUNC_7(VAR_16);
    }
  else if (VAR_11->filetype == VAR_2)
    return FUNC_8(VAR_10, VAR_15, VAR_8, VAR_12);
  else if (VAR_11->filetype == VAR_1)
    return FUNC_9(VAR_10, VAR_15, VAR_12);
  else
    return VAR_4;
}
