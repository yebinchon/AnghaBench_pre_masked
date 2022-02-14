
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int svn_error_t ;
typedef int serve_params_t ;
typedef enum connection_handling_mode { ____Placeholder_connection_handling_mode } connection_handling_mode ;
struct TYPE_4__ {int ref_count; int usock; int * params; int * pool; } ;
typedef TYPE_1__ connection_t ;
typedef scalar_t__ apr_status_t ;
typedef int apr_socket_t ;
typedef int apr_proc_t ;
typedef int apr_pool_t ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (scalar_t__) ;
 scalar_t__ FUNC_1 (scalar_t__) ;
 scalar_t__ FUNC_2 (scalar_t__) ;
 int * VAR_2 ;
 int FUNC_3 (char*) ;
 TYPE_1__* FUNC_4 (int *,int) ;
 scalar_t__ FUNC_5 (int *,int *,int *,int ,int *) ;
 scalar_t__ FUNC_6 (int *,int *,int *) ;
 int VAR_3 ;
 int FUNC_7 (int ) ;
 int * FUNC_8 (scalar_t__,int ) ;
 int * FUNC_9 (int *) ;
 scalar_t__ FUNC_10 () ;

__attribute__((used)) static svn_error_t *
FUNC_11(connection_t **VAR_4,
                  apr_socket_t *VAR_5,
                  serve_params_t *VAR_6,
                  enum connection_handling_mode VAR_7,
                  apr_pool_t *VAR_8)
{
  apr_status_t VAR_9;





  apr_pool_t *VAR_10 = FUNC_9(VAR_8);
  *VAR_4 = FUNC_4(VAR_10, sizeof(**VAR_4));
  (*VAR_4)->pool = VAR_10;
  (*VAR_4)->params = VAR_6;
  (*VAR_4)->ref_count = 1;

  do
    {





      VAR_9 = FUNC_6(&(*VAR_4)->usock, VAR_5,
                                 VAR_10);
      if (VAR_7 == VAR_3)
        {
          apr_proc_t VAR_11;


          while (FUNC_5(&VAR_11, ((void*)0), ((void*)0), VAR_1,
            VAR_10) == VAR_0)
            ;
        }
    }
  while (FUNC_2(VAR_9)
    || FUNC_0(VAR_9)
    || FUNC_1(VAR_9));

  return VAR_9
       ? FUNC_8(VAR_9, FUNC_3("Can't accept client connection"))
       : VAR_2;
}
