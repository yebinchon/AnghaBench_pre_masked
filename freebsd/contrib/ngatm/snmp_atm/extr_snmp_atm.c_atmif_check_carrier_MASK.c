
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct ifmediareq {int ifm_status; int ifm_name; } ;
struct TYPE_4__ {int carrier; TYPE_1__* ifp; } ;
struct atmif_priv {TYPE_2__ pub; } ;
typedef int ifmr ;
typedef enum atmif_carrier_state { ____Placeholder_atmif_carrier_state } atmif_carrier_state ;
struct TYPE_3__ {int name; } ;


 int VAR_0 ;
 int VAR_1 ;
 void* VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (struct atmif_priv*,int ,uintptr_t) ;
 int FUNC_1 (int ,int ,struct ifmediareq*) ;
 int FUNC_2 (struct ifmediareq*,int ,int) ;
 int VAR_7 ;
 int FUNC_3 (int ,int ) ;

void
FUNC_4(struct atmif_priv *VAR_8)
{
 struct ifmediareq VAR_9;
 enum atmif_carrier_state VAR_10 = VAR_8->pub.carrier;

 FUNC_2(&VAR_9, 0, sizeof(VAR_9));
 FUNC_3(VAR_9.ifm_name, VAR_8->pub.ifp->name);

 if (FUNC_1(VAR_7, VAR_6, &VAR_9) == -1) {
  VAR_8->pub.carrier = VAR_2;
  return;
 }
 if (!(VAR_9.ifm_status & VAR_5)) {
  VAR_8->pub.carrier = VAR_2;
  return;
 }
 if (VAR_9.ifm_status & VAR_4)
  VAR_8->pub.carrier = VAR_1;
 else
  VAR_8->pub.carrier = VAR_0;

 if (VAR_10 != VAR_8->pub.carrier)
  FUNC_0(VAR_8, VAR_3,
      (uintptr_t)VAR_10);
}
