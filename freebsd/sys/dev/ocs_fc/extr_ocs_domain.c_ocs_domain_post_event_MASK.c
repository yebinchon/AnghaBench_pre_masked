
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


typedef int ocs_sm_event_t ;
struct TYPE_5__ {int req_domain_free; int req_accept_frames; int drvsm; } ;
typedef TYPE_1__ ocs_domain_t ;


 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (TYPE_1__*) ;
 int FUNC_2 (int *,int ,void*) ;

int
FUNC_3(ocs_domain_t *VAR_0, ocs_sm_event_t VAR_1, void *VAR_2)
{
 int VAR_3;
 int VAR_4;
 int VAR_5;

 VAR_3 = FUNC_2(&VAR_0->drvsm, VAR_1, VAR_2);

 VAR_5 = VAR_0->req_domain_free;
 VAR_0->req_domain_free = 0;

 VAR_4 = VAR_0->req_accept_frames;
 VAR_0->req_accept_frames = 0;

 if (VAR_4) {
  FUNC_0(VAR_0);
 }

 if (VAR_5) {
  FUNC_1(VAR_0);
 }

 return VAR_3;
}
