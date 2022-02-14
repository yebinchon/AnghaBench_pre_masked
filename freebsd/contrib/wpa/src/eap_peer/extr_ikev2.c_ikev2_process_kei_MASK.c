
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u8 ;
typedef long u16 ;
struct TYPE_3__ {long dh; } ;
struct ikev2_responder_data {int * i_dh_public; TYPE_2__* dh; int state; int error_type; TYPE_1__ proposal; } ;
struct TYPE_4__ {size_t prime_len; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 long FUNC_0 (int const*) ;
 int FUNC_1 (int ,char*,int *) ;
 int FUNC_2 (int ,char*,...) ;
 int * FUNC_3 (size_t) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *,int const*,size_t) ;

__attribute__((used)) static int FUNC_6(struct ikev2_responder_data *VAR_4,
        const u8 *VAR_5, size_t VAR_6)
{
 u16 VAR_7;
 if (VAR_5 == ((void*)0)) {
  FUNC_2(VAR_2, "IKEV2: KEi not received");
  return -1;
 }

 if (VAR_6 < 4 + 96) {
  FUNC_2(VAR_2, "IKEV2: Too short Key Exchange Payload");
  return -1;
 }

 VAR_7 = FUNC_0(VAR_5);
 FUNC_2(VAR_1, "IKEV2: KEi DH Group #%u", VAR_7);

 if (VAR_7 != VAR_4->proposal.dh) {
  FUNC_2(VAR_1, "IKEV2: KEi DH Group #%u does not match "
      "with the selected proposal (%u)",
      VAR_7, VAR_4->proposal.dh);


  VAR_4->error_type = VAR_0;
  VAR_4->state = VAR_3;
  return -1;
 }

 if (VAR_4->dh == ((void*)0)) {
  FUNC_2(VAR_2, "IKEV2: Unsupported DH group");
  return -1;
 }





 if (VAR_6 - 4 != VAR_4->dh->prime_len) {
  FUNC_2(VAR_2, "IKEV2: Invalid DH public value length "
      "%ld (expected %ld)",
      (long) (VAR_6 - 4), (long) VAR_4->dh->prime_len);
  return -1;
 }

 FUNC_4(VAR_4->i_dh_public);
 VAR_4->i_dh_public = FUNC_3(VAR_6 - 4);
 if (VAR_4->i_dh_public == ((void*)0))
  return -1;
 FUNC_5(VAR_4->i_dh_public, VAR_5 + 4, VAR_6 - 4);

 FUNC_1(VAR_1, "IKEV2: KEi Diffie-Hellman Public Value",
   VAR_4->i_dh_public);

 return 0;
}
