
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef size_t uint8_t ;
struct TYPE_3__ {int rule_cnt; } ;
struct eth_filter_rules_ramrod_data {TYPE_1__ header; TYPE_2__* rules; } ;
struct ecore_rx_mode_ramrod_params {int rdata_mapping; int cid; int tx_accept_flags; int rx_accept_flags; int func_id; int ramrod_flags; int rx_mode_flags; void* cl_id; struct eth_filter_rules_ramrod_data* rdata; } ;
struct bxe_softc {int dummy; } ;
struct TYPE_4__ {void* cmd_general_data; int func_id; void* client_id; } ;


 void* FUNC_0 (struct bxe_softc*) ;
 int FUNC_1 (struct eth_filter_rules_ramrod_data*,int ,int) ;
 int FUNC_2 (struct bxe_softc*,char*,int ,int ,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_3 (int ,int *) ;
 int VAR_2 ;
 void* VAR_3 ;
 void* VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_4 (struct bxe_softc*,int *,TYPE_2__*,int ) ;
 int FUNC_5 (int ,TYPE_1__*,size_t) ;
 int FUNC_6 (struct bxe_softc*,int ,int ,int ,int ) ;

__attribute__((used)) static int FUNC_7(struct bxe_softc *VAR_10,
    struct ecore_rx_mode_ramrod_params *VAR_11)
{
 struct eth_filter_rules_ramrod_data *VAR_12 = VAR_11->rdata;
 int VAR_13;
 uint8_t VAR_14 = 0;


 FUNC_1(VAR_12, 0, sizeof(*VAR_12));




 if (FUNC_3(VAR_8, &VAR_11->ramrod_flags)) {
  VAR_12->rules[VAR_14].client_id = VAR_11->cl_id;
  VAR_12->rules[VAR_14].func_id = VAR_11->func_id;

  VAR_12->rules[VAR_14].cmd_general_data =
   VAR_4;

  FUNC_4(VAR_10, &VAR_11->tx_accept_flags,
            &(VAR_12->rules[VAR_14++]),
            VAR_5);
 }


 if (FUNC_3(VAR_7, &VAR_11->ramrod_flags)) {
  VAR_12->rules[VAR_14].client_id = VAR_11->cl_id;
  VAR_12->rules[VAR_14].func_id = VAR_11->func_id;

  VAR_12->rules[VAR_14].cmd_general_data =
   VAR_3;

  FUNC_4(VAR_10, &VAR_11->rx_accept_flags,
            &(VAR_12->rules[VAR_14++]),
            VAR_5);
 }







 if (FUNC_3(VAR_1, &VAR_11->rx_mode_flags)) {

  if (FUNC_3(VAR_8, &VAR_11->ramrod_flags)) {
   VAR_12->rules[VAR_14].client_id = FUNC_0(VAR_10);
   VAR_12->rules[VAR_14].func_id = VAR_11->func_id;

   VAR_12->rules[VAR_14].cmd_general_data =
      VAR_4;

   FUNC_4(VAR_10, &VAR_11->tx_accept_flags,
             &(VAR_12->rules[VAR_14]),
             VAR_9);
   VAR_14++;
  }


  if (FUNC_3(VAR_7, &VAR_11->ramrod_flags)) {
   VAR_12->rules[VAR_14].client_id = FUNC_0(VAR_10);
   VAR_12->rules[VAR_14].func_id = VAR_11->func_id;

   VAR_12->rules[VAR_14].cmd_general_data =
      VAR_3;

   FUNC_4(VAR_10, &VAR_11->rx_accept_flags,
             &(VAR_12->rules[VAR_14]),
             VAR_9);
   VAR_14++;
  }
 }




 FUNC_5(VAR_11->cid, &VAR_12->header, VAR_14);

 FUNC_2(VAR_10, "About to configure %d rules, rx_accept_flags 0x%lx, tx_accept_flags 0x%lx\n",
    VAR_12->header.rule_cnt, VAR_11->rx_accept_flags,
    VAR_11->tx_accept_flags);
 VAR_13 = FUNC_6(VAR_10,
      VAR_6,
      VAR_11->cid,
      VAR_11->rdata_mapping,
      VAR_2);
 if (VAR_13)
  return VAR_13;


 return VAR_0;
}
