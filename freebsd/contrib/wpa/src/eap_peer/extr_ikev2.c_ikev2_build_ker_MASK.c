
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u8 ;
struct wpabuf {int dummy; } ;
struct TYPE_3__ {int dh; } ;
struct ikev2_responder_data {TYPE_2__* dh; TYPE_1__ proposal; int r_dh_private; } ;
struct ikev2_payload_hdr {int payload_length; scalar_t__ flags; int next_payload; } ;
struct TYPE_4__ {int prime_len; } ;


 int VAR_0 ;
 int FUNC_0 (int ,size_t) ;
 struct wpabuf* FUNC_1 (TYPE_2__*,int *) ;
 int FUNC_2 (int ,char*) ;
 int FUNC_3 (struct wpabuf*) ;
 int FUNC_4 (struct wpabuf*) ;
 struct ikev2_payload_hdr* FUNC_5 (struct wpabuf*,int) ;
 int FUNC_6 (struct wpabuf*,int ) ;
 int FUNC_7 (struct wpabuf*,struct wpabuf*) ;

__attribute__((used)) static int FUNC_8(struct ikev2_responder_data *VAR_1,
      struct wpabuf *VAR_2, u8 VAR_3)
{
 struct ikev2_payload_hdr *VAR_4;
 size_t VAR_5;
 struct wpabuf *VAR_6;

 FUNC_2(VAR_0, "IKEV2: Adding KEr payload");

 VAR_6 = FUNC_1(VAR_1->dh, &VAR_1->r_dh_private);
 if (VAR_6 == ((void*)0)) {
  FUNC_2(VAR_0, "IKEV2: Failed to initialize DH");
  return -1;
 }


 VAR_4 = FUNC_5(VAR_2, sizeof(*VAR_4));
 VAR_4->next_payload = VAR_3;
 VAR_4->flags = 0;

 FUNC_6(VAR_2, VAR_1->proposal.dh);
 FUNC_5(VAR_2, 2);




 FUNC_5(VAR_2, VAR_1->dh->prime_len - FUNC_4(VAR_6));
 FUNC_7(VAR_2, VAR_6);
 FUNC_3(VAR_6);

 VAR_5 = (u8 *) FUNC_5(VAR_2, 0) - (u8 *) VAR_4;
 FUNC_0(VAR_4->payload_length, VAR_5);
 return 0;
}
