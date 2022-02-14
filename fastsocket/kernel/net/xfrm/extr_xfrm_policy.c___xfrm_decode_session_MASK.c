
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct xfrm_policy_afinfo {int (* decode_session ) (struct sk_buff*,struct flowi*,int) ;} ;
struct sk_buff {int dummy; } ;
struct flowi {int secid; } ;


 int VAR_0 ;
 int FUNC_0 (struct sk_buff*,int *) ;
 int FUNC_1 (struct sk_buff*,struct flowi*,int) ;
 scalar_t__ FUNC_2 (int ) ;
 struct xfrm_policy_afinfo* FUNC_3 (unsigned int) ;
 int FUNC_4 (struct xfrm_policy_afinfo*) ;

int FUNC_5(struct sk_buff *VAR_1, struct flowi *VAR_2,
     unsigned int VAR_3, int VAR_4)
{
 struct xfrm_policy_afinfo *VAR_5 = FUNC_3(VAR_3);
 int VAR_6;

 if (FUNC_2(VAR_5 == ((void*)0)))
  return -VAR_0;

 VAR_5->decode_session(VAR_1, VAR_2, VAR_4);
 VAR_6 = FUNC_0(VAR_1, &VAR_2->secid);
 FUNC_4(VAR_5);
 return VAR_6;
}
