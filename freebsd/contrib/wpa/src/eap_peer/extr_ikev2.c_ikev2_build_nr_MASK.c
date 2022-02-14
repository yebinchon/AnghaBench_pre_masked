
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct wpabuf {int dummy; } ;
struct ikev2_responder_data {int r_nonce_len; int r_nonce; } ;
struct ikev2_payload_hdr {int payload_length; scalar_t__ flags; int next_payload; } ;


 int VAR_0 ;
 int FUNC_0 (int ,size_t) ;
 int FUNC_1 (int ,char*) ;
 struct ikev2_payload_hdr* FUNC_2 (struct wpabuf*,int) ;
 int FUNC_3 (struct wpabuf*,int ,int ) ;

__attribute__((used)) static int FUNC_4(struct ikev2_responder_data *VAR_1,
     struct wpabuf *VAR_2, u8 VAR_3)
{
 struct ikev2_payload_hdr *VAR_4;
 size_t VAR_5;

 FUNC_1(VAR_0, "IKEV2: Adding Nr payload");


 VAR_4 = FUNC_2(VAR_2, sizeof(*VAR_4));
 VAR_4->next_payload = VAR_3;
 VAR_4->flags = 0;
 FUNC_3(VAR_2, VAR_1->r_nonce, VAR_1->r_nonce_len);
 VAR_5 = (u8 *) FUNC_2(VAR_2, 0) - (u8 *) VAR_4;
 FUNC_0(VAR_4->payload_length, VAR_5);
 return 0;
}
