
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct sk_buff {scalar_t__ data; int tail; int len; } ;
struct rfcomm_session {int dummy; } ;
struct rfcomm_hdr {int ctrl; int len; int addr; } ;


 int FUNC_0 (char*,...) ;
 int VAR_0 ;





 scalar_t__ FUNC_1 (scalar_t__,int,int) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 scalar_t__ FUNC_4 (int ) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (struct sk_buff*) ;
 int FUNC_7 (struct rfcomm_session*,int,int ,struct sk_buff*) ;
 int FUNC_8 (struct rfcomm_session*,int) ;
 int FUNC_9 (struct rfcomm_session*,int) ;
 int FUNC_10 (struct rfcomm_session*,struct sk_buff*) ;
 int FUNC_11 (struct rfcomm_session*,int) ;
 int FUNC_12 (struct rfcomm_session*,int) ;
 int FUNC_13 (struct sk_buff*,int) ;
 scalar_t__ FUNC_14 (struct sk_buff*) ;

__attribute__((used)) static int FUNC_15(struct rfcomm_session *VAR_1, struct sk_buff *VAR_2)
{
 struct rfcomm_hdr *VAR_3 = (void *) VAR_2->data;
 u8 VAR_4, VAR_5, VAR_6;

 VAR_5 = FUNC_2(VAR_3->addr);
 VAR_4 = FUNC_3(VAR_3->ctrl);


 VAR_2->len--; VAR_2->tail--;
 VAR_6 = *(u8 *)FUNC_14(VAR_2);

 if (FUNC_1(VAR_2->data, VAR_4, VAR_6)) {
  FUNC_0("bad checksum in packet");
  FUNC_6(VAR_2);
  return -VAR_0;
 }

 if (FUNC_4(VAR_3->len))
  FUNC_13(VAR_2, 3);
 else
  FUNC_13(VAR_2, 4);

 switch (VAR_4) {
 case 130:
  if (FUNC_5(VAR_3->ctrl))
   FUNC_11(VAR_1, VAR_5);
  break;

 case 132:
  if (FUNC_5(VAR_3->ctrl))
   FUNC_8(VAR_1, VAR_5);
  break;

 case 129:
  if (FUNC_5(VAR_3->ctrl))
   FUNC_12(VAR_1, VAR_5);
  break;

 case 131:
  FUNC_9(VAR_1, VAR_5);
  break;

 case 128:
  if (VAR_5)
   return FUNC_7(VAR_1, VAR_5, FUNC_5(VAR_3->ctrl), VAR_2);

  FUNC_10(VAR_1, VAR_2);
  break;

 default:
  FUNC_0("Unknown packet type 0x%02x\n", VAR_4);
  break;
 }
 FUNC_6(VAR_2);
 return 0;
}
