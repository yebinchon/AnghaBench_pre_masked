
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct tx_cl_rl_params {scalar_t__ refcount; int flags; int ratemode; int rateunit; int mode; size_t maxrate; size_t pktsize; } ;
struct t4_sched_class_params {scalar_t__ level; scalar_t__ mode; size_t channel; size_t minrate; size_t maxrate; scalar_t__ rateunit; scalar_t__ ratemode; size_t weight; size_t cl; size_t pktsize; } ;
struct port_info {size_t tx_chan; TYPE_4__* sched_params; TYPE_3__* vi; } ;
struct adapter {size_t* chan_map; int tc_lock; TYPE_1__* chip_params; struct port_info** port; } ;
struct TYPE_8__ {struct tx_cl_rl_params* cl_rl; } ;
struct TYPE_7__ {TYPE_2__* ifp; } ;
struct TYPE_6__ {int if_mtu; } ;
struct TYPE_5__ {int nchan; int nsched_cls; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;
 int VAR_20 ;
 int FUNC_0 (int) ;
 scalar_t__ VAR_21 ;
 scalar_t__ VAR_22 ;
 scalar_t__ VAR_23 ;
 scalar_t__ VAR_24 ;
 scalar_t__ VAR_25 ;
 scalar_t__ VAR_26 ;
 scalar_t__ VAR_27 ;
 scalar_t__ VAR_28 ;
 scalar_t__ VAR_29 ;
 int VAR_30 ;
 int FUNC_1 (struct adapter*,int *,int,char*) ;
 int FUNC_2 (struct adapter*,int ) ;
 int FUNC_3 (size_t,int,int) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (struct port_info*) ;
 int FUNC_7 (struct adapter*,int ,int,int,int,int,size_t,size_t,size_t,size_t,size_t,size_t,int ,int) ;

__attribute__((used)) static int
FUNC_8(struct adapter *VAR_31, struct t4_sched_class_params *VAR_32,
    int VAR_33)
{
 int VAR_34, VAR_35, VAR_36, VAR_37, VAR_38, VAR_39;
 struct port_info *VAR_40;
 struct tx_cl_rl_params *VAR_41, VAR_42;
 bool VAR_43 = 0;

 if (VAR_32->level == VAR_22)
  VAR_36 = VAR_9;
 else if (VAR_32->level == VAR_23)
  VAR_36 = VAR_10;
 else if (VAR_32->level == VAR_21)
  VAR_36 = VAR_8;
 else
  return (VAR_5);

 if (VAR_32->level == VAR_22) {
  if (VAR_32->mode == VAR_24)
   VAR_37 = VAR_11;
  else if (VAR_32->mode == VAR_25) {
   VAR_43 = 1;
   VAR_37 = VAR_12;
  } else
   return (VAR_5);
 } else
  VAR_37 = 0;


 if (VAR_32->channel < 0)
  return (VAR_5);
 if (!FUNC_3(VAR_32->channel, 0, VAR_31->chip_params->nchan - 1))
  return (VAR_7);

 VAR_40 = VAR_31->port[VAR_31->chan_map[VAR_32->channel]];
 if (VAR_40 == ((void*)0))
  return (VAR_6);
 FUNC_0(VAR_40->tx_chan == VAR_32->channel);
 VAR_35 = FUNC_6(VAR_40) * 1000000;

 if (VAR_32->level == VAR_22 ||
     VAR_32->level == VAR_21) {




  if (VAR_32->minrate < 0)
   VAR_32->minrate = 0;
  if (VAR_32->maxrate < 0)
   return (VAR_5);

  if (VAR_32->rateunit == VAR_28) {
   VAR_38 = VAR_15;

   if (VAR_32->ratemode == VAR_27) {
    VAR_39 = VAR_14;

    if (!FUNC_3(VAR_32->minrate, 0, 100) ||
        !FUNC_3(VAR_32->maxrate, 0, 100)) {
     return (VAR_7);
    }
   } else if (VAR_32->ratemode == VAR_26) {
    VAR_39 = VAR_13;

    if (!FUNC_3(VAR_32->minrate, 0, VAR_35) ||
        !FUNC_3(VAR_32->maxrate, 0, VAR_35)) {
     return (VAR_7);
    }
   } else
    return (VAR_5);
  } else if (VAR_32->rateunit == VAR_29) {

   VAR_43 = 1;
   VAR_38 = VAR_16;
  } else
   return (VAR_5);
 } else {
  FUNC_0(VAR_32->level == VAR_23);




  if (VAR_32->weight < 0)
         return (VAR_5);
  if (!FUNC_3(VAR_32->weight, 1, 99))
   return (VAR_7);

  VAR_38 = 0;
  VAR_39 = 0;
 }

 if (VAR_32->level == VAR_22 ||
     VAR_32->level == VAR_23) {



  if (VAR_32->cl < 0)
   return (VAR_5);
  if (!FUNC_3(VAR_32->cl, 0, VAR_31->chip_params->nsched_cls - 1))
   return (VAR_7);
 }

 if (VAR_43) {
  if (VAR_32->pktsize < 0)
   return (VAR_5);
  if (!FUNC_3(VAR_32->pktsize, 64, VAR_40->vi[0].ifp->if_mtu))
   return (VAR_7);
 }

 if (VAR_32->level == VAR_22) {
  VAR_41 = &VAR_40->sched_params->cl_rl[VAR_32->cl];
  FUNC_4(&VAR_31->tc_lock);
  if (VAR_41->refcount > 0 || VAR_41->flags & (VAR_2 | VAR_0))
   VAR_34 = VAR_4;
  else {
   VAR_41->flags |= VAR_2 | VAR_3;
   VAR_41->ratemode = VAR_39;
   VAR_41->rateunit = VAR_38;
   VAR_41->mode = VAR_37;
   VAR_41->maxrate = VAR_32->maxrate;
   VAR_41->pktsize = VAR_32->pktsize;
   VAR_34 = 0;
   VAR_42= *VAR_41;
  }
  FUNC_5(&VAR_31->tc_lock);
  if (VAR_34 != 0)
   return (VAR_34);
 }

 VAR_34 = FUNC_1(VAR_31, ((void*)0),
     VAR_33 ? (VAR_30 | VAR_19) : VAR_18, "t4sscp");
 if (VAR_34 != 0) {
  if (VAR_32->level == VAR_22) {
   FUNC_4(&VAR_31->tc_lock);
   *VAR_41 = VAR_42;
   FUNC_5(&VAR_31->tc_lock);
  }
  return (VAR_34);
 }
 VAR_34 = -FUNC_7(VAR_31, VAR_17, VAR_36, VAR_37,
     VAR_38, VAR_39, VAR_32->channel, VAR_32->cl, VAR_32->minrate, VAR_32->maxrate,
     VAR_32->weight, VAR_32->pktsize, 0, VAR_33);
 FUNC_2(VAR_31, VAR_33 ? 0 : VAR_20);

 if (VAR_32->level == VAR_22) {
  FUNC_4(&VAR_31->tc_lock);
  FUNC_0(VAR_41->flags & VAR_2);
  FUNC_0(VAR_41->flags & VAR_3);
  FUNC_0(VAR_41->refcount == 0);

  VAR_41->flags &= ~VAR_2;
  if (VAR_34 == 0)
   VAR_41->flags &= ~VAR_1;
  else
   VAR_41->flags |= VAR_1;
  FUNC_5(&VAR_31->tc_lock);
 }

 return (VAR_34);
}
