
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int uint32_t ;
struct tx_cl_rl_params {int flags; scalar_t__ refcount; } ;
struct TYPE_7__ {int flags; size_t tx_chan; int cntxt_id; } ;
struct sge_txq {int tc_idx; TYPE_3__ eq; } ;
struct adapter {int tc_lock; TYPE_4__* chip_params; int pf; int mbox; TYPE_2__** port; } ;
struct TYPE_8__ {int nsched_cls; } ;
struct TYPE_6__ {TYPE_1__* sched_params; } ;
struct TYPE_5__ {struct tx_cl_rl_params* cl_rl; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_0 (int) ;
 int VAR_8 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (struct adapter*,int *,int,char*) ;
 int FUNC_5 (struct adapter*,int ) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (struct adapter*,int ,int ,int ,int,int*,int*) ;

__attribute__((used)) static int
FUNC_9(struct adapter *VAR_9, struct sge_txq *VAR_10, int VAR_11)
{
 struct tx_cl_rl_params *VAR_12, *VAR_13;
 int VAR_14, VAR_15;
 uint32_t VAR_16, VAR_17;

 if (!(VAR_10->eq.flags & VAR_4))
  return (VAR_1);

 FUNC_6(&VAR_9->tc_lock);
 if (VAR_10->tc_idx == -2) {
  VAR_14 = VAR_2;
  goto done;
 }
 if (VAR_11 == VAR_10->tc_idx) {
  VAR_14 = 0;
  goto done;
 }

 VAR_12 = &VAR_9->port[VAR_10->eq.tx_chan]->sched_params->cl_rl[0];
 if (VAR_11 != -1) {



  VAR_13 = &VAR_12[VAR_11];
  if (VAR_13->flags & VAR_0) {
   VAR_14 = VAR_3;
   goto done;
  } else {





   VAR_13->refcount++;
  }
 }

 VAR_15 = VAR_10->tc_idx;
 VAR_10->tc_idx = -2;
 FUNC_7(&VAR_9->tc_lock);

 VAR_14 = FUNC_4(VAR_9, ((void*)0), VAR_8 | VAR_7, "t4btxq");
 if (VAR_14 != 0)
  return (VAR_14);
 VAR_16 = (FUNC_1(VAR_5) |
     FUNC_2(VAR_6) |
     FUNC_3(VAR_10->eq.cntxt_id));
 VAR_17 = VAR_11 < 0 ? 0xffffffff : VAR_11;
 VAR_14 = -FUNC_8(VAR_9, VAR_9->mbox, VAR_9->pf, 0, 1, &VAR_16, &VAR_17);
 FUNC_5(VAR_9, 0);

 FUNC_6(&VAR_9->tc_lock);
 FUNC_0(VAR_10->tc_idx == -2);
 if (VAR_14 == 0) {




  if (VAR_15 != -1) {
   VAR_13 = &VAR_12[VAR_15];
   FUNC_0(VAR_13->refcount > 0);
   VAR_13->refcount--;
  }
  VAR_10->tc_idx = VAR_11;
 } else {




  if (VAR_11 != -1) {
   VAR_13 = &VAR_12[VAR_11];
   FUNC_0(VAR_13->refcount > 0);
   VAR_13->refcount--;
  }
  VAR_10->tc_idx = VAR_15;
 }
done:
 FUNC_0(VAR_10->tc_idx >= -1 && VAR_10->tc_idx < VAR_9->chip_params->nsched_cls);
 FUNC_7(&VAR_9->tc_lock);
 return (VAR_14);
}
