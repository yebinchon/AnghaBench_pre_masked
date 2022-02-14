
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int unchar ;
typedef int u32 ;
struct tipc_portid {int node; } ;
struct tipc_name_seq {int dummy; } ;
struct tipc_cfg_msg_hdr {int tcm_flags; int tcm_len; int tcm_type; } ;
struct sk_buff {int len; scalar_t__ data; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (int ) ;
 int VAR_2 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (struct tipc_cfg_msg_hdr*,struct tipc_cfg_msg_hdr*,int) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (struct sk_buff*,int) ;
 struct sk_buff* FUNC_7 (int ,int ,int const*,int,scalar_t__) ;
 int FUNC_8 (int,struct tipc_portid const*,struct sk_buff*,int ) ;
 int FUNC_9 (char*) ;

__attribute__((used)) static void FUNC_10(void *VAR_3,
    u32 VAR_4,
    struct sk_buff **VAR_5,
    const unchar *VAR_6,
    u32 VAR_7,
    u32 VAR_8,
    struct tipc_portid const *VAR_9,
    struct tipc_name_seq const *VAR_10)
{
 struct tipc_cfg_msg_hdr *VAR_11;
 struct tipc_cfg_msg_hdr *VAR_12;
 struct sk_buff *VAR_13;



 VAR_11 = (struct tipc_cfg_msg_hdr *)VAR_6;
 if ((VAR_7 < sizeof(*VAR_11)) ||
     (VAR_7 != FUNC_0(FUNC_4(VAR_11->tcm_len))) ||
     (FUNC_5(VAR_11->tcm_flags) != VAR_2)) {
  FUNC_9("Invalid configuration message discarded\n");
  return;
 }



 VAR_13 = FUNC_7(VAR_9->node,
      FUNC_5(VAR_11->tcm_type),
      VAR_6 + sizeof(*VAR_11),
      VAR_7 - sizeof(*VAR_11),
      VAR_0 + VAR_1 + sizeof(*VAR_12));
 if (VAR_13) {
  FUNC_6(VAR_13, sizeof(*VAR_12));
  VAR_12 = (struct tipc_cfg_msg_hdr *)VAR_13->data;
  FUNC_3(VAR_12, VAR_11, sizeof(*VAR_12));
  VAR_12->tcm_len = FUNC_1(VAR_13->len);
  VAR_12->tcm_flags &= FUNC_2(~VAR_2);
 } else {
  VAR_13 = *VAR_5;
  *VAR_5 = ((void*)0);
 }


 FUNC_8(VAR_4, VAR_9, VAR_13, VAR_13->len);
}
