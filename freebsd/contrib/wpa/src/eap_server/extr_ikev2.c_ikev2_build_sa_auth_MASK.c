
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
struct wpabuf {int dummy; } ;
struct TYPE_2__ {int integ; int encr; } ;
struct ikev2_initiator_data {int unknown_user; int shared_secret_len; int keys; TYPE_1__ proposal; int IDr_len; int * shared_secret; int IDr; int cb_ctx; int * (* get_shared_secret ) (int ,int ,int ,size_t*) ;} ;
struct ikev2_hdr {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 scalar_t__ FUNC_0 (struct ikev2_initiator_data*,struct wpabuf*,int ) ;
 scalar_t__ FUNC_1 (int ,int ,int *,int,struct wpabuf*,struct wpabuf*,int ) ;
 int FUNC_2 (struct ikev2_initiator_data*,struct wpabuf*,int ,int ,int) ;
 scalar_t__ FUNC_3 (struct ikev2_initiator_data*,struct wpabuf*,int ) ;
 int FUNC_4 (int *) ;
 int * FUNC_5 (int) ;
 int * FUNC_6 (int const*,size_t) ;
 scalar_t__ FUNC_7 (int *,int) ;
 int * FUNC_8 (int ,int ,int ,size_t*) ;
 int FUNC_9 (int ,char*,struct wpabuf*) ;
 int FUNC_10 (int ,char*) ;
 struct wpabuf* FUNC_11 (scalar_t__) ;
 int FUNC_12 (struct wpabuf*) ;

__attribute__((used)) static struct wpabuf * FUNC_13(struct ikev2_initiator_data *VAR_7)
{
 struct wpabuf *VAR_8, *VAR_9;
 const u8 *VAR_10;
 size_t VAR_11;

 VAR_10 = VAR_7->get_shared_secret(VAR_7->cb_ctx, VAR_7->IDr,
      VAR_7->IDr_len, &VAR_11);
 if (VAR_10 == ((void*)0)) {
  FUNC_10(VAR_5, "IKEV2: Could not get shared secret - "
      "use fake value");




  VAR_7->unknown_user = 1;
  FUNC_4(VAR_7->shared_secret);
  VAR_7->shared_secret = FUNC_5(16);
  if (VAR_7->shared_secret == ((void*)0))
   return ((void*)0);
  VAR_7->shared_secret_len = 16;
  if (FUNC_7(VAR_7->shared_secret, 16))
   return ((void*)0);
 } else {
  FUNC_4(VAR_7->shared_secret);
  VAR_7->shared_secret = FUNC_6(VAR_10, VAR_11);
  if (VAR_7->shared_secret == ((void*)0))
   return ((void*)0);
  VAR_7->shared_secret_len = VAR_11;
 }



 VAR_8 = FUNC_11(sizeof(struct ikev2_hdr) + VAR_7->IDr_len + 1000);
 if (VAR_8 == ((void*)0))
  return ((void*)0);
 FUNC_2(VAR_7, VAR_8, VAR_4, VAR_1, 1);

 VAR_9 = FUNC_11(VAR_7->IDr_len + 1000);
 if (VAR_9 == ((void*)0)) {
  FUNC_12(VAR_8);
  return ((void*)0);
 }

 if (FUNC_3(VAR_7, VAR_9, VAR_0) ||
     FUNC_0(VAR_7, VAR_9, VAR_3) ||
     FUNC_1(VAR_7->proposal.encr, VAR_7->proposal.integ,
      &VAR_7->keys, 1, VAR_8, VAR_9,
      VAR_2)) {
  FUNC_12(VAR_9);
  FUNC_12(VAR_8);
  return ((void*)0);
 }
 FUNC_12(VAR_9);

 FUNC_9(VAR_6, "IKEV2: Sending message (SA_AUTH)", VAR_8);

 return VAR_8;
}
