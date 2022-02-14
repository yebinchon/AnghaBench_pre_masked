
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u8 ;
struct wpabuf {int dummy; } ;
struct eap_sm {TYPE_2__* user; } ;
struct eap_eke_data {scalar_t__ state; int peerid_len; int msgs; int phase2; int * peerid; int peerid_type; int sess; } ;
struct TYPE_4__ {scalar_t__ password_len; int * password; TYPE_1__* methods; } ;
struct TYPE_3__ {scalar_t__ vendor; scalar_t__ method; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_0 (struct eap_eke_data*,int ) ;
 scalar_t__ FUNC_1 (int *,int const,int const,int const,int const) ;
 int FUNC_2 (struct eap_eke_data*,int ) ;
 scalar_t__ FUNC_3 (struct eap_sm*,int *,int,int ) ;
 int FUNC_4 (int *) ;
 int * FUNC_5 (int const*,int) ;
 int FUNC_6 (int const*) ;
 int FUNC_7 (int ,char*,int *,int) ;
 int FUNC_8 (int ,char*,...) ;
 int FUNC_9 (struct wpabuf const*) ;
 int FUNC_10 (int ,struct wpabuf const*) ;
 scalar_t__ FUNC_11 (int *,int ) ;

__attribute__((used)) static void FUNC_12(struct eap_sm *VAR_10,
         struct eap_eke_data *VAR_11,
         const struct wpabuf *VAR_12,
         const u8 *VAR_13, size_t VAR_14)
{
 const u8 *VAR_15, *VAR_16;
 int VAR_17;

 FUNC_8(VAR_8, "EAP-EKE: Received Response/Identity");

 if (VAR_11->state != VAR_7) {
  FUNC_0(VAR_11, VAR_3);
  return;
 }

 VAR_15 = VAR_13;
 VAR_16 = VAR_13 + VAR_14;

 if (VAR_15 + 2 + 4 + 1 > VAR_16) {
  FUNC_8(VAR_9, "EAP-EKE: Too short EAP-EKE-ID payload");
  FUNC_0(VAR_11, VAR_3);
  return;
 }

 if (*VAR_15 != 1) {
  FUNC_8(VAR_9, "EAP-EKE: Unexpected NumProposals %d (expected 1)",
      *VAR_15);
  FUNC_0(VAR_11, VAR_3);
  return;
 }

 VAR_15 += 2;

 if (!FUNC_6(VAR_15)) {
  FUNC_8(VAR_9, "EAP-EKE: Unexpected Proposal (%u:%u:%u:%u)",
      VAR_15[0], VAR_15[1], VAR_15[2], VAR_15[3]);
  FUNC_0(VAR_11, VAR_3);
  return;
 }

 FUNC_8(VAR_8, "EAP-EKE: Selected Proposal (%u:%u:%u:%u)",
     VAR_15[0], VAR_15[1], VAR_15[2], VAR_15[3]);
 if (FUNC_1(&VAR_11->sess, VAR_15[0], VAR_15[1], VAR_15[2], VAR_15[3]) <
     0) {
  FUNC_0(VAR_11, VAR_2);
  return;
 }
 VAR_15 += 4;

 VAR_11->peerid_type = *VAR_15++;
 FUNC_4(VAR_11->peerid);
 VAR_11->peerid = FUNC_5(VAR_15, VAR_16 - VAR_15);
 if (VAR_11->peerid == ((void*)0)) {
  FUNC_8(VAR_9, "EAP-EKE: Failed to allocate memory for peerid");
  FUNC_0(VAR_11, VAR_2);
  return;
 }
 VAR_11->peerid_len = VAR_16 - VAR_15;
 FUNC_8(VAR_8, "EAP-EKE: Peer IDType %u", VAR_11->peerid_type);
 FUNC_7(VAR_8, "EAP-EKE: Peer Identity",
     VAR_11->peerid, VAR_11->peerid_len);

 if (FUNC_3(VAR_10, VAR_11->peerid, VAR_11->peerid_len, VAR_11->phase2)) {
  FUNC_8(VAR_9, "EAP-EKE: Peer Identity not found from user database");
  FUNC_0(VAR_11, VAR_1);
  return;
 }

 for (VAR_17 = 0; VAR_17 < VAR_4; VAR_17++) {
  if (VAR_10->user->methods[VAR_17].vendor == VAR_6 &&
      VAR_10->user->methods[VAR_17].method == VAR_5)
   break;
 }
 if (VAR_17 == VAR_4) {
  FUNC_8(VAR_9, "EAP-EKE: Matching user entry does not allow EAP-EKE");
  FUNC_0(VAR_11, VAR_1);
  return;
 }

 if (VAR_10->user->password == ((void*)0) || VAR_10->user->password_len == 0) {
  FUNC_8(VAR_9, "EAP-EKE: No password configured for peer");
  FUNC_0(VAR_11, VAR_1);
  return;
 }

 if (FUNC_11(&VAR_11->msgs, FUNC_9(VAR_12)) < 0) {
  FUNC_0(VAR_11, VAR_2);
  return;
 }
 FUNC_10(VAR_11->msgs, VAR_12);

 FUNC_2(VAR_11, VAR_0);
}
