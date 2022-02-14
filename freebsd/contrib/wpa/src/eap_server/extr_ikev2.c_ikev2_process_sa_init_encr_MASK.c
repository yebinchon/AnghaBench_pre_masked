
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
struct ikev2_payloads {int idr_len; scalar_t__ idr; } ;
struct TYPE_2__ {int integ; int encr; } ;
struct ikev2_initiator_data {int keys; TYPE_1__ proposal; } ;
struct ikev2_hdr {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int * FUNC_0 (int ,int ,int *,int ,struct ikev2_hdr const*,int const*,size_t,size_t*) ;
 scalar_t__ FUNC_1 (struct ikev2_payloads*,int ,int *,int *) ;
 int FUNC_2 (struct ikev2_initiator_data*,scalar_t__,int ) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int ,char*) ;

__attribute__((used)) static int FUNC_5(struct ikev2_initiator_data *VAR_2,
          const struct ikev2_hdr *VAR_3,
          const u8 *VAR_4,
          size_t VAR_5, u8 VAR_6)
{
 u8 *VAR_7;
 size_t VAR_8;
 struct ikev2_payloads VAR_9;
 int VAR_10 = 0;

 VAR_7 = FUNC_0(VAR_2->proposal.encr,
       VAR_2->proposal.integ, &VAR_2->keys, 0,
       VAR_3, VAR_4, VAR_5,
       &VAR_8);
 if (VAR_7 == ((void*)0))
  return -1;

 FUNC_4(VAR_0, "IKEV2: Processing decrypted payloads");

 if (FUNC_1(&VAR_9, VAR_6, VAR_7,
     VAR_7 + VAR_8) < 0) {
  FUNC_4(VAR_1, "IKEV2: Failed to parse decrypted "
      "payloads");
  return -1;
 }

 if (VAR_9.idr)
  VAR_10 = FUNC_2(VAR_2, VAR_9.idr, VAR_9.idr_len);

 FUNC_3(VAR_7);

 return VAR_10;
}
