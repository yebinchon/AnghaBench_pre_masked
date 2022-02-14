
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
struct ikev2_payloads {int encr_next_payload; int encrypted_len; int encrypted; } ;
struct TYPE_2__ {int integ; int encr; } ;
struct ikev2_initiator_data {int state; int unknown_user; int keys; TYPE_1__ proposal; } ;
struct ikev2_hdr {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int * FUNC_0 (int ,int ,int *,int ,struct ikev2_hdr const*,int ,int ,size_t*) ;
 int FUNC_1 (struct ikev2_initiator_data*,int ,int *,size_t) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int ,char*) ;

__attribute__((used)) static int FUNC_4(struct ikev2_initiator_data *VAR_2,
     const struct ikev2_hdr *VAR_3,
     struct ikev2_payloads *VAR_4)
{
 u8 *VAR_5;
 size_t VAR_6;
 int VAR_7;

 VAR_5 = FUNC_0(VAR_2->proposal.encr,
       VAR_2->proposal.integ,
       &VAR_2->keys, 0, VAR_3, VAR_4->encrypted,
       VAR_4->encrypted_len, &VAR_6);
 if (VAR_5 == ((void*)0))
  return -1;

 VAR_7 = FUNC_1(VAR_2, VAR_4->encr_next_payload,
           VAR_5, VAR_6);
 FUNC_2(VAR_5);

 if (VAR_7 == 0 && !VAR_2->unknown_user) {
  FUNC_3(VAR_1, "IKEV2: Authentication completed");
  VAR_2->state = VAR_0;
 }

 return VAR_7;
}
