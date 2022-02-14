
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_1__ ;


struct lec_priv {int is_trdev; int itfnum; int maximum_unknown_frame_count; int max_unknown_frame_time; int vcc_timeout_period; int max_retry_count; int aging_time; int forward_delay_time; int arp_response_time; int flush_timeout; int path_switching_delay; scalar_t__ topology_change; struct atm_vcc* lecd; } ;
struct atm_vcc {int flags; TYPE_1__* proto_data; int * dev; } ;
struct TYPE_9__ {int flags; int name; } ;


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
 int FUNC_0 (int ) ;
 TYPE_1__* FUNC_1 (int) ;
 TYPE_1__* FUNC_2 (int) ;
 TYPE_1__** VAR_11 ;
 int FUNC_3 (TYPE_1__*) ;
 int FUNC_4 (struct lec_priv*) ;
 int FUNC_5 (TYPE_1__*) ;
 int VAR_12 ;
 struct lec_priv* FUNC_6 (TYPE_1__*) ;
 int FUNC_7 (TYPE_1__*) ;
 scalar_t__ FUNC_8 (TYPE_1__*) ;
 int FUNC_9 (int ,int *) ;
 int FUNC_10 (struct atm_vcc*) ;
 int FUNC_11 (int ,int ,char*,int) ;
 int FUNC_12 (int ) ;

__attribute__((used)) static int FUNC_13(struct atm_vcc *VAR_13, int VAR_14)
{
 int VAR_15;
 struct lec_priv *VAR_16;

 if (VAR_14 < 0)
  VAR_15 = 0;
 else
  VAR_15 = VAR_14;




 if (VAR_14 >= (VAR_8 - VAR_9))
  return -VAR_3;

 if (!VAR_11[VAR_15]) {
  int VAR_17, VAR_18;

  VAR_17 = 0;
  if (VAR_15 >= (VAR_8 - VAR_9))
   VAR_17 = 1;

  VAR_18 = sizeof(struct lec_priv);





   VAR_11[VAR_15] = FUNC_1(VAR_18);
  if (!VAR_11[VAR_15])
   return -VAR_4;
  FUNC_11(VAR_11[VAR_15]->name, VAR_7, "lec%d", VAR_15);
  if (FUNC_8(VAR_11[VAR_15])) {
   FUNC_3(VAR_11[VAR_15]);
   return -VAR_3;
  }

  VAR_16 = FUNC_6(VAR_11[VAR_15]);
  VAR_16->is_trdev = VAR_17;
  FUNC_5(VAR_11[VAR_15]);
 } else {
  VAR_16 = FUNC_6(VAR_11[VAR_15]);
  if (VAR_16->lecd)
   return -VAR_2;
 }
 FUNC_4(VAR_16);
 VAR_16->itfnum = VAR_15;
 VAR_16->lecd = VAR_13;
 VAR_13->dev = &VAR_12;
 FUNC_12(FUNC_10(VAR_13));

 VAR_13->proto_data = VAR_11[VAR_15];
 FUNC_9(VAR_0, &VAR_13->flags);
 FUNC_9(VAR_1, &VAR_13->flags);


 VAR_16->maximum_unknown_frame_count = 1;
 VAR_16->max_unknown_frame_time = (1 * VAR_5);
 VAR_16->vcc_timeout_period = (1200 * VAR_5);
 VAR_16->max_retry_count = 1;
 VAR_16->aging_time = (300 * VAR_5);
 VAR_16->forward_delay_time = (15 * VAR_5);
 VAR_16->topology_change = 0;
 VAR_16->arp_response_time = (1 * VAR_5);
 VAR_16->flush_timeout = (4 * VAR_5);
 VAR_16->path_switching_delay = (6 * VAR_5);

 if (VAR_11[VAR_15]->flags & VAR_6) {
  FUNC_7(VAR_11[VAR_15]);
 }
 FUNC_0(VAR_10);
 return VAR_15;
}
