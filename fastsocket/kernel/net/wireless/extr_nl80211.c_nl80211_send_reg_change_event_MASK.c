
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct sk_buff {int dummy; } ;
struct regulatory_request {char* alpha2; scalar_t__ wiphy_idx; scalar_t__ intersect; int initiator; } ;
struct TYPE_2__ {int id; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 scalar_t__ VAR_12 ;
 int FUNC_0 (struct sk_buff*,void*) ;
 int FUNC_1 (struct sk_buff*,void*) ;
 int FUNC_2 (struct sk_buff*,int ,int ,int ) ;
 TYPE_1__ VAR_13 ;
 void* FUNC_3 (struct sk_buff*,int ,int ,int ,int ) ;
 scalar_t__ FUNC_4 (struct sk_buff*,int ,char*) ;
 scalar_t__ FUNC_5 (struct sk_buff*,int ,scalar_t__) ;
 scalar_t__ FUNC_6 (struct sk_buff*,int ,int ) ;
 int FUNC_7 (struct sk_buff*) ;
 struct sk_buff* FUNC_8 (int ,int ) ;
 int FUNC_9 () ;
 int FUNC_10 () ;

void FUNC_11(struct regulatory_request *VAR_14)
{
 struct sk_buff *VAR_15;
 void *VAR_16;

 VAR_15 = FUNC_8(VAR_11, VAR_1);
 if (!VAR_15)
  return;

 VAR_16 = FUNC_3(VAR_15, 0, 0, 0, VAR_6);
 if (!VAR_16) {
  FUNC_7(VAR_15);
  return;
 }


 if (FUNC_6(VAR_15, VAR_3, VAR_14->initiator))
  goto nla_put_failure;

 if (VAR_14->alpha2[0] == '0' && VAR_14->alpha2[1] == '0') {
  if (FUNC_6(VAR_15, VAR_4,
          VAR_10))
   goto nla_put_failure;
 } else if (VAR_14->alpha2[0] == '9' && VAR_14->alpha2[1] == '9') {
  if (FUNC_6(VAR_15, VAR_4,
          VAR_8))
   goto nla_put_failure;
 } else if ((VAR_14->alpha2[0] == '9' && VAR_14->alpha2[1] == '8') ||
     VAR_14->intersect) {
  if (FUNC_6(VAR_15, VAR_4,
          VAR_9))
   goto nla_put_failure;
 } else {
  if (FUNC_6(VAR_15, VAR_4,
          VAR_7) ||
      FUNC_4(VAR_15, VAR_2,
       VAR_14->alpha2))
   goto nla_put_failure;
 }

 if (VAR_14->wiphy_idx != VAR_12 &&
     FUNC_5(VAR_15, VAR_5, VAR_14->wiphy_idx))
  goto nla_put_failure;

 FUNC_1(VAR_15, VAR_16);

 FUNC_9();
 FUNC_2(VAR_15, 0, VAR_13.id,
    VAR_0);
 FUNC_10();

 return;

nla_put_failure:
 FUNC_0(VAR_15, VAR_16);
 FUNC_7(VAR_15);
}
