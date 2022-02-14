
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
struct wpabuf {int dummy; } ;
struct p2p_data {int dev_capab; int p2ps_adv_list; int ext_listen_interval; int ext_listen_period; scalar_t__* vendor_elem; scalar_t__ wfd_ie_probe_resp; TYPE_1__* go_neg_peer; } ;
struct TYPE_2__ {int wps_method; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 size_t VAR_2 ;
 int FUNC_0 (struct wpabuf*,int,int ) ;
 int FUNC_1 (struct wpabuf*,struct p2p_data*,int *) ;
 int FUNC_2 (struct wpabuf*,int ,int ) ;
 int * FUNC_3 (struct wpabuf*) ;
 int FUNC_4 (struct wpabuf*,struct p2p_data*,int ,int const*,int ) ;
 int FUNC_5 (struct wpabuf*,int *) ;
 scalar_t__ FUNC_6 (struct p2p_data*,struct wpabuf*,int,int) ;
 int FUNC_7 (struct p2p_data*,char*) ;
 int FUNC_8 (int ) ;
 struct wpabuf* FUNC_9 (int) ;
 int FUNC_10 (struct wpabuf*) ;
 size_t FUNC_11 (scalar_t__) ;
 int FUNC_12 (struct wpabuf*,scalar_t__) ;

struct wpabuf * FUNC_13(struct p2p_data *VAR_3,
      const u8 *VAR_4,
      u8 VAR_5)
{
 struct wpabuf *VAR_6;
 u8 *VAR_7;
 int VAR_8 = -1;
 size_t VAR_9 = 0;






 if (VAR_3->vendor_elem && VAR_3->vendor_elem[VAR_2])
  VAR_9 += FUNC_11(VAR_3->vendor_elem[VAR_2]);

 if (VAR_5)
  VAR_9 += VAR_0;

 VAR_6 = FUNC_9(1000 + VAR_9);
 if (VAR_6 == ((void*)0))
  return ((void*)0);

 if (VAR_3->go_neg_peer) {

  VAR_8 = FUNC_8(VAR_3->go_neg_peer->wps_method);
 }

 if (FUNC_6(VAR_3, VAR_6, VAR_8, 1) < 0) {
  FUNC_7(VAR_3, "Failed to build WPS IE for Probe Response");
  FUNC_10(VAR_6);
  return ((void*)0);
 }






 if (VAR_3->vendor_elem && VAR_3->vendor_elem[VAR_2])
  FUNC_12(VAR_6,
          VAR_3->vendor_elem[VAR_2]);


 VAR_7 = FUNC_3(VAR_6);
 FUNC_0(VAR_6, VAR_3->dev_capab &
          ~VAR_1, 0);
 if (VAR_3->ext_listen_interval)
  FUNC_2(VAR_6, VAR_3->ext_listen_period,
           VAR_3->ext_listen_interval);
 FUNC_1(VAR_6, VAR_3, ((void*)0));
 FUNC_5(VAR_6, VAR_7);

 if (VAR_5) {
  FUNC_4(VAR_6, VAR_3, VAR_5, VAR_4,
          VAR_3->p2ps_adv_list);
 }

 return VAR_6;
}
