
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;
struct sk_buff {int data; } ;
struct cmtp_session {int num; } ;
struct cmtp_application {scalar_t__ state; int mapping; } ;
struct capi_ctr {struct cmtp_session* driverdata; } ;
typedef int __u32 ;
typedef int __u16 ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (char*,struct capi_ctr*,struct sk_buff*) ;
 int FUNC_1 (char*,int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ,int ) ;
 int FUNC_5 (int ,int) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 struct cmtp_application* FUNC_6 (struct cmtp_session*,int ,int ) ;
 int FUNC_7 (struct cmtp_session*,struct sk_buff*) ;

__attribute__((used)) static u16 FUNC_8(struct capi_ctr *VAR_4, struct sk_buff *VAR_5)
{
 struct cmtp_session *VAR_6 = VAR_4->driverdata;
 struct cmtp_application *VAR_7;
 __u16 VAR_8;
 __u32 VAR_9;

 FUNC_0("ctrl %p skb %p", VAR_4, VAR_5);

 VAR_8 = FUNC_2(VAR_5->data);
 VAR_9 = FUNC_3(VAR_5->data);

 VAR_7 = FUNC_6(VAR_6, VAR_3, VAR_8);
 if ((!VAR_7) || (VAR_7->state != VAR_0)) {
  FUNC_1("Can't find application with id %d", VAR_8);
  return VAR_1;
 }

 FUNC_4(VAR_5->data, VAR_7->mapping);

 if ((VAR_9 & 0x7f) == VAR_6->num) {
  VAR_9 = (VAR_9 & 0xffffff80) | 0x01;
  FUNC_5(VAR_5->data, VAR_9);
 }

 FUNC_7(VAR_6, VAR_5);

 return VAR_2;
}
