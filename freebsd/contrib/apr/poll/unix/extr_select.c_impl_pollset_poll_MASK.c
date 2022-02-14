
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_15__ TYPE_6__ ;
typedef struct TYPE_14__ TYPE_5__ ;
typedef struct TYPE_13__ TYPE_4__ ;
typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


struct timeval {long tv_sec; long tv_usec; } ;
typedef int fd_set ;
typedef size_t apr_uint32_t ;
typedef int apr_status_t ;
struct TYPE_14__ {scalar_t__ nelts; int flags; TYPE_4__* p; TYPE_2__** wakeup_pipe; } ;
typedef TYPE_5__ apr_pollset_t ;
struct TYPE_12__ {TYPE_2__* f; TYPE_1__* s; } ;
struct TYPE_15__ {scalar_t__ desc_type; int rtnevents; TYPE_3__ desc; } ;
typedef TYPE_6__ apr_pollfd_t ;
typedef int apr_os_sock_t ;
typedef scalar_t__ apr_interval_time_t ;
typedef int apr_int32_t ;
struct TYPE_13__ {TYPE_6__* result_set; TYPE_6__* query_set; scalar_t__ maxfd; int set_type; int exceptset; int writeset; int readset; } ;
struct TYPE_11__ {int filedes; } ;
struct TYPE_10__ {int socketdes; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 scalar_t__ FUNC_0 (int ,int *) ;
 scalar_t__ FUNC_1 (int ) ;
 int FUNC_2 () ;
 int FUNC_3 (TYPE_5__*) ;
 int FUNC_4 (scalar_t__) ;
 scalar_t__ FUNC_5 (scalar_t__) ;
 scalar_t__ FUNC_6 (scalar_t__) ;
 int FUNC_7 (int *,int *,int) ;
 int FUNC_8 (scalar_t__,int *,int *,int *,struct timeval*) ;
 int FUNC_9 (scalar_t__,int *,int *,int *,struct timeval*) ;

__attribute__((used)) static apr_status_t FUNC_10(apr_pollset_t *VAR_9,
                                      apr_interval_time_t VAR_10,
                                      apr_int32_t *VAR_11,
                                      const apr_pollfd_t **VAR_12)
{
    int VAR_13;
    apr_uint32_t VAR_14, VAR_15;
    struct timeval VAR_16, *VAR_17;
    fd_set VAR_18, VAR_19, VAR_20;
    apr_status_t VAR_21 = VAR_7;
    if (VAR_10 < 0) {
        VAR_17 = ((void*)0);
    }
    else {
        VAR_16.tv_sec = (long) FUNC_5(VAR_10);
        VAR_16.tv_usec = (long) FUNC_6(VAR_10);
        VAR_17 = &VAR_16;
    }

    FUNC_7(&VAR_18, &(VAR_9->p->readset), sizeof(fd_set));
    FUNC_7(&VAR_19, &(VAR_9->p->writeset), sizeof(fd_set));
    FUNC_7(&VAR_20, &(VAR_9->p->exceptset), sizeof(fd_set));
        VAR_13 = FUNC_9(VAR_9->p->maxfd + 1, &VAR_18, &VAR_19, &VAR_20,
                    VAR_17);

    (*VAR_11) = VAR_13;
    if (VAR_13 < 0) {
        return FUNC_2();
    }
    if (VAR_13 == 0) {
        return VAR_8;
    }
    VAR_15 = 0;
    for (VAR_14 = 0; VAR_14 < VAR_9->nelts; VAR_14++) {
        apr_os_sock_t VAR_22;
        if (VAR_9->p->query_set[VAR_14].desc_type == VAR_6) {
            VAR_22 = VAR_9->p->query_set[VAR_14].desc.s->socketdes;
        }
        else {
            if ((VAR_9->flags & VAR_5) &&
                VAR_9->p->query_set[VAR_14].desc.f == VAR_9->wakeup_pipe[0]) {
                FUNC_3(VAR_9);
                VAR_21 = VAR_1;
                continue;
            }
            else {

                return VAR_0;



            }
        }
        if (FUNC_0(VAR_22, &VAR_18) || FUNC_0(VAR_22, &VAR_19) ||
            FUNC_0(VAR_22, &VAR_20)) {
            VAR_9->p->result_set[VAR_15] = VAR_9->p->query_set[VAR_14];
            VAR_9->p->result_set[VAR_15].rtnevents = 0;
            if (FUNC_0(VAR_22, &VAR_18)) {
                VAR_9->p->result_set[VAR_15].rtnevents |= VAR_3;
            }
            if (FUNC_0(VAR_22, &VAR_19)) {
                VAR_9->p->result_set[VAR_15].rtnevents |= VAR_4;
            }
            if (FUNC_0(VAR_22, &VAR_20)) {
                VAR_9->p->result_set[VAR_15].rtnevents |= VAR_2;
            }
            VAR_15++;
        }
    }
    if (((*VAR_11) = VAR_15) != 0)
        VAR_21 = VAR_7;

    if (VAR_12)
        *VAR_12 = VAR_9->p->result_set;
    return VAR_21;
}
