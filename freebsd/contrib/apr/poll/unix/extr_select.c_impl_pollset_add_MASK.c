
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_6__ ;
typedef struct TYPE_13__ TYPE_5__ ;
typedef struct TYPE_12__ TYPE_4__ ;
typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


typedef int apr_status_t ;
struct TYPE_13__ {size_t nelts; size_t nalloc; int flags; TYPE_4__* p; TYPE_2__** wakeup_pipe; } ;
typedef TYPE_5__ apr_pollset_t ;
struct TYPE_11__ {TYPE_2__* f; TYPE_1__* s; } ;
struct TYPE_14__ {scalar_t__ desc_type; int reqevents; TYPE_3__ desc; } ;
typedef TYPE_6__ apr_pollfd_t ;
typedef scalar_t__ apr_os_sock_t ;
struct TYPE_12__ {int maxfd; int exceptset; int writeset; int readset; scalar_t__ set_type; TYPE_6__* query_set; } ;
struct TYPE_10__ {scalar_t__ filedes; scalar_t__ is_pipe; } ;
struct TYPE_9__ {scalar_t__ socketdes; } ;


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
 scalar_t__ VAR_10 ;
 int VAR_11 ;
 int FUNC_0 (scalar_t__,int *) ;
 scalar_t__ VAR_12 ;
 scalar_t__ FUNC_1 (scalar_t__) ;
 int FUNC_2 (scalar_t__) ;

__attribute__((used)) static apr_status_t FUNC_3(apr_pollset_t *VAR_13,
                                     const apr_pollfd_t *VAR_14)
{
    apr_os_sock_t VAR_15;

    if (VAR_13->nelts == VAR_13->nalloc) {
        return VAR_1;
    }

    VAR_13->p->query_set[VAR_13->nelts] = *VAR_14;

    if (VAR_14->desc_type == VAR_10) {
        VAR_15 = VAR_14->desc.s->socketdes;
    }
    else {

        if ((VAR_13->flags & VAR_8) &&
            VAR_14->desc.f == VAR_13->wakeup_pipe[0])
            VAR_15 = (apr_os_sock_t)VAR_14->desc.f->filedes;
        else
            return VAR_0;
    }

    if (VAR_15 >= VAR_12) {

        return VAR_0;
    }

    if (VAR_14->reqevents & VAR_4) {
        FUNC_0(VAR_15, &(VAR_13->p->readset));
    }
    if (VAR_14->reqevents & VAR_6) {
        FUNC_0(VAR_15, &(VAR_13->p->writeset));
    }
    if (VAR_14->reqevents &
        (VAR_7 | VAR_2 | VAR_3 | VAR_5)) {
        FUNC_0(VAR_15, &(VAR_13->p->exceptset));
    }
    if ((int) VAR_15 > VAR_13->p->maxfd) {
        VAR_13->p->maxfd = (int) VAR_15;
    }
    VAR_13->nelts++;
    return VAR_11;
}
