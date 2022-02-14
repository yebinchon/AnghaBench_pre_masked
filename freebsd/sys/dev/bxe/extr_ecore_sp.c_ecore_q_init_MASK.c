
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef size_t uint8_t ;
typedef int uint16_t ;
struct TYPE_6__ {int hc_rate; int flags; int sb_cq_index; int fw_sb_id; } ;
struct TYPE_5__ {int hc_rate; int flags; int sb_cq_index; int fw_sb_id; } ;
struct ecore_queue_init_params {int * cxts; TYPE_3__ rx; TYPE_2__ tx; } ;
struct TYPE_4__ {struct ecore_queue_init_params init; } ;
struct ecore_queue_state_params {TYPE_1__ params; struct ecore_queue_sp_obj* q_obj; } ;
struct ecore_queue_sp_obj {size_t max_cos; int (* complete_cmd ) (struct bxe_softc*,struct ecore_queue_sp_obj*,int ) ;int * cids; int type; } ;
struct bxe_softc {int dummy; } ;


 int FUNC_0 () ;
 int FUNC_1 (struct bxe_softc*,char*,int ,...) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_2 (struct bxe_softc*,int ,int ) ;
 int FUNC_3 () ;
 int VAR_5 ;
 scalar_t__ FUNC_4 (int ,int *) ;
 int FUNC_5 (struct bxe_softc*,int ,int ,int,int) ;
 int FUNC_6 (struct bxe_softc*,struct ecore_queue_sp_obj*,int ) ;

__attribute__((used)) static inline int FUNC_7(struct bxe_softc *VAR_6,
          struct ecore_queue_state_params *VAR_7)
{
 struct ecore_queue_sp_obj *VAR_8 = VAR_7->q_obj;
 struct ecore_queue_init_params *VAR_9 = &VAR_7->params.init;
 uint16_t VAR_10;
 uint8_t VAR_11;


 if (FUNC_4(VAR_4, &VAR_8->type) &&
     FUNC_4(VAR_1, &VAR_9->tx.flags)) {
  VAR_10 = VAR_9->tx.hc_rate ? 1000000 / VAR_9->tx.hc_rate : 0;

  FUNC_5(VAR_6, VAR_9->tx.fw_sb_id,
   VAR_9->tx.sb_cq_index,
   !FUNC_4(VAR_2, &VAR_9->tx.flags),
   VAR_10);
 }


 if (FUNC_4(VAR_3, &VAR_8->type) &&
     FUNC_4(VAR_1, &VAR_9->rx.flags)) {
  VAR_10 = VAR_9->rx.hc_rate ? 1000000 / VAR_9->rx.hc_rate : 0;

  FUNC_5(VAR_6, VAR_9->rx.fw_sb_id,
   VAR_9->rx.sb_cq_index,
   !FUNC_4(VAR_2, &VAR_9->rx.flags),
   VAR_10);
 }


 for (VAR_11 = 0; VAR_11 < VAR_8->max_cos; VAR_11++) {
  FUNC_1(VAR_6, "setting context validation. cid %d, cos %d\n",
     VAR_8->cids[VAR_11], VAR_11);
  FUNC_1(VAR_6, "context pointer %p\n", VAR_9->cxts[VAR_11]);
  FUNC_2(VAR_6, VAR_9->cxts[VAR_11], VAR_8->cids[VAR_11]);
 }


 VAR_8->complete_cmd(VAR_6, VAR_8, VAR_0);

 FUNC_0();
 FUNC_3();

 return VAR_5;
}
