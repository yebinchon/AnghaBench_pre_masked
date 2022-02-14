
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct link_config {int requested_fc; int requested_fec; unsigned int fec_hint; scalar_t__ requested_aneg; unsigned int supported; scalar_t__ requested_speed; } ;
struct TYPE_7__ {void* rcap; } ;
struct TYPE_6__ {void* rcap32; } ;
struct TYPE_8__ {TYPE_3__ l1cfg; TYPE_2__ l1cfg32; } ;
struct fw_port_cmd {TYPE_4__ u; void* action_to_len16; void* op_to_portid; } ;
struct TYPE_5__ {scalar_t__ port_caps32; } ;
struct adapter {size_t* chan_map; TYPE_1__ params; int * port; } ;
typedef int c ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (struct adapter*,char*,unsigned int,unsigned int) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 unsigned int FUNC_1 (struct fw_port_cmd) ;
 int VAR_5 ;
 int VAR_6 ;
 unsigned int VAR_7 ;
 unsigned int VAR_8 ;
 unsigned int VAR_9 ;
 unsigned int VAR_10 ;
 unsigned int VAR_11 ;
 unsigned int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 unsigned int VAR_15 ;
 unsigned int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;
 int VAR_20 ;
 unsigned int FUNC_2 (int ) ;
 unsigned int FUNC_3 (int ) ;
 unsigned int FUNC_4 (int ) ;
 unsigned int FUNC_5 (int ) ;
 unsigned int FUNC_6 (unsigned int) ;
 void* FUNC_7 (unsigned int) ;
 unsigned int FUNC_8 (unsigned int) ;
 unsigned int FUNC_9 (unsigned int) ;
 scalar_t__ FUNC_10 (int ) ;
 int FUNC_11 (struct fw_port_cmd*,int ,int) ;
 unsigned int FUNC_12 (scalar_t__) ;
 int FUNC_13 (struct adapter*,unsigned int,struct fw_port_cmd*,int,int *) ;

int FUNC_14(struct adapter *VAR_21, unsigned int VAR_22, unsigned int VAR_23,
    struct link_config *VAR_24)
{
 struct fw_port_cmd VAR_25;
 unsigned int VAR_26 = FUNC_3(VAR_13);
 unsigned int VAR_27, VAR_28, VAR_29, VAR_30, VAR_31;

 VAR_28 = 0;
 if (VAR_24->requested_fc & VAR_19)
  VAR_28 |= VAR_8;
 if (VAR_24->requested_fc & VAR_20)
  VAR_28 |= VAR_9;
 if (!(VAR_24->requested_fc & VAR_18))
  VAR_28 |= VAR_12;

 VAR_29 = 0;
 if (VAR_24->requested_fec == VAR_2)
  VAR_29 = VAR_24->fec_hint;
 else {
  if (VAR_24->requested_fec & VAR_4)
   VAR_29 |= VAR_11;
  if (VAR_24->requested_fec & VAR_3)
   VAR_29 |= VAR_10;
 }

 if (VAR_24->requested_aneg == VAR_0)
  VAR_27 = 0;
 else if (VAR_24->requested_aneg == VAR_1)
  VAR_27 = VAR_7;
 else
  VAR_27 = VAR_24->supported & VAR_7;

 if (VAR_27) {
  VAR_30 = VAR_24->supported & FUNC_4(VAR_17);
 } else if (VAR_24->requested_speed != 0)
  VAR_30 = FUNC_12(VAR_24->requested_speed);
 else
  VAR_30 = FUNC_8(VAR_24->supported);


 if (FUNC_10(VAR_21->port[VAR_21->chan_map[VAR_23]]))
  VAR_27 = VAR_24->supported & VAR_7;

 VAR_31 = VAR_27 | VAR_30 | VAR_28 | VAR_29;
 if ((VAR_31 | VAR_24->supported) != VAR_24->supported) {




  VAR_31 &= VAR_24->supported;
 }
 VAR_31 |= VAR_26;

 FUNC_11(&VAR_25, 0, sizeof(VAR_25));
 VAR_25.op_to_portid = FUNC_7(FUNC_2(VAR_14) |
         VAR_16 | VAR_15 |
         FUNC_6(VAR_23));
 if (VAR_21->params.port_caps32) {
  VAR_25.action_to_len16 =
      FUNC_7(FUNC_5(VAR_6) |
   FUNC_1(VAR_25));
  VAR_25.u.l1cfg32.rcap32 = FUNC_7(VAR_31);
 } else {
  VAR_25.action_to_len16 =
      FUNC_7(FUNC_5(VAR_5) |
       FUNC_1(VAR_25));
  VAR_25.u.l1cfg.rcap = FUNC_7(FUNC_9(VAR_31));
 }

 return FUNC_13(VAR_21, VAR_22, &VAR_25, sizeof(VAR_25), ((void*)0));
}
