
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_29__ TYPE_3__ ;
typedef struct TYPE_28__ TYPE_2__ ;
typedef struct TYPE_27__ TYPE_22__ ;
typedef struct TYPE_26__ TYPE_1__ ;
typedef struct TYPE_25__ TYPE_10__ ;


typedef int u32 ;
struct vpd_params {int uclk; int mem_timing; scalar_t__ mclk; } ;
struct TYPE_25__ {int max_pkt_size; } ;
struct TYPE_26__ {int nroutes; int nfilters; int nservers; } ;
struct TYPE_28__ {scalar_t__ rev; int nports; TYPE_10__ sge; int chan_map; int tp; TYPE_1__ mc5; struct vpd_params vpd; } ;
struct TYPE_29__ {TYPE_2__ params; int mc5; int cm; int pmtx; int pmrx; } ;
typedef TYPE_3__ adapter_t ;
struct TYPE_27__ {int mac; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_0 (TYPE_3__*,char*) ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 unsigned int VAR_16 ;
 scalar_t__ VAR_17 ;
 int FUNC_1 (int) ;
 TYPE_22__* FUNC_2 (TYPE_3__*,int ) ;
 int FUNC_3 (TYPE_3__*) ;
 scalar_t__ FUNC_4 (TYPE_3__*) ;
 int FUNC_5 (TYPE_3__*) ;
 int FUNC_6 (TYPE_3__*,int ) ;
 scalar_t__ FUNC_7 (TYPE_3__*,int,int ) ;
 int FUNC_8 (TYPE_3__*) ;
 scalar_t__ FUNC_9 (TYPE_3__*) ;
 scalar_t__ FUNC_10 (int *,scalar_t__,int ) ;
 int FUNC_11 (int ,unsigned int) ;
 int FUNC_12 (int) ;
 int FUNC_13 (TYPE_3__*,int *) ;
 int FUNC_14 (int *) ;
 scalar_t__ FUNC_15 (int *,int ,int ,int ) ;
 scalar_t__ FUNC_16 (TYPE_3__*,int ) ;
 int FUNC_17 (TYPE_3__*,int ,int ,int) ;
 int FUNC_18 (TYPE_3__*,TYPE_10__*) ;
 int FUNC_19 (TYPE_3__*,int ,int) ;
 int FUNC_20 (TYPE_3__*,int ) ;
 int FUNC_21 (TYPE_3__*,int ,int) ;
 scalar_t__ FUNC_22 (TYPE_3__*,int *) ;
 int FUNC_23 (TYPE_3__*,int *) ;

int FUNC_24(adapter_t *VAR_18, u32 VAR_19)
{
 int VAR_20 = -VAR_9, VAR_21, VAR_22;
 const struct vpd_params *VAR_23 = &VAR_18->params.vpd;

 if (VAR_18->params.rev > 0)
  FUNC_5(VAR_18);
 else if (FUNC_4(VAR_18))
  goto out_err;

 if (VAR_18->params.nports > 2)
  FUNC_14(&FUNC_2(VAR_18, 0)->mac);

 if (VAR_23->mclk) {
  FUNC_13(VAR_18, &VAR_18->params.tp);

  if (FUNC_10(&VAR_18->pmrx, VAR_23->mclk, VAR_23->mem_timing) ||
      FUNC_10(&VAR_18->pmtx, VAR_23->mclk, VAR_23->mem_timing) ||
      FUNC_10(&VAR_18->cm, VAR_23->mclk, VAR_23->mem_timing) ||
      FUNC_15(&VAR_18->mc5, VAR_18->params.mc5.nservers,
           VAR_18->params.mc5.nfilters,
           VAR_18->params.mc5.nroutes))
   goto out_err;

  for (VAR_22 = 0; VAR_22 < 32; VAR_22++)
   if (FUNC_7(VAR_18, VAR_22, VAR_13))
    goto out_err;
 }

 if (FUNC_22(VAR_18, &VAR_18->params.tp))
  goto out_err;

 FUNC_19(VAR_18,
      FUNC_11(VAR_18->params.sge.max_pkt_size,
          VAR_16), 1);
 FUNC_20(VAR_18,
        FUNC_11(VAR_18->params.sge.max_pkt_size, 16384U));
 FUNC_23(VAR_18, &VAR_18->params.tp);
 if (FUNC_9(VAR_18))
  FUNC_8(VAR_18);
 else
  FUNC_17(VAR_18, VAR_2, 0,
     VAR_14 | VAR_12);

 if (VAR_18->params.rev == VAR_17)
  FUNC_17(VAR_18, VAR_8, 0,
     VAR_11);

 FUNC_21(VAR_18, VAR_4, 0xffffffff);
 FUNC_21(VAR_18, VAR_5, 0);
 FUNC_21(VAR_18, VAR_6, 0);
 FUNC_6(VAR_18, VAR_18->params.chan_map);
 FUNC_18(VAR_18, &VAR_18->params.sge);
 FUNC_17(VAR_18, VAR_3, 0, VAR_15);

 FUNC_21(VAR_18, VAR_7, FUNC_3(VAR_18));

 FUNC_21(VAR_18, VAR_1, VAR_23->uclk | VAR_19);
 FUNC_21(VAR_18, VAR_0,
       FUNC_1(VAR_10 >> 2));
 (void) FUNC_16(VAR_18, VAR_0);

 VAR_21 = 100;
 do {
  FUNC_12(20);
 } while (FUNC_16(VAR_18, VAR_1) && --VAR_21);
 if (!VAR_21) {
  FUNC_0(VAR_18, "uP initialization timed out\n");
  goto out_err;
 }

 VAR_20 = 0;
 out_err:
 return VAR_20;
}
