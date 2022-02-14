
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_8__ {int seen_in_pollset; scalar_t__ completed_requests; TYPE_1__* address; int skt; int probable_keepalive_limit; scalar_t__ completed_responses; } ;
typedef TYPE_2__ serf_connection_t ;
typedef int error ;
typedef int apr_status_t ;
typedef int apr_socklen_t ;
typedef int apr_os_sock_t ;
typedef int apr_int16_t ;
struct TYPE_7__ {struct TYPE_7__* next; } ;


 int VAR_0 ;
 int FUNC_0 (int) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (int ) ;
 scalar_t__ FUNC_3 (int ) ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_4 (int *,int ) ;
 int FUNC_5 (int ,int ,int ,char*,int*) ;
 int FUNC_6 (TYPE_2__*) ;
 int FUNC_7 (TYPE_2__*,int) ;
 int FUNC_8 (TYPE_2__*) ;

apr_status_t FUNC_9(serf_connection_t *VAR_9,
                                      apr_int16_t VAR_10)
{
    apr_status_t VAR_11;





    if ((VAR_10 & VAR_3) != 0) {
        if ((VAR_11 = FUNC_6(VAR_9)) != VAR_5)
            return VAR_11;




        if ((VAR_9->seen_in_pollset & VAR_2) != 0) {
            return VAR_5;
        }
    }
    if ((VAR_10 & VAR_2) != 0) {





        if (VAR_9->completed_responses) {
            return FUNC_7(VAR_9, 1);
        }
        return VAR_6;
    }
    if ((VAR_10 & VAR_1) != 0) {







        if (VAR_9->completed_requests && !VAR_9->probable_keepalive_limit) {
            return FUNC_7(VAR_9, 1);
        }
        return VAR_0;
    }
    if ((VAR_10 & VAR_4) != 0) {
        if ((VAR_11 = FUNC_8(VAR_9)) != VAR_5)
            return VAR_11;
    }
    return VAR_5;
}
