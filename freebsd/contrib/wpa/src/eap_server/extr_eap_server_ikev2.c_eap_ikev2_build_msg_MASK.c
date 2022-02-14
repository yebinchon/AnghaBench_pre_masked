
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u8 ;
struct wpabuf {int dummy; } ;
struct ikev2_integ_alg {size_t hash_len; } ;
struct TYPE_5__ {int SK_integ_len; int SK_ai; } ;
struct TYPE_4__ {int integ; } ;
struct TYPE_6__ {TYPE_2__ keys; TYPE_1__ proposal; } ;
struct eap_ikev2_data {size_t out_used; int fragment_size; struct wpabuf* out_buf; TYPE_3__ ikev2; scalar_t__ keys_ready; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_0 (struct eap_ikev2_data*,int ) ;
 struct wpabuf* FUNC_1 (int ,int ,size_t,int ,int) ;
 struct ikev2_integ_alg* FUNC_2 (int ) ;
 int FUNC_3 (int ,int ,int ,int const*,size_t,int ) ;
 int FUNC_4 (int ,char*,...) ;
 int FUNC_5 (struct wpabuf*) ;
 int* FUNC_6 (struct wpabuf*) ;
 scalar_t__ FUNC_7 (struct wpabuf*) ;
 size_t FUNC_8 (struct wpabuf*) ;
 int FUNC_9 (struct wpabuf*,size_t) ;
 int FUNC_10 (struct wpabuf*,size_t) ;
 int FUNC_11 (struct wpabuf*,scalar_t__,size_t) ;
 int FUNC_12 (struct wpabuf*,int) ;

__attribute__((used)) static struct wpabuf * FUNC_13(struct eap_ikev2_data *VAR_8, u8 VAR_9)
{
 struct wpabuf *VAR_10;
 u8 VAR_11;
 size_t VAR_12, VAR_13, VAR_14 = 0;

 FUNC_4(VAR_6, "EAP-IKEV2: Generating Request");

 VAR_11 = 0;
 VAR_12 = FUNC_8(VAR_8->out_buf) - VAR_8->out_used;
 if (1 + VAR_12 > VAR_8->fragment_size) {
  VAR_12 = VAR_8->fragment_size - 1;
  VAR_11 |= VAR_5;
  if (VAR_8->out_used == 0) {
   VAR_11 |= VAR_4;
   VAR_12 -= 4;
  }
 }

 VAR_13 = 1 + VAR_12;
 if (VAR_11 & VAR_4)
  VAR_13 += 4;
 if (VAR_8->keys_ready) {
  const struct ikev2_integ_alg *VAR_15;
  FUNC_4(VAR_6, "EAP-IKEV2: Add Integrity Checksum "
      "Data");
  VAR_11 |= VAR_3;
  VAR_15 = FUNC_2(VAR_8->ikev2.proposal.integ);
  if (VAR_15 == ((void*)0)) {
   FUNC_4(VAR_6, "EAP-IKEV2: Unknown INTEG "
       "transform / cannot generate ICV");
   return ((void*)0);
  }
  VAR_14 = VAR_15->hash_len;

  VAR_13 += VAR_14;
 }
 VAR_10 = FUNC_1(VAR_2, VAR_1, VAR_13,
       VAR_0, VAR_9);
 if (VAR_10 == ((void*)0))
  return ((void*)0);

 FUNC_12(VAR_10, VAR_11);
 if (VAR_11 & VAR_4)
  FUNC_10(VAR_10, FUNC_8(VAR_8->out_buf));

 FUNC_11(VAR_10, FUNC_7(VAR_8->out_buf) + VAR_8->out_used,
   VAR_12);
 VAR_8->out_used += VAR_12;

 if (VAR_11 & VAR_3) {
  const u8 *VAR_16 = FUNC_6(VAR_10);
  size_t VAR_17 = FUNC_8(VAR_10);
  FUNC_3(VAR_8->ikev2.proposal.integ,
     VAR_8->ikev2.keys.SK_ai,
     VAR_8->ikev2.keys.SK_integ_len,
     VAR_16, VAR_17, FUNC_9(VAR_10, VAR_14));
 }

 if (VAR_8->out_used == FUNC_8(VAR_8->out_buf)) {
  FUNC_4(VAR_6, "EAP-IKEV2: Sending out %lu bytes "
      "(message sent completely)",
      (unsigned long) VAR_12);
  FUNC_5(VAR_8->out_buf);
  VAR_8->out_buf = ((void*)0);
  VAR_8->out_used = 0;
 } else {
  FUNC_4(VAR_6, "EAP-IKEV2: Sending out %lu bytes "
      "(%lu more to send)", (unsigned long) VAR_12,
      (unsigned long) FUNC_8(VAR_8->out_buf) -
      VAR_8->out_used);
  FUNC_0(VAR_8, VAR_7);
 }

 return VAR_10;
}
