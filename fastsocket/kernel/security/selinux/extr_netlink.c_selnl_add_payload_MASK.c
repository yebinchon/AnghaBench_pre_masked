
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct selnl_msg_setenforce {int val; int seqno; } ;
struct selnl_msg_policyload {int val; int seqno; } ;
struct nlmsghdr {int dummy; } ;


 int FUNC_0 () ;
 struct selnl_msg_setenforce* FUNC_1 (struct nlmsghdr*) ;


 int FUNC_2 (struct selnl_msg_setenforce*,int ,int) ;

__attribute__((used)) static void FUNC_3(struct nlmsghdr *VAR_0, int VAR_1, int VAR_2, void *VAR_3)
{
 switch (VAR_2) {
 case 128: {
  struct selnl_msg_setenforce *VAR_4 = FUNC_1(VAR_0);

  FUNC_2(VAR_4, 0, VAR_1);
  VAR_4->val = *((int *)VAR_3);
  break;
 }

 case 129: {
  struct selnl_msg_policyload *VAR_5 = FUNC_1(VAR_0);

  FUNC_2(VAR_5, 0, VAR_1);
  VAR_5->seqno = *((u32 *)VAR_3);
  break;
 }

 default:
  FUNC_0();
 }
}
