
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct wpabuf {int dummy; } ;
struct p2p_device {int dummy; } ;
struct p2p_data {int ext_listen_interval; int ext_listen_period; int dev_capab; struct wpabuf** vendor_elem; struct wpabuf* wfd_ie_assoc_req; } ;


 size_t VAR_0 ;
 int FUNC_0 (int *,int ,size_t) ;
 int FUNC_1 (struct p2p_data*,int const*,int *,size_t,struct wpabuf*) ;
 int FUNC_2 (struct wpabuf*,int ,int ) ;
 int FUNC_3 (struct wpabuf*,struct p2p_data*,struct p2p_device*) ;
 int FUNC_4 (struct wpabuf*,int ,int ) ;
 int * FUNC_5 (struct wpabuf*) ;
 int FUNC_6 (struct wpabuf*,int *) ;
 struct p2p_device* FUNC_7 (struct p2p_data*,int const*) ;
 struct wpabuf* FUNC_8 (int) ;
 int FUNC_9 (struct wpabuf*) ;
 int FUNC_10 (struct wpabuf*) ;
 size_t FUNC_11 (struct wpabuf*) ;
 int FUNC_12 (struct wpabuf*,struct wpabuf*) ;

int FUNC_13(struct p2p_data *VAR_1, const u8 *VAR_2, u8 *VAR_3,
       size_t VAR_4, int VAR_5, struct wpabuf *VAR_6)
{
 struct wpabuf *VAR_7;
 u8 *VAR_8;
 struct p2p_device *VAR_9;
 size_t VAR_10;
 int VAR_11;
 size_t VAR_12 = 0;

 if (!VAR_5)
  return FUNC_1(VAR_1, VAR_2, VAR_3, VAR_4, VAR_6);






 if (VAR_1->vendor_elem && VAR_1->vendor_elem[VAR_0])
  VAR_12 += FUNC_11(VAR_1->vendor_elem[VAR_0]);







 VAR_7 = FUNC_8(200 + VAR_12);
 if (VAR_7 == ((void*)0))
  return -1;






 if (VAR_1->vendor_elem && VAR_1->vendor_elem[VAR_0])
  FUNC_12(VAR_7,
          VAR_1->vendor_elem[VAR_0]);

 VAR_9 = VAR_2 ? FUNC_7(VAR_1, VAR_2) : ((void*)0);

 VAR_8 = FUNC_5(VAR_7);
 FUNC_2(VAR_7, VAR_1->dev_capab, 0);
 if (VAR_1->ext_listen_interval)
  FUNC_4(VAR_7, VAR_1->ext_listen_period,
           VAR_1->ext_listen_interval);
 FUNC_3(VAR_7, VAR_1, VAR_9);
 FUNC_6(VAR_7, VAR_8);

 VAR_10 = FUNC_11(VAR_7);
 if (VAR_10 > VAR_4)
  VAR_11 = -1;
 else {
  FUNC_0(VAR_3, FUNC_10(VAR_7), VAR_10);
  VAR_11 = VAR_10;
 }
 FUNC_9(VAR_7);

 return VAR_11;
}
