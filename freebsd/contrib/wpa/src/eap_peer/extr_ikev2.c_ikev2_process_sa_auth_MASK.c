
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
struct TYPE_2__ {int integ; int encr; } ;
struct ikev2_responder_data {int keys; TYPE_1__ proposal; } ;
struct ikev2_payloads {int encr_next_payload; int encrypted_len; int encrypted; } ;
struct ikev2_hdr {int dummy; } ;


 int * FUNC_0 (int ,int ,int *,int,struct ikev2_hdr const*,int ,int ,size_t*) ;
 int FUNC_1 (struct ikev2_responder_data*,int ,int *,size_t) ;
 int FUNC_2 (int *) ;

__attribute__((used)) static int FUNC_3(struct ikev2_responder_data *VAR_0,
     const struct ikev2_hdr *VAR_1,
     struct ikev2_payloads *VAR_2)
{
 u8 *VAR_3;
 size_t VAR_4;
 int VAR_5;

 VAR_3 = FUNC_0(VAR_0->proposal.encr,
       VAR_0->proposal.integ,
       &VAR_0->keys, 1, VAR_1, VAR_2->encrypted,
       VAR_2->encrypted_len, &VAR_4);
 if (VAR_3 == ((void*)0))
  return -1;

 VAR_5 = FUNC_1(VAR_0, VAR_2->encr_next_payload,
           VAR_3, VAR_4);
 FUNC_2(VAR_3);

 return VAR_5;
}
