
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct sk_buff {int len; scalar_t__ data; } ;
struct rfcomm_session {int flags; } ;
struct rfcomm_mcc {int len; int type; } ;


 int FUNC_0 (char*,struct rfcomm_session*,int,int) ;
 int FUNC_1 (char*,int) ;
 int VAR_0 ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int ,int *) ;
 int FUNC_6 (struct rfcomm_session*,int,struct sk_buff*) ;
 int FUNC_7 (struct rfcomm_session*,int,struct sk_buff*) ;
 int FUNC_8 (struct rfcomm_session*,int,struct sk_buff*) ;
 int FUNC_9 (struct rfcomm_session*,int,int,struct sk_buff*) ;
 int FUNC_10 (struct rfcomm_session*,int ) ;
 int FUNC_11 (struct rfcomm_session*,int ) ;
 int FUNC_12 (struct rfcomm_session*,int,int) ;
 int FUNC_13 (struct rfcomm_session*,int ,scalar_t__,int ) ;
 int FUNC_14 (int ,int *) ;
 int FUNC_15 (struct sk_buff*,int) ;

__attribute__((used)) static int FUNC_16(struct rfcomm_session *VAR_1, struct sk_buff *VAR_2)
{
 struct rfcomm_mcc *VAR_3 = (void *) VAR_2->data;
 u8 VAR_4, VAR_5, VAR_6;

 VAR_5 = FUNC_4(VAR_3->type);
 VAR_4 = FUNC_3(VAR_3->type);
 VAR_6 = FUNC_2(VAR_3->len);

 FUNC_0("%p type 0x%x cr %d", VAR_1, VAR_4, VAR_5);

 FUNC_15(VAR_2, 2);

 switch (VAR_4) {
 case 131:
  FUNC_7(VAR_1, VAR_5, VAR_2);
  break;

 case 129:
  FUNC_9(VAR_1, VAR_5, VAR_6, VAR_2);
  break;

 case 130:
  FUNC_8(VAR_1, VAR_5, VAR_2);
  break;

 case 133:
  FUNC_6(VAR_1, VAR_5, VAR_2);
  break;

 case 135:
  if (VAR_5) {
   FUNC_14(VAR_0, &VAR_1->flags);
   FUNC_10(VAR_1, 0);
  }
  break;

 case 134:
  if (VAR_5) {
   FUNC_5(VAR_0, &VAR_1->flags);
   FUNC_11(VAR_1, 0);
  }
  break;

 case 128:
  if (VAR_5)
   FUNC_13(VAR_1, 0, VAR_2->data, VAR_2->len);
  break;

 case 132:
  break;

 default:
  FUNC_1("Unknown control type 0x%02x", VAR_4);
  FUNC_12(VAR_1, VAR_5, VAR_4);
  break;
 }
 return 0;
}
