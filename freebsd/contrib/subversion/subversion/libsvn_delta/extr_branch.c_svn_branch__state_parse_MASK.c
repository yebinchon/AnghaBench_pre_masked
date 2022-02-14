
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


typedef int svn_stream_t ;
typedef int svn_error_t ;
typedef int svn_element__payload_t ;
typedef int svn_element__content_t ;
struct TYPE_10__ {int rev; } ;
typedef TYPE_2__ svn_branch__txn_t ;
struct TYPE_11__ {TYPE_1__* priv; } ;
typedef TYPE_3__ svn_branch__state_t ;
typedef int svn_boolean_t ;
typedef int apr_pool_t ;
struct TYPE_9__ {int is_flat; int history; } ;


 int FUNC_0 (int ) ;
 int * VAR_0 ;
 int VAR_1 ;
 TYPE_3__* FUNC_1 (char*,int,TYPE_2__*,int *) ;
 int FUNC_2 (TYPE_3__*,int,int *,int *) ;
 int FUNC_3 (int *,int *,int *,int *) ;
 int FUNC_4 (char*,int*,int*,int *,int *,int *) ;
 int FUNC_5 (int*,int *,int*,char const**,int *,int *,int *) ;
 int * FUNC_6 (int,char const*,int *,int *) ;
 int * FUNC_7 (int ,char*,int,int *) ;
 int * FUNC_8 (int *) ;

__attribute__((used)) static svn_error_t *
FUNC_9(svn_branch__state_t **VAR_2,
                       svn_branch__txn_t *VAR_3,
                       svn_stream_t *VAR_4,
                       apr_pool_t *VAR_5,
                       apr_pool_t *VAR_6)
{
  char VAR_7[1000];
  int VAR_8, VAR_9;
  svn_branch__state_t *VAR_10;
  int VAR_11;

  FUNC_0(FUNC_4(VAR_7, &VAR_8, &VAR_9,
                            VAR_4, VAR_6, VAR_6));

  VAR_10 = FUNC_1(VAR_7, VAR_8, VAR_3,
                                     VAR_5);


  FUNC_0(FUNC_3(&VAR_10->priv->history,
                        VAR_4, VAR_5, VAR_6));



  for (VAR_11 = 0; VAR_11 < VAR_9; VAR_11++)
    {
      int VAR_12, VAR_13;
      const char *VAR_14;
      svn_boolean_t VAR_15;

      FUNC_0(FUNC_5(&VAR_12,
                                 &VAR_15, &VAR_13, &VAR_14,
                                 VAR_4, VAR_6, VAR_6));

      if (VAR_14)
        {
          svn_element__payload_t *VAR_16;
          svn_element__content_t *VAR_17;

          if (! VAR_15)
            {
              VAR_16 = FUNC_7(VAR_3->rev, VAR_7, VAR_12,
                                                        VAR_5);
            }
          else
            {
              VAR_16
                = FUNC_8(VAR_5);
            }
          VAR_17 = FUNC_6(VAR_13,
                                                VAR_14, VAR_16,
                                                VAR_6);
          FUNC_0(FUNC_2(VAR_10, VAR_12, VAR_17,
                                           VAR_6));
        }
    }

  VAR_10->priv->is_flat = VAR_1;
  *VAR_2 = VAR_10;
  return VAR_0;
}
