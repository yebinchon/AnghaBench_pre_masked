
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u8 ;
struct wpabuf {int dummy; } ;
struct TYPE_3__ {int integ; } ;
struct TYPE_4__ {int keys; TYPE_1__ proposal; } ;
struct eap_ikev2_data {scalar_t__ keys_ready; TYPE_2__ ikev2; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int *,int,struct wpabuf const*,int const*,int const*) ;
 int FUNC_1 (int ,char*) ;

__attribute__((used)) static int FUNC_2(struct eap_ikev2_data *VAR_2,
     const struct wpabuf *VAR_3,
     u8 VAR_4, const u8 *VAR_5, const u8 **VAR_6,
     int VAR_7)
{
 if (VAR_4 & VAR_0) {
  int VAR_8 = FUNC_0(
   VAR_2->ikev2.proposal.integ, &VAR_2->ikev2.keys, 1,
   VAR_3, VAR_5, *VAR_6);
  if (VAR_8 < 0)
   return -1;

  *VAR_6 -= VAR_8;
 } else if (VAR_2->keys_ready && !VAR_7) {
  FUNC_1(VAR_1, "EAP-IKEV2: The message should have "
      "included integrity checksum");
  return -1;
 }

 return 0;
}
