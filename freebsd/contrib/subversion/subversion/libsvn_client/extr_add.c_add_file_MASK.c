
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


typedef int svn_node_kind_t ;
typedef int svn_magic__cookie_t ;
typedef int svn_error_t ;
struct TYPE_5__ {int notify_baton2; int notify_func2; int wc_ctx; } ;
typedef TYPE_1__ svn_client_ctx_t ;
typedef scalar_t__ svn_boolean_t ;
typedef int apr_pool_t ;
typedef int apr_hash_t ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int * VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int * FUNC_1 (int *) ;
 int FUNC_2 (int **,int ,TYPE_1__*,int *,int *) ;
 int FUNC_3 (int **,char const**,char const*,int *,int *,TYPE_1__*,int *,int *) ;
 int FUNC_4 (char const*,int *) ;
 int FUNC_5 (int *,int ,int ) ;
 int FUNC_6 (char const*,int *,scalar_t__*,int *) ;
 int FUNC_7 (int ,int *) ;
 int FUNC_8 (int ,char const*,int *,int ,int ,int ,int *) ;

__attribute__((used)) static svn_error_t *
FUNC_9(const char *VAR_4,
         svn_magic__cookie_t *VAR_5,
         apr_hash_t *VAR_6,
         svn_boolean_t VAR_7,
         svn_client_ctx_t *VAR_8,
         apr_pool_t *VAR_9)
{
  apr_hash_t *VAR_10;
  const char *VAR_11;
  svn_node_kind_t VAR_12;
  svn_boolean_t VAR_13;


  FUNC_0(FUNC_6(VAR_4, &VAR_12, &VAR_13, VAR_9));


  if (VAR_13)
    {
      VAR_11 = ((void*)0);
      VAR_10 = FUNC_1(VAR_9);
      FUNC_5(VAR_10, VAR_3,
                    FUNC_7(VAR_2, VAR_9));
    }
  else
    {
      apr_hash_t *VAR_14 = ((void*)0);





      if (!VAR_7)
        {
          if (VAR_6 == ((void*)0))
            FUNC_0(FUNC_2(
              &VAR_14, FUNC_4(VAR_4,VAR_9),
              VAR_8, VAR_9, VAR_9));
          else
            VAR_14 = VAR_6;
        }



      FUNC_0(FUNC_3(&VAR_10, &VAR_11,
                                               VAR_4, VAR_5,
                                               VAR_14, VAR_8, VAR_9,
                                               VAR_9));
    }


  FUNC_0(FUNC_8(VAR_8->wc_ctx, VAR_4, VAR_10,
                                VAR_0 ,
                                VAR_8->notify_func2, VAR_8->notify_baton2, VAR_9));

  return VAR_1;
}
