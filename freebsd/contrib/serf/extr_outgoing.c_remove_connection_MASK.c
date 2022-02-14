
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_9__ {int pollset_baton; int (* pollset_rm ) (int ,TYPE_4__*,int *) ;} ;
typedef TYPE_2__ serf_context_t ;
struct TYPE_10__ {int baton; int reqevents; int skt; } ;
typedef TYPE_3__ serf_connection_t ;
typedef int apr_status_t ;
struct TYPE_8__ {int s; } ;
struct TYPE_11__ {int reqevents; TYPE_1__ desc; int desc_type; int member_0; } ;
typedef TYPE_4__ apr_pollfd_t ;


 int VAR_0 ;
 int FUNC_0 (int ,TYPE_4__*,int *) ;

__attribute__((used)) static apr_status_t FUNC_1(serf_context_t *VAR_1,
                                      serf_connection_t *VAR_2)
{
    apr_pollfd_t VAR_3 = { 0 };

    VAR_3.desc_type = VAR_0;
    VAR_3.desc.s = VAR_2->skt;
    VAR_3.reqevents = VAR_2->reqevents;

    return VAR_1->pollset_rm(VAR_1->pollset_baton,
                           &VAR_3, &VAR_2->baton);
}
