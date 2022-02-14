
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_15__ TYPE_3__ ;
typedef struct TYPE_14__ TYPE_2__ ;
typedef struct TYPE_13__ TYPE_1__ ;


typedef int u_int16_t ;
typedef TYPE_1__* ng_l2cap_p ;
typedef TYPE_2__* ng_l2cap_con_p ;
typedef TYPE_3__* ng_l2cap_chan_p ;
struct TYPE_15__ {scalar_t__ scid; scalar_t__ dcid; int idtype; int link_timo; int flush_timo; int oflow; void* omtu; int iflow; void* imtu; int state; TYPE_2__* con; int psm; } ;
struct TYPE_14__ {scalar_t__ linktype; } ;
struct TYPE_13__ {int chan_list; } ;


 int FUNC_0 (int *,TYPE_3__*,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 void* VAR_10 ;
 scalar_t__ VAR_11 ;
 scalar_t__ VAR_12 ;
 int FUNC_1 (int ,int *,int) ;
 int FUNC_2 (TYPE_3__*,int) ;
 int FUNC_3 (TYPE_3__*,int ) ;
 TYPE_3__* FUNC_4 (int,int ,int) ;
 int VAR_13 ;
 int FUNC_5 (TYPE_2__*) ;
 int FUNC_6 () ;
 scalar_t__ FUNC_7 (TYPE_1__*,int) ;

ng_l2cap_chan_p
FUNC_8(ng_l2cap_p VAR_14, ng_l2cap_con_p VAR_15, u_int16_t VAR_16, int VAR_17)
{
 ng_l2cap_chan_p VAR_18 = ((void*)0);

 VAR_18 = FUNC_4(sizeof(*VAR_18), VAR_0,
  VAR_1|VAR_2);
 if (VAR_18 == ((void*)0))
  return (((void*)0));
 if(VAR_17 == VAR_7){
  VAR_18->scid = VAR_18->dcid = VAR_4;
 }else if(VAR_17 == VAR_8){
  VAR_18->scid = VAR_18->dcid = VAR_12;
 }else{
  VAR_18->scid = FUNC_7(VAR_14,
         (VAR_15->linktype!= VAR_3));
 }

 VAR_18->idtype = VAR_17;
 if (VAR_18->scid != VAR_11) {

  VAR_18->psm = VAR_16;
  VAR_18->con = VAR_15;
  VAR_18->state = VAR_5;


  VAR_18->imtu = VAR_10;
  FUNC_1(FUNC_6(), &VAR_18->iflow, sizeof(VAR_18->iflow));

  VAR_18->omtu = VAR_10;
  FUNC_1(FUNC_6(), &VAR_18->oflow, sizeof(VAR_18->oflow));

  VAR_18->flush_timo = VAR_6;
  VAR_18->link_timo = VAR_9;

  FUNC_0(&VAR_14->chan_list, VAR_18, VAR_13);

  FUNC_5(VAR_15);
 } else {
  FUNC_2(VAR_18, sizeof(*VAR_18));
  FUNC_3(VAR_18, VAR_0);
  VAR_18 = ((void*)0);
 }

 return (VAR_18);
}
