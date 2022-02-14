
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int dequeue_no_requests; } ;
struct vtscsi_softc {TYPE_1__ vtscsi_stats; int vtscsi_req_free; } ;
struct vtscsi_request {int vsr_state; } ;


 struct vtscsi_request* FUNC_0 (int *) ;
 int FUNC_1 (int *,struct vtscsi_request*,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_2 (struct vtscsi_softc*,int ,char*,struct vtscsi_request*) ;

__attribute__((used)) static struct vtscsi_request *
FUNC_3(struct vtscsi_softc *VAR_3)
{
 struct vtscsi_request *VAR_4;

 VAR_4 = FUNC_0(&VAR_3->vtscsi_req_free);
 if (VAR_4 != ((void*)0)) {
  VAR_4->vsr_state = VAR_0;
  FUNC_1(&VAR_3->vtscsi_req_free, VAR_4, VAR_2);
 } else
  VAR_3->vtscsi_stats.dequeue_no_requests++;

 FUNC_2(VAR_3, VAR_1, "req=%p\n", VAR_4);

 return (VAR_4);
}
