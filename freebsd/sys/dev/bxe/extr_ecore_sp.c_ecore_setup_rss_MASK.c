
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
typedef int uint16_t ;
struct eth_rss_update_ramrod_data {int * indirection_table; int rss_engine_id; int rss_result_mask; int capabilities; int * rss_key; int rss_mode; int echo; } ;
struct ecore_raw_obj {int cid; int state; int rdata_mapping; scalar_t__ rdata; } ;
struct ecore_rss_config_obj {int * ind_table; int engine_id; struct ecore_raw_obj raw; } ;
struct ecore_config_rss_params {int * ind_table; int rss_result_mask; int * rss_key; int rss_flags; struct ecore_rss_config_obj* rss_obj; } ;
struct bxe_softc {int dummy; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int) ;
 int FUNC_2 (int *,int *,int) ;
 int FUNC_3 (struct eth_rss_update_ramrod_data*,int ,int) ;
 int FUNC_4 (struct bxe_softc*,char*,...) ;
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
 scalar_t__ FUNC_5 (int ,int *) ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;
 int VAR_20 ;
 int VAR_21 ;
 int VAR_22 ;
 int VAR_23 ;
 int VAR_24 ;
 int VAR_25 ;
 int VAR_26 ;
 int VAR_27 ;
 int VAR_28 ;
 int VAR_29 ;
 int FUNC_6 (struct bxe_softc*,int ,int,int ,int ) ;

__attribute__((used)) static int FUNC_7(struct bxe_softc *VAR_30,
      struct ecore_config_rss_params *VAR_31)
{
 struct ecore_rss_config_obj *VAR_32 = VAR_31->rss_obj;
 struct ecore_raw_obj *VAR_33 = &VAR_32->raw;
 struct eth_rss_update_ramrod_data *VAR_34 =
  (struct eth_rss_update_ramrod_data *)(VAR_33->rdata);
 uint16_t VAR_35 = 0;
 uint8_t VAR_36 = 0;
 int VAR_37;

 FUNC_3(VAR_34, 0, sizeof(*VAR_34));

 FUNC_4(VAR_30, "Configuring RSS\n");


 VAR_34->echo = FUNC_1((VAR_33->cid & VAR_13) |
     (VAR_33->state << VAR_14));


 if (FUNC_5(VAR_9, &VAR_31->rss_flags))
  VAR_36 = VAR_16;
 else if (FUNC_5(VAR_10, &VAR_31->rss_flags))
  VAR_36 = VAR_17;

 VAR_34->rss_mode = VAR_36;

 FUNC_4(VAR_30, "rss_mode=%d\n", VAR_36);


 if (FUNC_5(VAR_1, &VAR_31->rss_flags))
  VAR_35 |= VAR_18;

 if (FUNC_5(VAR_2, &VAR_31->rss_flags))
  VAR_35 |= VAR_19;

 if (FUNC_5(VAR_3, &VAR_31->rss_flags))
  VAR_35 |= VAR_20;

 if (FUNC_5(VAR_5, &VAR_31->rss_flags))
  VAR_35 |= VAR_22;

 if (FUNC_5(VAR_6, &VAR_31->rss_flags))
  VAR_35 |= VAR_23;

 if (FUNC_5(VAR_7, &VAR_31->rss_flags))
  VAR_35 |= VAR_24;

 if (FUNC_5(VAR_4, &VAR_31->rss_flags))
  VAR_35 |= VAR_21;

 if (FUNC_5(VAR_8, &VAR_31->rss_flags))
  VAR_35 |= VAR_25;

 if (FUNC_5(VAR_12, &VAR_31->rss_flags))
  VAR_35 |= VAR_26;


 if (FUNC_5(VAR_11, &VAR_31->rss_flags)) {
  FUNC_2(&VAR_34->rss_key[0], &VAR_31->rss_key[0],
         sizeof(VAR_34->rss_key));
  VAR_35 |= VAR_27;
 }

 VAR_34->capabilities = FUNC_0(VAR_35);


 VAR_34->rss_result_mask = VAR_31->rss_result_mask;


 VAR_34->rss_engine_id = VAR_32->engine_id;

 FUNC_4(VAR_30, "rss_engine_id=%d\n", VAR_34->rss_engine_id);


 FUNC_2(VAR_34->indirection_table, VAR_31->ind_table,
    VAR_29);


 FUNC_2(VAR_32->ind_table, VAR_31->ind_table, VAR_29);
 VAR_37 = FUNC_6(VAR_30,
        VAR_28,
        VAR_33->cid,
        VAR_33->rdata_mapping,
        VAR_15);

 if (VAR_37 < 0)
  return VAR_37;

 return VAR_0;
}
