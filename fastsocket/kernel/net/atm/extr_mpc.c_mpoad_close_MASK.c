
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_5__ ;
typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct sk_buff {int truesize; } ;
struct mpoa_client {TYPE_5__* dev; TYPE_3__* eg_ops; TYPE_2__* in_ops; int * mpoad_vcc; } ;
struct lec_priv {TYPE_1__* lane2_ops; } ;
struct atm_vcc {int dummy; } ;
struct TYPE_11__ {char* name; } ;
struct TYPE_10__ {int sk_receive_queue; } ;
struct TYPE_9__ {int (* destroy_cache ) (struct mpoa_client*) ;} ;
struct TYPE_8__ {int (* destroy_cache ) (struct mpoa_client*) ;} ;
struct TYPE_7__ {int * associate_indicator; } ;


 int VAR_0 ;
 int FUNC_0 (struct atm_vcc*,int ) ;
 int FUNC_1 (TYPE_5__*) ;
 struct mpoa_client* FUNC_2 (struct atm_vcc*) ;
 int FUNC_3 (struct sk_buff*) ;
 int FUNC_4 (int ) ;
 struct lec_priv* FUNC_5 (TYPE_5__*) ;
 int FUNC_6 (char*,...) ;
 TYPE_4__* FUNC_7 (struct atm_vcc*) ;
 struct sk_buff* FUNC_8 (int *) ;
 int FUNC_9 (struct mpoa_client*) ;
 int FUNC_10 (struct mpoa_client*) ;
 int FUNC_11 (struct mpoa_client*) ;

__attribute__((used)) static void FUNC_12(struct atm_vcc *VAR_1)
{
 struct mpoa_client *VAR_2;
 struct sk_buff *VAR_3;

 VAR_2 = FUNC_2(VAR_1);
 if (VAR_2 == ((void*)0)) {
  FUNC_6("mpoa: mpoad_close: did not find MPC\n");
  return;
 }
 if (!VAR_2->mpoad_vcc) {
  FUNC_6("mpoa: mpoad_close: close for non-present mpoad\n");
  return;
 }

 VAR_2->mpoad_vcc = ((void*)0);
 if (VAR_2->dev) {
  struct lec_priv *VAR_4 = FUNC_5(VAR_2->dev);
  VAR_4->lane2_ops->associate_indicator = ((void*)0);
  FUNC_9(VAR_2);
  FUNC_1(VAR_2->dev);
 }

 VAR_2->in_ops->destroy_cache(VAR_2);
 VAR_2->eg_ops->destroy_cache(VAR_2);

 while ((VAR_3 = FUNC_8(&FUNC_7(VAR_1)->sk_receive_queue))) {
  FUNC_0(VAR_1, VAR_3->truesize);
  FUNC_3(VAR_3);
 }

 FUNC_6("mpoa: (%s) going down\n",
  (VAR_2->dev) ? VAR_2->dev->name : "<unknown>");
 FUNC_4(VAR_0);

 return;
}
