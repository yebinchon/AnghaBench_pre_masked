
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u8 ;
typedef long u16 ;
struct TYPE_3__ {long dh; } ;
struct ikev2_initiator_data {int * r_dh_public; TYPE_2__* dh; TYPE_1__ proposal; } ;
struct TYPE_4__ {size_t prime_len; } ;


 int VAR_0 ;
 int VAR_1 ;
 long FUNC_0 (int const*) ;
 int FUNC_1 (int ,char*,int *) ;
 int FUNC_2 (int ,char*,...) ;
 int * FUNC_3 (int const*,size_t) ;
 int FUNC_4 (int *) ;

__attribute__((used)) static int FUNC_5(struct ikev2_initiator_data *VAR_2,
        const u8 *VAR_3, size_t VAR_4)
{
 u16 VAR_5;
 if (VAR_3 == ((void*)0)) {
  FUNC_2(VAR_1, "IKEV2: KEr not received");
  return -1;
 }

 if (VAR_4 < 4 + 96) {
  FUNC_2(VAR_1, "IKEV2: Too show Key Exchange Payload");
  return -1;
 }

 VAR_5 = FUNC_0(VAR_3);
 FUNC_2(VAR_0, "IKEV2: KEr DH Group #%u", VAR_5);

 if (VAR_5 != VAR_2->proposal.dh) {
  FUNC_2(VAR_0, "IKEV2: KEr DH Group #%u does not match "
      "with the selected proposal (%u)",
      VAR_5, VAR_2->proposal.dh);
  return -1;
 }

 if (VAR_2->dh == ((void*)0)) {
  FUNC_2(VAR_1, "IKEV2: Unsupported DH group");
  return -1;
 }





 if (VAR_4 - 4 != VAR_2->dh->prime_len) {
  FUNC_2(VAR_1, "IKEV2: Invalid DH public value length "
      "%ld (expected %ld)",
      (long) (VAR_4 - 4), (long) VAR_2->dh->prime_len);
  return -1;
 }

 FUNC_4(VAR_2->r_dh_public);
 VAR_2->r_dh_public = FUNC_3(VAR_3 + 4, VAR_4 - 4);
 if (VAR_2->r_dh_public == ((void*)0))
  return -1;

 FUNC_1(VAR_0, "IKEV2: KEr Diffie-Hellman Public Value",
   VAR_2->r_dh_public);

 return 0;
}
