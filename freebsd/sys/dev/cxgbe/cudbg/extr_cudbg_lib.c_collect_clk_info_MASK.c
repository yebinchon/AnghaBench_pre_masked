
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u64 ;
struct struct_clk_info {int cclk_ps; int res; int tre; int dack_re; int dack_timer; int retransmit_min; int retransmit_max; int persist_timer_min; int persist_timer_max; int keepalive_idle_timer; int keepalive_interval; int initial_srtt; int finwait2_timer; } ;
struct cudbg_init {struct adapter* adap; } ;
struct cudbg_error {int dummy; } ;
struct cudbg_buffer {scalar_t__ data; } ;
struct TYPE_3__ {int cclk; } ;
struct TYPE_4__ {TYPE_1__ vpd; } ;
struct adapter {TYPE_2__ params; } ;


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
 int FUNC_0 (int) ;
 int FUNC_1 (int) ;
 int FUNC_2 (int) ;
 int FUNC_3 (struct cudbg_buffer*,struct cudbg_buffer*) ;
 int FUNC_4 (struct cudbg_buffer*,int,struct cudbg_buffer*) ;
 int FUNC_5 (struct cudbg_buffer*,struct cudbg_buffer*) ;
 int FUNC_6 (struct adapter*,int ) ;
 int FUNC_7 (struct cudbg_buffer*,struct cudbg_buffer*) ;

__attribute__((used)) static int FUNC_8(struct cudbg_init *VAR_11,
       struct cudbg_buffer *VAR_12,
       struct cudbg_error *VAR_13)
{
 struct cudbg_buffer VAR_14;
 struct adapter *VAR_15 = VAR_11->adap;
 struct struct_clk_info *VAR_16;
 u64 VAR_17;
 int VAR_18;
 int VAR_19 = 0;

 if (!VAR_15->params.vpd.cclk) {
  VAR_19 = VAR_10;
  goto err;
 }

 VAR_18 = sizeof(struct struct_clk_info);
 VAR_19 = FUNC_4(VAR_12, VAR_18, &VAR_14);
 if (VAR_19)
  goto err;

 VAR_16 = (struct struct_clk_info *) VAR_14.data;

 VAR_16->cclk_ps = 1000000000 / VAR_15->params.vpd.cclk;

 VAR_16->res = FUNC_6(VAR_15, VAR_9);
 VAR_16->tre = FUNC_2(VAR_16->res);
 VAR_16->dack_re = FUNC_0(VAR_16->res);
 VAR_17 = (VAR_16->cclk_ps << VAR_16->tre) / 1000000;

 VAR_16->dack_timer = ((VAR_16->cclk_ps <<
          VAR_16->dack_re) / 1000000) *
         FUNC_6(VAR_15, VAR_0);

 VAR_16->retransmit_min =
  VAR_17 * FUNC_6(VAR_15, VAR_8);
 VAR_16->retransmit_max =
  VAR_17 * FUNC_6(VAR_15, VAR_7);

 VAR_16->persist_timer_min =
  VAR_17 * FUNC_6(VAR_15, VAR_6);
 VAR_16->persist_timer_max =
  VAR_17 * FUNC_6(VAR_15, VAR_5);

 VAR_16->keepalive_idle_timer =
  VAR_17 * FUNC_6(VAR_15, VAR_3);
 VAR_16->keepalive_interval =
  VAR_17 * FUNC_6(VAR_15, VAR_4);

 VAR_16->initial_srtt =
  VAR_17 * FUNC_1(FUNC_6(VAR_15, VAR_2));
 VAR_16->finwait2_timer =
  VAR_17 * FUNC_6(VAR_15, VAR_1);

 VAR_19 = FUNC_7(&VAR_14, VAR_12);

 if (VAR_19)
  goto err1;

 VAR_19 = FUNC_3(&VAR_14, VAR_12);
err1:
 FUNC_5(&VAR_14, VAR_12);
err:
 return VAR_19;

}
