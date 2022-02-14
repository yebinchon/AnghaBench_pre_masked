
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_20__ TYPE_3__ ;
typedef struct TYPE_19__ TYPE_2__ ;
typedef struct TYPE_18__ TYPE_1__ ;


struct TYPE_19__ {struct install_baton_t* baton; } ;
typedef TYPE_2__ svn_stream_t ;
struct TYPE_20__ {scalar_t__ apr_err; } ;
typedef TYPE_3__ svn_error_t ;
typedef scalar_t__ svn_boolean_t ;
struct TYPE_18__ {int file; } ;
struct install_baton_t {int tmp_path; TYPE_1__ baton_apr; } ;
typedef int apr_pool_t ;


 scalar_t__ FUNC_0 (scalar_t__) ;
 int VAR_0 ;
 int FUNC_1 (TYPE_3__*) ;
 int FUNC_2 (int ) ;
 scalar_t__ VAR_1 ;
 TYPE_3__* VAR_2 ;
 int FUNC_3 (char const*,int *) ;
 int FUNC_4 (char const*) ;
 int FUNC_5 (TYPE_3__*) ;
 TYPE_3__* FUNC_6 (TYPE_3__*,TYPE_3__*) ;
 TYPE_3__* FUNC_7 (TYPE_3__*) ;
 TYPE_3__* FUNC_8 (int ,int ,char const*,int *) ;
 TYPE_3__* FUNC_9 (int ,int *) ;
 TYPE_3__* FUNC_10 (int ,char const*,int ,int *) ;
 TYPE_3__* FUNC_11 (int ,int *) ;

svn_error_t *
FUNC_12(svn_stream_t *VAR_3,
                           const char *VAR_4,
                           svn_boolean_t VAR_5,
                           apr_pool_t *VAR_6)
{
  struct install_baton_t *VAR_7 = VAR_3->baton;
  svn_error_t *VAR_8;

  FUNC_2(FUNC_4(VAR_4));
  FUNC_1(FUNC_9(VAR_7->baton_apr.file, VAR_6));

  VAR_8 = FUNC_10(VAR_7->tmp_path, VAR_4, VAR_0, VAR_6);


  if (VAR_5 && VAR_8 && FUNC_0(VAR_8->apr_err))
    {
      svn_error_t *VAR_9;

      VAR_9 = FUNC_11(FUNC_3(VAR_4,
                                                            VAR_6),
                                         VAR_6);

      if (VAR_9)

        return FUNC_7(FUNC_6(VAR_8, VAR_9));
      else

        FUNC_5(VAR_8);

      FUNC_1(FUNC_10(VAR_7->tmp_path, VAR_4, VAR_0, VAR_6));
    }
  else
    FUNC_1(VAR_8);

  return VAR_2;
}
