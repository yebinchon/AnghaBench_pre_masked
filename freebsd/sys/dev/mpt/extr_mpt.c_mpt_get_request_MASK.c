
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct mpt_softc {int getreqwaiter; int request_free_list; TYPE_1__* request_pool; } ;
struct TYPE_7__ {size_t index; scalar_t__ state; int * chain; scalar_t__ req_vbuf; int serno; } ;
typedef TYPE_1__ request_t ;
struct TYPE_8__ {int Function; } ;
typedef TYPE_2__ MSG_REQUEST_HEADER ;


 int FUNC_0 (int,char*) ;
 int FUNC_1 (struct mpt_softc*) ;
 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 TYPE_1__* FUNC_2 (int *) ;
 int FUNC_3 (int *,TYPE_1__*,int ) ;
 int VAR_3 ;
 int FUNC_4 (struct mpt_softc*,TYPE_1__*) ;
 int FUNC_5 (struct mpt_softc*,int *,int ,char*,int ) ;

request_t *
FUNC_6(struct mpt_softc *VAR_4, int VAR_5)
{
 request_t *VAR_6;

retry:
 FUNC_1(VAR_4);
 VAR_6 = FUNC_2(&VAR_4->request_free_list);
 if (VAR_6 != ((void*)0)) {
  FUNC_0(VAR_6 == &VAR_4->request_pool[VAR_6->index],
      ("mpt_get_request: corrupted request free list"));
  FUNC_0(VAR_6->state == VAR_2,
      ("req %p:%u not free on free list %x index %d function %x",
      VAR_6, VAR_6->serno, VAR_6->state, VAR_6->index,
      ((MSG_REQUEST_HEADER *)VAR_6->req_vbuf)->Function));
  FUNC_3(&VAR_4->request_free_list, VAR_6, VAR_3);
  VAR_6->state = VAR_1;
  VAR_6->chain = ((void*)0);
  FUNC_4(VAR_4, VAR_6);
 } else if (VAR_5 != 0) {
  VAR_4->getreqwaiter = 1;
  FUNC_5(VAR_4, &VAR_4->request_free_list, VAR_0, "mptgreq", 0);
  goto retry;
 }
 return (VAR_6);
}
