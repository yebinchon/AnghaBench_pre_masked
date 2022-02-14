
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int conn_latency; int capabilities; } ;
typedef TYPE_1__ svn_ra_serf__session_t ;
typedef int svn_error_t ;
typedef int serf_request_t ;
typedef int serf_connection_t ;
typedef int serf_bucket_t ;
struct TYPE_5__ {int inner_baton; int * (* inner_handler ) (int *,int *,int ,int *) ;scalar_t__ headers_processed; TYPE_1__* session; } ;
typedef TYPE_2__ options_context_t ;
typedef int apr_pool_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 scalar_t__ VAR_9 ;
 int VAR_10 ;
 int * VAR_11 ;
 int FUNC_0 (int *,int ,TYPE_2__*) ;
 int * FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int * FUNC_3 (int *) ;
 int * FUNC_4 (int *,int *,int ,int *) ;
 int FUNC_5 (int ,int ) ;
 int FUNC_6 (int ,int ,int *) ;

__attribute__((used)) static svn_error_t *
FUNC_7(serf_request_t *VAR_12,
                         serf_bucket_t *VAR_13,
                         void *VAR_14,
                         apr_pool_t *VAR_15)
{
  options_context_t *VAR_16 = VAR_14;

  if (!VAR_16->headers_processed)
    {
      svn_ra_serf__session_t *VAR_17 = VAR_16->session;
      serf_bucket_t *VAR_18 = FUNC_1(VAR_13);
      serf_connection_t *VAR_19;


      FUNC_6(VAR_17->capabilities, VAR_8,
                    VAR_11);
      FUNC_6(VAR_17->capabilities, VAR_1,
                    VAR_11);
      FUNC_6(VAR_17->capabilities, VAR_7,
                    ((void*)0));
      FUNC_6(VAR_17->capabilities, VAR_6,
                    VAR_11);
      FUNC_6(VAR_17->capabilities, VAR_0,
                    VAR_11);
      FUNC_6(VAR_17->capabilities, VAR_4,
                    VAR_11);
      FUNC_6(VAR_17->capabilities, VAR_2,
                    VAR_11);
      FUNC_6(VAR_17->capabilities, VAR_3,
                    VAR_11);
      FUNC_6(VAR_17->capabilities, VAR_5,
                    VAR_11);


      FUNC_0(VAR_18, VAR_10,
                             VAR_16);



      if (!FUNC_5(VAR_17->capabilities, VAR_7))
        FUNC_6(VAR_17->capabilities, VAR_7,
                      VAR_11);


      VAR_19 = FUNC_3(VAR_12);
      VAR_17->conn_latency = FUNC_2(VAR_19);

      VAR_16->headers_processed = VAR_9;
    }


  return VAR_16->inner_handler(VAR_12, VAR_13, VAR_16->inner_baton, VAR_15);
}
