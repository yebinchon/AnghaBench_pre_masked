
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct wpabuf {int dummy; } ;
struct ikev2_payload_hdr {int payload_length; scalar_t__ flags; int next_payload; } ;
struct ikev2_initiator_data {int IDi_len; int * IDi; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,size_t) ;
 int FUNC_1 (int ,char*) ;
 struct ikev2_payload_hdr* FUNC_2 (struct wpabuf*,int) ;
 int FUNC_3 (struct wpabuf*,int *,int ) ;
 int FUNC_4 (struct wpabuf*,int ) ;

__attribute__((used)) static int FUNC_5(struct ikev2_initiator_data *VAR_3,
      struct wpabuf *VAR_4, u8 VAR_5)
{
 struct ikev2_payload_hdr *VAR_6;
 size_t VAR_7;

 FUNC_1(VAR_1, "IKEV2: Adding IDi payload");

 if (VAR_3->IDi == ((void*)0)) {
  FUNC_1(VAR_2, "IKEV2: No IDi available");
  return -1;
 }


 VAR_6 = FUNC_2(VAR_4, sizeof(*VAR_6));
 VAR_6->next_payload = VAR_5;
 VAR_6->flags = 0;
 FUNC_4(VAR_4, VAR_0);
 FUNC_2(VAR_4, 3);
 FUNC_3(VAR_4, VAR_3->IDi, VAR_3->IDi_len);
 VAR_7 = (u8 *) FUNC_2(VAR_4, 0) - (u8 *) VAR_6;
 FUNC_0(VAR_6->payload_length, VAR_7);
 return 0;
}
