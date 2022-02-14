
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef scalar_t__ u_int ;
struct tx_cl_rl_params {int refcount; int flags; scalar_t__ ratemode; scalar_t__ rateunit; scalar_t__ mode; scalar_t__ maxrate; int pktsize; int burstsize; } ;
struct port_info {TYPE_5__* sched_params; TYPE_3__* vi; } ;
struct TYPE_6__ {int nports; } ;
struct adapter {int tc_lock; TYPE_4__* chip_params; struct port_info** port; TYPE_1__ params; } ;
struct TYPE_10__ {int pktsize; int burstsize; struct tx_cl_rl_params* cl_rl; } ;
struct TYPE_9__ {int nsched_cls; } ;
struct TYPE_8__ {TYPE_2__* ifp; } ;
struct TYPE_7__ {int if_mtu; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (struct adapter*) ;

int
FUNC_4(struct adapter *VAR_8, int VAR_9, u_int VAR_10,
    int *VAR_11)
{
 int VAR_12 = 0, VAR_13 = -1, VAR_14, VAR_15, VAR_16;
 bool VAR_17;
 struct tx_cl_rl_params *VAR_18;
 struct port_info *VAR_19;

 FUNC_0(VAR_9 >= 0 && VAR_9 < VAR_8->params.nports);

 VAR_19 = VAR_8->port[VAR_9];
 if (VAR_19->sched_params->pktsize > 0)
  VAR_15 = VAR_19->sched_params->pktsize;
 else
  VAR_15 = VAR_19->vi[0].ifp->if_mtu;
 if (VAR_19->sched_params->burstsize > 0)
  VAR_16 = VAR_19->sched_params->burstsize;
 else
  VAR_16 = VAR_15 * 4;
 VAR_18 = &VAR_19->sched_params->cl_rl[0];

 VAR_17 = 0;
 FUNC_1(&VAR_8->tc_lock);
 for (VAR_14 = 0; VAR_14 < VAR_8->chip_params->nsched_cls; VAR_14++, VAR_18++) {
  if (VAR_13 < 0 && VAR_18->refcount == 0 && !(VAR_18->flags & VAR_3))
   VAR_13 = VAR_14;

  if (VAR_18->ratemode == VAR_6 &&
      VAR_18->rateunit == VAR_7 &&
      VAR_18->mode == VAR_5 &&
      VAR_18->maxrate == VAR_10 && VAR_18->pktsize == VAR_15 &&
      VAR_18->burstsize == VAR_16) {
   VAR_18->refcount++;
   *VAR_11 = VAR_14;
   if ((VAR_18->flags & (VAR_1 | VAR_0 | VAR_2)) ==
       VAR_1) {
    VAR_17 = 1;
   }
   goto done;
  }
 }

 FUNC_0(VAR_14 == VAR_8->chip_params->nsched_cls);
 if (VAR_13 != -1) {
  VAR_18 = &VAR_19->sched_params->cl_rl[VAR_13];
  VAR_18->refcount = 1;
  VAR_18->ratemode = VAR_6;
  VAR_18->rateunit = VAR_7;
  VAR_18->mode = VAR_5;
  VAR_18->maxrate = VAR_10;
  VAR_18->pktsize = VAR_15;
  VAR_18->burstsize = VAR_16;
  *VAR_11 = VAR_13;
  VAR_17 = 1;
 } else {
  *VAR_11 = -1;
  VAR_12 = VAR_4;
 }
done:
 FUNC_2(&VAR_8->tc_lock);
 if (VAR_17) {
  VAR_18->flags |= VAR_0;
  FUNC_3(VAR_8);
 }
 return (VAR_12);
}
