
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
struct sk_buff {int transport_header; scalar_t__ protocol; scalar_t__ data; } ;
struct llc_pdu_un {int ctrl_1; } ;
typedef scalar_t__ s32 ;
typedef int __be16 ;
struct TYPE_2__ {int h_proto; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 TYPE_1__* FUNC_0 (struct sk_buff*) ;
 scalar_t__ FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (struct sk_buff*,int) ;
 int FUNC_4 (struct sk_buff*,scalar_t__) ;
 int FUNC_5 (struct sk_buff*,int) ;
 int* FUNC_6 (struct sk_buff*) ;
 scalar_t__ FUNC_7 (int) ;

__attribute__((used)) static inline int FUNC_8(struct sk_buff *VAR_3)
{
 u8 VAR_4 = 2;
 struct llc_pdu_un *VAR_5;

 if (FUNC_7(!FUNC_3(VAR_3, sizeof(*VAR_5))))
  return 0;

 VAR_5 = (struct llc_pdu_un *)VAR_3->data;
 if ((VAR_5->ctrl_1 & VAR_1) == VAR_2)
  VAR_4 = 1;
 VAR_4 += 2;

 if (FUNC_7(!FUNC_3(VAR_3, VAR_4)))
  return 0;

 VAR_3->transport_header += VAR_4;
 FUNC_5(VAR_3, VAR_4);
 if (VAR_3->protocol == FUNC_1(VAR_0)) {
  __be16 VAR_6 = FUNC_0(VAR_3)->h_proto;
  s32 VAR_7 = FUNC_2(VAR_6) - VAR_4;

  if (VAR_7 < 0 ||
      ((FUNC_6(VAR_3) -
        (u8 *)VAR_5) - VAR_4) < VAR_7)
   return 0;
  if (FUNC_7(FUNC_4(VAR_3, VAR_7)))
   return 0;
 }
 return 1;
}
