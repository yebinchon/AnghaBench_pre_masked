
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sk_buff {scalar_t__ len; int data; } ;
struct capi_ctr {int dummy; } ;
struct cmtp_session {int flags; int num; struct capi_ctr ctrl; } ;
struct cmtp_application {int appl; } ;
typedef int __u32 ;
typedef int __u16 ;


 int FUNC_0 (char*,struct cmtp_session*,struct sk_buff*,scalar_t__) ;
 int FUNC_1 (char*,int) ;
 int FUNC_2 (scalar_t__,int ) ;
 int FUNC_3 (int ) ;
 scalar_t__ FUNC_4 (int ) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (int ,int) ;
 int FUNC_7 (int ,int) ;
 int FUNC_8 (int ) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_9 (struct capi_ctr*,int,struct sk_buff*) ;
 struct cmtp_application* FUNC_10 (struct cmtp_session*,int ,int) ;
 int FUNC_11 (struct cmtp_session*,struct sk_buff*) ;
 int FUNC_12 (struct sk_buff*) ;

void FUNC_13(struct cmtp_session *VAR_4, struct sk_buff *VAR_5)
{
 struct capi_ctr *VAR_6 = &VAR_4->ctrl;
 struct cmtp_application *VAR_7;
 __u16 VAR_8, VAR_9;
 __u32 VAR_10;

 FUNC_0("session %p skb %p len %d", VAR_4, VAR_5, VAR_5->len);

 if (VAR_5->len < VAR_1)
  return;

 if (FUNC_4(VAR_5->data) == VAR_0) {
  FUNC_11(VAR_4, VAR_5);
  return;
 }

 if (VAR_4->flags & (1 << VAR_2)) {
  FUNC_12(VAR_5);
  return;
 }

 VAR_8 = FUNC_2(FUNC_4(VAR_5->data), FUNC_8(VAR_5->data));
 VAR_9 = FUNC_3(VAR_5->data);
 VAR_10 = FUNC_5(VAR_5->data);

 VAR_7 = FUNC_10(VAR_4, VAR_3, VAR_9);
 if (VAR_7) {
  VAR_9 = VAR_7->appl;
  FUNC_6(VAR_5->data, VAR_9);
 } else {
  FUNC_1("Can't find application with id %d", VAR_9);
  FUNC_12(VAR_5);
  return;
 }

 if ((VAR_10 & 0x7f) == 0x01) {
  VAR_10 = (VAR_10 & 0xffffff80) | VAR_4->num;
  FUNC_7(VAR_5->data, VAR_10);
 }

 if (!VAR_6) {
  FUNC_1("Can't find controller %d for message", VAR_4->num);
  FUNC_12(VAR_5);
  return;
 }

 FUNC_9(VAR_6, VAR_9, VAR_5);
}
