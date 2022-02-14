
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_6__ {void* cid_index; } ;
struct TYPE_5__ {TYPE_3__ cfc_del; TYPE_3__ terminate; } ;
struct ecore_queue_state_params {TYPE_2__ params; int cmd; int ramrod_flags; int * q_obj; int * member_0; } ;
struct bxe_softc {TYPE_1__* sp_objs; struct bxe_fastpath* fp; } ;
struct bxe_fastpath {size_t index; } ;
struct TYPE_4__ {int q_obj; } ;


 int FUNC_0 (struct bxe_softc*,int ,char*,int,size_t) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 void* VAR_4 ;
 int VAR_5 ;
 int FUNC_1 (int ,int *) ;
 int FUNC_2 (struct bxe_softc*,struct ecore_queue_state_params*) ;
 int FUNC_3 (TYPE_3__*,int ,int) ;

__attribute__((used)) static int
FUNC_4(struct bxe_softc *VAR_6,
               int VAR_7)
{
    struct bxe_fastpath *VAR_8 = &VAR_6->fp[VAR_7];
    struct ecore_queue_state_params VAR_9 = { ((void*)0) };
    int VAR_10;

    FUNC_0(VAR_6, VAR_0, "stopping queue %d cid %d\n", VAR_7, VAR_8->index);

    VAR_9.q_obj = &VAR_6->sp_objs[VAR_8->index].q_obj;

    FUNC_1(VAR_5, &VAR_9.ramrod_flags);




    VAR_9.cmd = VAR_2;
    VAR_10 = FUNC_2(VAR_6, &VAR_9);
    if (VAR_10) {
        return (VAR_10);
    }


    VAR_9.cmd = VAR_3;
    FUNC_3(&VAR_9.params.terminate, 0, sizeof(VAR_9.params.terminate));
    VAR_9.params.terminate.cid_index = VAR_4;
    VAR_10 = FUNC_2(VAR_6, &VAR_9);
    if (VAR_10) {
        return (VAR_10);
    }


    VAR_9.cmd = VAR_1;
    FUNC_3(&VAR_9.params.cfc_del, 0, sizeof(VAR_9.params.cfc_del));
    VAR_9.params.cfc_del.cid_index = VAR_4;
    return (FUNC_2(VAR_6, &VAR_9));
}
