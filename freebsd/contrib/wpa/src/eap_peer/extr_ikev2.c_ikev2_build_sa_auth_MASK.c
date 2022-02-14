
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct wpabuf {int dummy; } ;
struct TYPE_2__ {int integ; int encr; } ;
struct ikev2_responder_data {int state; int keys; TYPE_1__ proposal; scalar_t__ IDr_len; } ;
struct ikev2_hdr {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 scalar_t__ FUNC_0 (struct ikev2_responder_data*,struct wpabuf*,int ) ;
 scalar_t__ FUNC_1 (int ,int ,int *,int ,struct wpabuf*,struct wpabuf*,int ) ;
 int FUNC_2 (struct ikev2_responder_data*,struct wpabuf*,int ,int ,int) ;
 scalar_t__ FUNC_3 (struct ikev2_responder_data*,struct wpabuf*,int ) ;
 int FUNC_4 (int ,char*,struct wpabuf*) ;
 struct wpabuf* FUNC_5 (scalar_t__) ;
 int FUNC_6 (struct wpabuf*) ;

__attribute__((used)) static struct wpabuf * FUNC_7(struct ikev2_responder_data *VAR_7)
{
 struct wpabuf *VAR_8, *VAR_9;



 VAR_8 = FUNC_5(sizeof(struct ikev2_hdr) + VAR_7->IDr_len + 1000);
 if (VAR_8 == ((void*)0))
  return ((void*)0);
 FUNC_2(VAR_7, VAR_8, VAR_5, VAR_2, 1);

 VAR_9 = FUNC_5(VAR_7->IDr_len + 1000);
 if (VAR_9 == ((void*)0)) {
  FUNC_6(VAR_8);
  return ((void*)0);
 }

 if (FUNC_3(VAR_7, VAR_9, VAR_1) ||
     FUNC_0(VAR_7, VAR_9, VAR_4) ||
     FUNC_1(VAR_7->proposal.encr, VAR_7->proposal.integ,
      &VAR_7->keys, 0, VAR_8, VAR_9,
      VAR_3)) {
  FUNC_6(VAR_9);
  FUNC_6(VAR_8);
  return ((void*)0);
 }
 FUNC_6(VAR_9);

 FUNC_4(VAR_6, "IKEV2: Sending message (SA_AUTH)", VAR_8);

 VAR_7->state = VAR_0;

 return VAR_8;
}
