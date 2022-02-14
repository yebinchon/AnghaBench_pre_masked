
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct wpabuf {int dummy; } ;
struct ikev2_initiator_data {struct wpabuf* i_sign_msg; int i_nonce_len; int i_nonce; int i_spi; } ;
struct ikev2_hdr {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_0 (struct ikev2_initiator_data*,struct wpabuf*,int ,int ,int ) ;
 scalar_t__ FUNC_1 (struct ikev2_initiator_data*,struct wpabuf*,int ) ;
 scalar_t__ FUNC_2 (struct ikev2_initiator_data*,struct wpabuf*,int ) ;
 scalar_t__ FUNC_3 (struct ikev2_initiator_data*,struct wpabuf*,int ) ;
 int FUNC_4 (struct wpabuf*) ;
 scalar_t__ FUNC_5 (int ,int ) ;
 scalar_t__ FUNC_6 (int ,int ) ;
 int FUNC_7 (int ,char*,int ,int ) ;
 int FUNC_8 (int ,char*,struct wpabuf*) ;
 struct wpabuf* FUNC_9 (int) ;
 struct wpabuf* FUNC_10 (struct wpabuf*) ;
 int FUNC_11 (struct wpabuf*) ;

__attribute__((used)) static struct wpabuf * FUNC_12(struct ikev2_initiator_data *VAR_9)
{
 struct wpabuf *VAR_10;



 if (FUNC_5(VAR_9->i_spi, VAR_5))
  return ((void*)0);
 FUNC_7(VAR_7, "IKEV2: IKE_SA Initiator's SPI",
      VAR_9->i_spi, VAR_5);

 VAR_9->i_nonce_len = VAR_0;
 if (FUNC_6(VAR_9->i_nonce, VAR_9->i_nonce_len))
  return ((void*)0);
 FUNC_7(VAR_7, "IKEV2: Ni", VAR_9->i_nonce, VAR_9->i_nonce_len);

 VAR_10 = FUNC_9(sizeof(struct ikev2_hdr) + 1000);
 if (VAR_10 == ((void*)0))
  return ((void*)0);

 FUNC_0(VAR_9, VAR_10, VAR_6, VAR_4, 0);
 if (FUNC_3(VAR_9, VAR_10, VAR_1) ||
     FUNC_1(VAR_9, VAR_10, VAR_2) ||
     FUNC_2(VAR_9, VAR_10, VAR_3)) {
  FUNC_11(VAR_10);
  return ((void*)0);
 }

 FUNC_4(VAR_10);

 FUNC_8(VAR_8, "IKEV2: Sending message (SA_INIT)", VAR_10);

 FUNC_11(VAR_9->i_sign_msg);
 VAR_9->i_sign_msg = FUNC_10(VAR_10);

 return VAR_10;
}
