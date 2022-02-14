
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
typedef size_t u16 ;
struct wpabuf {int dummy; } ;
struct p2p_device {scalar_t__ wps_method; } ;
struct p2p_data {TYPE_1__* cfg; } ;
struct TYPE_2__ {int config_methods; size_t num_sec_dev_types; scalar_t__ dev_name; scalar_t__* sec_dev_type; scalar_t__ pri_dev_type; scalar_t__ dev_addr; } ;


 size_t VAR_0 ;
 size_t VAR_1 ;
 int VAR_2 ;
 size_t VAR_3 ;
 int FUNC_0 (int *,int) ;
 size_t VAR_4 ;
 size_t VAR_5 ;
 size_t VAR_6 ;
 size_t VAR_7 ;
 size_t VAR_8 ;
 scalar_t__ VAR_9 ;
 scalar_t__ VAR_10 ;
 scalar_t__ VAR_11 ;
 scalar_t__ VAR_12 ;
 scalar_t__ VAR_13 ;
 size_t FUNC_1 (scalar_t__) ;
 int FUNC_2 (int ,char*) ;
 int * FUNC_3 (struct wpabuf*,int) ;
 int FUNC_4 (struct wpabuf*,size_t) ;
 int FUNC_5 (struct wpabuf*,scalar_t__,size_t) ;
 int FUNC_6 (struct wpabuf*,size_t) ;

void FUNC_7(struct wpabuf *VAR_14, struct p2p_data *VAR_15,
        struct p2p_device *VAR_16)
{
 u8 *VAR_17;
 u16 VAR_18;
 size_t VAR_19, VAR_20;


 FUNC_6(VAR_14, VAR_3);
 VAR_17 = FUNC_3(VAR_14, 2);


 FUNC_5(VAR_14, VAR_15->cfg->dev_addr, VAR_1);


 VAR_18 = 0;
 if (VAR_16 && VAR_16->wps_method != VAR_9) {
  if (VAR_16->wps_method == VAR_11)
   VAR_18 |= VAR_7;
  else if (VAR_16->wps_method == VAR_10)
   VAR_18 |= VAR_6;
  else if (VAR_16->wps_method == VAR_12 ||
    VAR_16->wps_method == VAR_13)
   VAR_18 |= VAR_4 | VAR_5;
 } else if (VAR_15->cfg->config_methods) {
  VAR_18 |= VAR_15->cfg->config_methods &
   (VAR_7 | VAR_4 |
    VAR_5 | VAR_6);
 } else {
  VAR_18 |= VAR_7;
  VAR_18 |= VAR_4 | VAR_5;
  VAR_18 |= VAR_6;
 }
 FUNC_4(VAR_14, VAR_18);


 FUNC_5(VAR_14, VAR_15->cfg->pri_dev_type,
   sizeof(VAR_15->cfg->pri_dev_type));


 FUNC_6(VAR_14, VAR_15->cfg->num_sec_dev_types);


 for (VAR_20 = 0; VAR_20 < VAR_15->cfg->num_sec_dev_types; VAR_20++)
  FUNC_5(VAR_14, VAR_15->cfg->sec_dev_type[VAR_20],
    VAR_8);


 VAR_19 = VAR_15->cfg->dev_name ? FUNC_1(VAR_15->cfg->dev_name) : 0;
 FUNC_4(VAR_14, VAR_0);
 FUNC_4(VAR_14, VAR_19);
 FUNC_5(VAR_14, VAR_15->cfg->dev_name, VAR_19);


 FUNC_0(VAR_17, (u8 *) FUNC_3(VAR_14, 0) - VAR_17 - 2);
 FUNC_2(VAR_2, "P2P: * Device Info");
}
