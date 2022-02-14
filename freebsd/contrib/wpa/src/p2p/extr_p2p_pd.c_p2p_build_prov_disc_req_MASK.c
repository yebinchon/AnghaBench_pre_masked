
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u8 ;
typedef int u16 ;
struct wpabuf {int dummy; } ;
struct p2ps_provision {int dummy; } ;
struct TYPE_6__ {int p2p_device_addr; } ;
struct p2p_device {int oper_ssid_len; int oper_ssid; TYPE_3__ info; int req_config_methods; int dialog_token; } ;
struct p2p_data {int dev_capab; scalar_t__* vendor_elem; scalar_t__ wfd_ie_prov_disc_req; TYPE_2__* p2ps_prov; TYPE_1__* cfg; scalar_t__ cross_connect; } ;
struct TYPE_5__ {int info; } ;
struct TYPE_4__ {scalar_t__ p2p_intra_bss; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 size_t VAR_6 ;
 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (struct wpabuf*,int,int ) ;
 int FUNC_2 (struct wpabuf*,struct p2p_data*,int *) ;
 int FUNC_3 (struct wpabuf*,int ,int ,int ) ;
 int * FUNC_4 (struct wpabuf*) ;
 int FUNC_5 (struct wpabuf*,int ,int ) ;
 int FUNC_6 (struct wpabuf*,int *) ;
 int FUNC_7 (struct wpabuf*,int ) ;
 int FUNC_8 (struct p2p_data*,struct p2p_device*,struct wpabuf*,int ) ;
 struct wpabuf* FUNC_9 (int) ;
 size_t FUNC_10 (scalar_t__) ;
 int FUNC_11 (struct wpabuf*,scalar_t__) ;

__attribute__((used)) static struct wpabuf * FUNC_12(struct p2p_data *VAR_7,
            struct p2p_device *VAR_8,
            int VAR_9)
{
 struct wpabuf *VAR_10;
 u8 *VAR_11;
 size_t VAR_12 = 0;
 u8 VAR_13 = VAR_8->dialog_token;
 u16 VAR_14 = VAR_8->req_config_methods;
 struct p2p_device *VAR_15 = VAR_9 ? VAR_8 : ((void*)0);
 u8 VAR_16;






 if (VAR_7->vendor_elem && VAR_7->vendor_elem[VAR_6])
  VAR_12 += FUNC_10(VAR_7->vendor_elem[VAR_6]);

 if (VAR_7->p2ps_prov)
  VAR_12 += FUNC_0(VAR_7->p2ps_prov->info) + 1 +
   sizeof(struct p2ps_provision);

 VAR_10 = FUNC_9(1000 + VAR_12);
 if (VAR_10 == ((void*)0))
  return ((void*)0);

 FUNC_5(VAR_10, VAR_5, VAR_13);

 VAR_11 = FUNC_4(VAR_10);

 VAR_16 = 0;
 if (VAR_7->p2ps_prov) {
  VAR_16 |= VAR_3;
  VAR_16 |= VAR_4;
  if (VAR_7->cross_connect)
   VAR_16 |= VAR_1;
  if (VAR_7->cfg->p2p_intra_bss)
   VAR_16 |= VAR_2;
 }
 FUNC_1(VAR_10, VAR_7->dev_capab &
          ~VAR_0,
          VAR_16);
 FUNC_2(VAR_10, VAR_7, ((void*)0));
 if (VAR_7->p2ps_prov) {
  FUNC_8(VAR_7, VAR_8, VAR_10, VAR_14);
 } else if (VAR_15) {
  FUNC_3(VAR_10, VAR_15->info.p2p_device_addr,
         VAR_15->oper_ssid, VAR_15->oper_ssid_len);
 }
 FUNC_6(VAR_10, VAR_11);


 FUNC_7(VAR_10, VAR_14);






 if (VAR_7->vendor_elem && VAR_7->vendor_elem[VAR_6])
  FUNC_11(VAR_10, VAR_7->vendor_elem[VAR_6]);

 return VAR_10;
}
