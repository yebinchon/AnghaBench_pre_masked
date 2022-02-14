
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
struct wpabuf {int dummy; } ;
struct ikev2_transform {int type; int transform_id; int transform_type; int transform_length; } ;
struct ikev2_proposal {int num_transforms; int proposal_length; int protocol_id; int proposal_num; } ;
struct ikev2_payload_hdr {int payload_length; scalar_t__ flags; int next_payload; } ;
struct TYPE_2__ {size_t encr; size_t prf; size_t integ; size_t dh; int proposal_num; } ;
struct ikev2_initiator_data {TYPE_1__ proposal; } ;


 size_t VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (int ,size_t) ;
 int FUNC_1 (int ,char*) ;
 void* FUNC_2 (struct wpabuf*,int) ;
 int FUNC_3 (struct wpabuf*,int) ;

__attribute__((used)) static int FUNC_4(struct ikev2_initiator_data *VAR_7,
       struct wpabuf *VAR_8, u8 VAR_9)
{
 struct ikev2_payload_hdr *VAR_10;
 size_t VAR_11;
 struct ikev2_proposal *VAR_12;
 struct ikev2_transform *VAR_13;

 FUNC_1(VAR_6, "IKEV2: Adding SAi payload");


 VAR_10 = FUNC_2(VAR_8, sizeof(*VAR_10));
 VAR_10->next_payload = VAR_9;
 VAR_10->flags = 0;


 VAR_12 = FUNC_2(VAR_8, sizeof(*VAR_12));
 VAR_12->proposal_num = VAR_7->proposal.proposal_num;
 VAR_12->protocol_id = VAR_1;
 VAR_12->num_transforms = 4;

 VAR_13 = FUNC_2(VAR_8, sizeof(*VAR_13));
 VAR_13->type = 3;
 VAR_13->transform_type = VAR_3;
 FUNC_0(VAR_13->transform_id, VAR_7->proposal.encr);
 if (VAR_7->proposal.encr == VAR_0) {

  FUNC_3(VAR_8, 0x800e);
  FUNC_3(VAR_8, 128);
 }
 VAR_11 = (u8 *) FUNC_2(VAR_8, 0) - (u8 *) VAR_13;
 FUNC_0(VAR_13->transform_length, VAR_11);

 VAR_13 = FUNC_2(VAR_8, sizeof(*VAR_13));
 VAR_13->type = 3;
 FUNC_0(VAR_13->transform_length, sizeof(*VAR_13));
 VAR_13->transform_type = VAR_5;
 FUNC_0(VAR_13->transform_id, VAR_7->proposal.prf);

 VAR_13 = FUNC_2(VAR_8, sizeof(*VAR_13));
 VAR_13->type = 3;
 FUNC_0(VAR_13->transform_length, sizeof(*VAR_13));
 VAR_13->transform_type = VAR_4;
 FUNC_0(VAR_13->transform_id, VAR_7->proposal.integ);

 VAR_13 = FUNC_2(VAR_8, sizeof(*VAR_13));
 FUNC_0(VAR_13->transform_length, sizeof(*VAR_13));
 VAR_13->transform_type = VAR_2;
 FUNC_0(VAR_13->transform_id, VAR_7->proposal.dh);

 VAR_11 = (u8 *) FUNC_2(VAR_8, 0) - (u8 *) VAR_12;
 FUNC_0(VAR_12->proposal_length, VAR_11);

 VAR_11 = (u8 *) FUNC_2(VAR_8, 0) - (u8 *) VAR_10;
 FUNC_0(VAR_10->payload_length, VAR_11);

 return 0;
}
