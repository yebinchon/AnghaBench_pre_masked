
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct wpabuf {int dummy; } ;
struct TYPE_2__ {int integ; int encr; } ;
struct ikev2_responder_data {scalar_t__ last_msg; int state; int keys; TYPE_1__ proposal; } ;
struct ikev2_hdr {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 scalar_t__ FUNC_0 (int ,int ,int *,int ,struct wpabuf*,struct wpabuf*,int ) ;
 int FUNC_1 (struct ikev2_responder_data*,struct wpabuf*,int ,int ,int) ;
 scalar_t__ FUNC_2 (struct ikev2_responder_data*,struct wpabuf*,int ) ;
 int FUNC_3 (struct wpabuf*) ;
 int FUNC_4 (int ,char*,struct wpabuf*) ;
 struct wpabuf* FUNC_5 (int) ;
 int FUNC_6 (struct wpabuf*) ;

__attribute__((used)) static struct wpabuf * FUNC_7(struct ikev2_responder_data *VAR_9)
{
 struct wpabuf *VAR_10;

 VAR_10 = FUNC_5(sizeof(struct ikev2_hdr) + 1000);
 if (VAR_10 == ((void*)0))
  return ((void*)0);
 if (VAR_9->last_msg == VAR_6) {

  struct wpabuf *VAR_11 = FUNC_5(100);
  if (VAR_11 == ((void*)0)) {
   FUNC_6(VAR_10);
   return ((void*)0);
  }
  FUNC_1(VAR_9, VAR_10, VAR_4,
    VAR_1, 1);
  if (FUNC_2(VAR_9, VAR_11,
          VAR_3) ||
      FUNC_0(VAR_9->proposal.encr,
       VAR_9->proposal.integ,
       &VAR_9->keys, 0, VAR_10, VAR_11,
       VAR_2)) {
   FUNC_6(VAR_11);
   FUNC_6(VAR_10);
   return ((void*)0);
  }
  FUNC_6(VAR_11);
  VAR_9->state = VAR_0;
 } else {

  FUNC_1(VAR_9, VAR_10, VAR_5,
    VAR_2, 0);
  if (FUNC_2(VAR_9, VAR_10,
          VAR_3)) {
   FUNC_6(VAR_10);
   return ((void*)0);
  }
  VAR_9->state = VAR_8;
 }

 FUNC_3(VAR_10);

 FUNC_4(VAR_7, "IKEV2: Sending message (Notification)",
   VAR_10);

 return VAR_10;
}
